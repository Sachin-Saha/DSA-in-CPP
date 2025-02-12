#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements in array: ";
    // insert the element in the array
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
   
    for(int i= n-2; i>=0; i--)
    {
        bool swapped = 0; // check swapping or not
        for(int j=0; j<=i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapped=1;
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped==0)
        break;
    }
    // print the array
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}