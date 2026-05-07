#include <iostream>
using namespace std;
int check(int a){
    if(a%2==0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
}int main(){
    int x;
    cout<<"enter your number";
    cin>>x;
    check(x);
    return 0;
}


//                            output
//                           even/odd