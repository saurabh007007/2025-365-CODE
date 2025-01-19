class Solution {
    public int trapRainWater(int[][] heightMap) {
        int m = heightMap.length;
        int n = heightMap[0].length;
        int[][] waterLevel = new int[m][n];
        int sum = 0;

        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                    waterLevel[i][j] = heightMap[i][j];
                } else {
                    waterLevel[i][j] = Math.max(heightMap[i][j], Math.min(waterLevel[i - 1][j], waterLevel[i][j - 1]));
                }
            }
        }

        
        while (true) {
            boolean hasChanged = false;

           
            for (int i = m - 2; i >= 1; i--) {
                for (int j = n - 2; j >= 1; j--) {
                    int oldValue = waterLevel[i][j];
                    waterLevel[i][j] = Math.max(
                        heightMap[i][j],
                        Math.min(waterLevel[i][j], Math.min(waterLevel[i + 1][j], waterLevel[i][j + 1]))
                    );
                    if (waterLevel[i][j] != oldValue) {
                        hasChanged = true;
                    }
                }
            }

            
            for (int i = 1; i < m - 1; i++) {
                for (int j = 1; j < n - 1; j++) {
                    int oldValue = waterLevel[i][j];
                    waterLevel[i][j] = Math.max(
                        heightMap[i][j],
                        Math.min(waterLevel[i][j], Math.min(waterLevel[i - 1][j], waterLevel[i][j - 1]))
                    );
                    if (waterLevel[i][j] != oldValue) {
                        hasChanged = true;
                    }
                }
            }

            if (!hasChanged) break;
        }

       
        for (int i = 1; i < m - 1; i++) {
            for (int j = 1; j < n - 1; j++) {
                sum += waterLevel[i][j] - heightMap[i][j];
            }
        }

        return sum;
    }
}