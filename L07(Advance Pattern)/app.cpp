#include <iostream>
using namespace std;
// int main(){
//  int row , col;
// for(row=0; row<=5; row++){
//     for(col=0; col<=row; col++){
//        int start = 10;
//         cout<<start+col<<" ";
//     }
//     cout<<endl;
// }
// }
int main(){
 int row , col;
        for(row=5; row>=1; row--){
            for(col=1; col<=row; col++){
                char name= 'A'+(col-1);
                cout<<name<<" ";
                // name++;
            
            }
            cout<<endl;
        }
}

