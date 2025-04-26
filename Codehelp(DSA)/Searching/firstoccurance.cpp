#include<iostream>
using namespace std;

void findFirstOccurance(int arr[],int n,int target,int &ans){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            ans=mid;
            e=mid-1;
            
        }else if(target>arr[mid]){
            s=mid+1;
        }else if(target<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
}

void lastOccrance(int arr[],int n, int target ,int &ans){
    int s=0;
    int e=n-1;
    int mid=s+(s+e)/2;
    while(s<=e){
        if(arr[mid]==target){
            ans=mid;
            s=mid+1;
        }
        else if(target>arr[mid]){
            s=mid+1;
        }else if(target<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
        

    }
}

int main(){
    int arr[]={20,20,20,20,20,20,20,30,40,50};
    int target=20;
    int n=10;
    int first=-1;
    int total=0;
    int last=-1;
    findFirstOccurance(arr,n,target,first);

    lastOccrance(arr,n,target,last);
    total=last-first+1;
    cout<<"total  occrane index "<< total<<endl;

}