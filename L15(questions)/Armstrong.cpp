#include<iostream>
#include <math.h>
using namespace std;


int Countdigit(int n){
    int count=0;
    while(n){
        count++;
        n/=10;
    }
    return count;
}

int Armstrong(int num, int digit){
    int n = num , ans = 0, rem;
    rem = n%10;
    n /=10;
    ans = ans + pow(rem, digit);
if(ans==num)
    return 1;
    else 
    return 0;
}
  
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    //count digit
    int digit = Countdigit(num);

    // Armstrong
    cout<<Armstrong(num, digit);

}