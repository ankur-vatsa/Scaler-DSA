#include<iostream>
using namespace std;
int binarySearch(int arr[],int l,int r,int k){
    int result=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==k){
            result=mid;
            r=mid-1;
        }
        else if(arr[mid]>k){
            r=mid-1;
        }
        else {
            l=mid+1;
        }
    }
    return result;
}
int main(){
    int arr[]={0,1,2,3,3,4,4,5,6,7};
    int k=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    int index=binarySearch(arr,0,n-1,k);
    cout<<"Index of "<<k<<" is: "<<index<<endl;
}
// #include <iostream>
// #include <vector>
// using namespace std;
// int findFirstOccurrence(const vector<int>& arr, int target) {
//     int left = 0;
//     int right = arr.size() - 1;
//     int result = -1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;

//         if (arr[mid] == target) {
//             // Found a match, but continue searching on the left side
//             result = mid;
//             right = mid - 1;
//         } else if (arr[mid] < target) {
//             // Continue searching on the right side
//             left = mid + 1;
//         } else {
//             // Continue searching on the left side
//             right = mid - 1;
//         }
//     }

//     return result;
// }

// int main() {
//     vector<int> arr = {1, 2, 2, 2, 3, 4, 5, 6};
//     int target = 2;

//     int result = findFirstOccurrence(arr, target);

//     if (result != -1) {
//         cout << "First occurrence of " << target << " is at index " << result << endl;
//     } else {
//         cout << target << " not found in the array." << endl;
//     }

//     return 0;
// }
