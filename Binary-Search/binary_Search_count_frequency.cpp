#include<iostream>
using namespace std;
int firstOccur(int arr[],int left,int right,int key){
    int res=-1;
    while(left<=right){
        int middle=left+(right-left)/2;
        if(arr[middle]==key){
            res=middle;
            right=middle-1;
        }
        else if(arr[middle]>key){
            right=middle-1;
        }
        else{
            left=middle+1;
        }
    }
    return res;
}
int lastOccur(int arr[],int n,int key){
    int left =0;
    int right=n-1;
    int res=-1;
    while(left<=right){
        int middle=left+(right-left)/2;
        if(arr[middle]==key){
            res=middle;
            left=middle+1;
        }
        else if(arr[middle]>key){
            right=middle-1;
        }
        else{
            left=middle+1;
        }
    }
    return res;
}
int main(){
    int arr[]={1,2,2,3,3,3,4,4,4,4,5};
    int l=0;
    int r=sizeof(arr)/sizeof(arr[0]);
    int key=2;
    int start=firstOccur(arr,l,r-1,key);
    cout<<start<<endl;
    int end=lastOccur(arr,l,r-1,key);
    cout<<end<<endl;
    int count=end-start+1;
    cout<<count;
}