#include<iostream>
using namespace std;
int main(){
    int arr[6] = {10,20,7,11,8,4};
    int x, index=-1;
    cout<<"Enter an Element: ";
    cin>>x;
    for(int i = 0; i<=5; i++){
        if(arr[i]==x){
        index = i;
        break;
        }

    }
    cout<<index;
}