#include <iostream>
using namespace std;
int fact(int a,int b){
    b=1;
    for(int i=1; i<=a; i++){
        b= b * i;

    }
    cout<<b;
}int main(){
    int a,b;
    cout<<"Enter the number";
    cin>>a;
    fact(a,b);
    return 0;
}