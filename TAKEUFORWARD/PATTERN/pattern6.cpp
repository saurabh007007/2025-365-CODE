class Solution {
public:
    void pattern6(int n) {
        for(int i=0;i<n;i++){
            for (int j=1;j<=n-i;j++){
                cout<<j;
            }
            cout<<endl;
        }
    }
};

