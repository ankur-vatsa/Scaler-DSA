#include<iostream>
using namespace std;

void printRecursion(int n){
    // base condition
    if(n==0){
        return;
    }

    //task

    cout<<n<<endl;

    //recursive call
    printRecursion(n-1);
}

int main(){
    int n=5;
    printRecursion(5);
}