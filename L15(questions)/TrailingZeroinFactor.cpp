#include<iostream>
using namespace std;
int trailZero(int n){
     int count = 0 ;
    while(n>=5){
        count+=n/5;
        n = n/5;
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
   cout<<trailZero(n);
}