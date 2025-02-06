#include<iostream>
using namespace std;
int main(){
    // for(int row=1; row<=5; row++){
    //     for(int col=1 ; col<=5; col++){
    //         cout<<col*col*col<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int row=1; row<=5; row++){
    //     for(char col='a' ; col<='e'; col++){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }//o/p
 // a a a a a 
// b b b b b
// c c c c c
// d d d d d
// e e e e e
int count=1;
 for(int row=1; row<=5; row++){
        for(int col= 1 ; col<=5; col++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;

}
}