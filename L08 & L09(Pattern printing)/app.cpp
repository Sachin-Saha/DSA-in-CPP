#include <iostream>
using namespace std;
int main(){
    //! problem 1:
    /*
    print the given pattern
        *
      * *
    * * *
  * * * *
* * * * *
*/
    int n , col, row;
    // cout<<"Enter a number: ";
    // cin>>n;
//   for(row= 1; row<=n; row++){
//     // spcae
//     for(col=1; col<=n-row; col++){
//         cout<<"  ";
//     }
//     for(col= 1; col<=row; col++){
//         cout<<"* ";
//     }
//     cout<<endl;
//   }



//! Problem 2:
/*
print the given pattern 
        1 
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5
*/
// for(row=1; row<=5; row++){
//     for(col=1; col<=5-row; col++){
//         cout<<"  ";   // double space
//     }
//     for(col=1; col<=row; col++){
//         cout<<col<<" ";
//     }
//     cout<<endl;
// }

 //! Problem 3:
 /*
print the given pattern 
        A 
      A B
    A B C
  A B C D
A B C D E
*/
// for(row=1; row<=5; row++){
//     for(col=1; col<=5-row; col++){
//         cout<<"  ";   // double space
//     }
//     for(char name='A'; name<='A'+row-1; name++){
//         cout<<name<<" ";
//     }
//     cout<<endl;
// }





//! Problem 4:
/*
print the given pattern 
        1 
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1
*/
for(row=1; row<=5; row++){
    for(col=1; col<=5-row; col++){
        cout<<"  ";   // double space
    }
    for(col= row; col>=1; col--){
        cout<<col<<" ";
    }
    cout<<endl;
}


} 