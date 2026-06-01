#include <iostream>
using namespace std;
void pattern1(int n){
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    pattern1(n);
    return 0;

}

/*                    output
*
**
***
****
*****
****
***
**
*            */