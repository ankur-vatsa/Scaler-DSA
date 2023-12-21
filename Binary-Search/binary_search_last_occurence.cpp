// Probelm : Print the last occurenece (index) of the key element

#include<iostream>
using namespace std;
int binarySearch(int arr[],int l,int r,int k){
    int res=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==k){
            res=mid;
            l=mid+1;
        }
        else if(arr[mid]>k){
            r=mid-1;
        }
        else {
            l=mid+1;
        }
    }
    return res;
}
int main(){
    // cout<<5<<endl;
    int arr[]={0,1,2,3,3,4,4,5,5,6,7};
    int k=5;
    int n=sizeof(arr)/sizeof(arr[0]);
    int index=binarySearch(arr,0,n-1,k);
    cout<<"Index of "<<k<<" is: "<<index;
}