#include<iostream>
using namespace std;


// int sum(int m, int n){   // Function declaration
// // Function defin
//     int ans = m+n;  
//     return ans ;
// }
int Prime(int n){
    if(n<2)
    return 0;
    for(int i = 2; i<=n; i++){
        if(n%i==0)
        return 0;
      }
    return 1;
}




int fact(int k){
    int ans = 1;
    for(int i = 1; i<=k; i++){
        ans = ans*i;
        return ans ;
    }
}




// Swap 
void swap(int &a, int &b){   // pass by referrence : & laga diya to main ke andar ka aur function ke andar ki values same rahegi 
 int c;
 c=a;
 a=b;
 b=c;
}


int main(){
   /* int a, b;
    cout<<"Enter a number: ";
    cin>>a>>b;
    //  A is prime or not
    cout<<Prime(a);
    // A ka Factor
    fact(b);
    // B is prime or not 
    Prime(b-a);
    // B ka factorial 
    fact(b);
    // B-A is prime or not 
    Prime(b-a);
    // B-A ka factorial 
    fact(b-a);
*/
     int a, b;
     cout<<"Enter a number: ";
     cin>>a>>b;
   swap(a, b);
   cout<<"value of a is "<<a<<" "<<"value of b is "<<b;

}