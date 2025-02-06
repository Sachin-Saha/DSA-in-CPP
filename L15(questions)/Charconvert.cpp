#include<iostream>
using namespace std;
char convert(char name){
    char ans = name-'a'+'A';
    return ans ;
}
// convert a to A ( small character to capital character)
int main(){
    char name;
    cout<<"Enter charcter: ";
    cin>>name;
    cout<<convert(name);
}