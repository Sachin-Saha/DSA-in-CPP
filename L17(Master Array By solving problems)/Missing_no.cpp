#include<iostream>
using namespace std;
int main(){
    int sum =0 , n;
    int arr[6]={1,3,4,5,6};
    // sum of array
    for(int i=0; i<5 ; i++){
        sum+=arr[i];
    }
    // sum of n number
    int ans = n*(n+1)/2;
    int finalAns = ans-sum;
    cout<<finalAns;
}