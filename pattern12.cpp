#include <iostream>
using namespace std;
void pattern(int n){
    cout<<endl;
    for(int i=n;i>=1;i--){
        for(int j=0;j<i;j++){
            cout<<char('A' + j)<<" ";
        }cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    pattern(n);
    return 0;
}
/*               OUTPUT
A B C D E
A B C D 
A B C 
A B
A*/