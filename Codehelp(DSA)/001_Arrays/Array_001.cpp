#include<stdio.h>
#include<iostream>
using namespace std;


// int main(){
//     int n=10;
//     cout<<n;
//     int arr[10];
//     for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
//         cout<<arr[i];
//     }
//     return 0;
// }
//array that can store 10 bolean

int booleanArray(){
    bool arr[10];
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cin>>arr[i];
    }
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i];
    }
    return 0;
}

void LinearSearch(int arr[],int size,int k){
    int n=size;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout<<i;
        }
        
        
    }
    
}
int main(){
    int arr[5]={1,3,4,502,2};
    int k=2;
    LinearSearch(arr,5,k);
}