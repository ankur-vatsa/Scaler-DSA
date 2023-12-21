//find the character which is just greater than the key element
#include<iostream>
using namespace std;
char solve(char a[],int n,char key){
    int l=0;
    int r=n-1;
    char res=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(a[mid]==key || a[mid]<key){
            l=mid+1;
        }
        else {
            res=a[mid];
            r=mid-1;
        }
        // else{
        //     l=mid+1;
        // }
    }
    return res;
}
int main(){
    char a[]={'a','d','d','f','f','f','k','m'};
    char key='c';
    int size=sizeof(a)/sizeof(a[0]);
    char result=solve(a,size,key);
    if(result==-1){
        cout<<"NOT FOUND";
    }
    else{
    cout<<"Result: "<<result;
    }
    
}