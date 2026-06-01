#include<iostream>
using namespace std;
void pattern8(int n){
    for (int i=1;i<=n;i++){
        for (int j=0;j<i;j++){
            cout<<char('A' +j)<<" ";
        }cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    pattern8(n);
    return 0;
}/*       output 
A
A B
A B C
A B C D       */