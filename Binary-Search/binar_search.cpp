#include<iostream>
#include<algorithm>
using namespace std;
int binarysearch(int arr[],int k,int n){
    int s=0;
    // int n=sizeof(arr)/sizeof(arr[0]);
    // int n=arr.count();
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(k>arr[mid]){
            s=mid+1;
        }else if(k<arr[mid]){
            e=mid-1;
        }else{
            return mid;
        }
    }
return -1;
}
int main(){
    int arr[]={11,22,33,44,55,66,77,88};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=55;
    int pos= binarysearch(arr,k,size);
    cout<<pos;
}