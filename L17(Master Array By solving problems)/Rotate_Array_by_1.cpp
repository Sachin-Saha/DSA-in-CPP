#include<iostream>
using namespace std;
int main(){
    int n;
    // cout<<"Enter number: ";
    int arr[6]={2,7,4,11,5,8};
    int temp = 8;
    for(int i=n-2; i>=0; i--){
            arr[i+1] = arr[i];
            arr[0] = temp;
    }

}