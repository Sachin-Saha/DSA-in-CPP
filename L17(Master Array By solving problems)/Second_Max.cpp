#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[7]={2,6,4,3,8,5,2};
// int ans = INT_MIN;
int ans = -1;

    // First largest number
    for(int i= 0; i<6; i++){
        if(arr[i]>ans){
            ans = arr[i];
        }
    }
    cout<<ans<<" ";

    // second largest 
    // int second = INT_MIN;
    int second = -1;  // contraints 1< Arr <10^5
    for(int i = 0; i<6; i++){
        if(arr[i]!=ans){
            second = max(second, arr[i]);
        }
    }
    cout<<second;

    

}