#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Enter sides: ";
    cin>>a>>b>>c>>d;
    if((a==b && c==d )||(a==c && b==d)|| (a==d && b==c))
    {
        cout<<"Rectangle";
    }
    else{
        cout<<"Not rectangle";
    }

}