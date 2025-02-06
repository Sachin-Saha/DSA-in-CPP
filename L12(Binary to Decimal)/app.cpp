#include <iostream>
using namespace std;
int main(){
    // Decimal to Binary 
    // int rem, num, ans=0, mul= 1;
    // cout<<"Enter number: ";
    // cin>>num;
    // while(num>0){
    //     // reminder
    //     rem = num%2;
    //     // quotiont
    //     num = num/2;
    //     // ans
    //     ans = rem*mul+ans;
    //     // mul
    //     mul = mul*10;


    // Binary to Decimal 
    int rem, num, ans=0, mul= 1;
    cout<<"Enter number: ";
    cin>>num;
    while(num>0){
        // reminder
        rem = num%10;
        // quotiont
        num = num/10;
        // ans
        ans = rem*mul+ans;
        // mul
        mul = mul*2;
        
    }
    cout<<ans<<endl;
}