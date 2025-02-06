#include<iostream>
using namespace std;
// a[] is not same array as declared in main function
void fun(int a[], int n){
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int arr[5]= {3,2,1,6,7};
    fun(arr,5);  // fun(name of array , size of array)
}