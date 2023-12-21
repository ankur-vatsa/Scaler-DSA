#include<iostream>
using namespace std;
// i in the index position of the elemet being matched
int binarySearch(int arr[],int l,int r,int k){
    // int mid=(l+r)/2;
    int mid=l+(r-1)/2;
    if(l<=r){
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
           return  binarySearch(arr,l,mid-1,k);
        }
        else{
            return binarySearch(arr,mid+1,r,k);
        }
    }
    return -1;
}
int main(){
    int arr[]={00,11,22,33,44,55,66,77,88,99};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=55;
    int ind=binarySearch(arr,0,size-1,k);
    cout<<"Index of "<<k<<" is: "<<ind;
}