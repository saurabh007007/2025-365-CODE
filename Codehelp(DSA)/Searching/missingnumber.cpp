#include<iostream>
#include<vector>
using namespace std;



    int missingNumber(vector<int> nums) {
        int sum = 0;
        int n = nums.size();
        int orgsum = n*(n+1) / 2;
        for(int i=0; i<n; i++) {
            sum += nums[i];
        }
        
        return orgsum - sum;
    }


int main(){

}
