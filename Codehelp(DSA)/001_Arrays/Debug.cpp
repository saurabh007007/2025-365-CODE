#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return true;
        }
    }
    return false;
}
int main(){
// {
//     int n, sum = 0;
int arr[6]={1,2,3,4,6,10};
//     cin >> n;
//     int input[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> input[i];
//     }
//     for (int i = 0; i < n; i++)
//     {b console
//         sum = sum + input[i];
//     }
//     cout << sum << endl;
 cout << linearSearch(arr,6,29) <<endl;
    return 0;
}
