#include <iostream>
using namespace std;
void pattern7(int n){
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1 ";
            }
                else{
                    cout<<"0 ";
                }
            }cout<<endl;
        }
    }

int main(){ 
    int n;
    cout<<"enter your number:";
    cin>>n;
    pattern7(n);
    return 0;
}
/*            output
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1*/