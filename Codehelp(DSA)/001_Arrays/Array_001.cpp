#include<stdio.h>
#include<iostream>
using namespace std;


int main(){
    int n=10;
    cout<<n;
    int arr[10];
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cin>>arr[i];
    }
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i];
    }
    return 0;
}
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