#include <iostream>
using namespace std;
void pattern9(int n){
    for(int i =0;i<n;i++){
        for (int j=n-i-1;j>=0;j--){
            cout<<"*";
        }
        for (int k=0;k<2*i;k++){
            cout<<" ";

        }
        for (int l=n-i;l>0;l--){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern(int n){
    for(int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
             cout<<"*";
            }
            // for spaces
            for (int k=2;k<2*(n-i);k++){
                cout<<" ";

            }
            for (int j=0;j<=i;j++){
             cout<<"*";
            }
            cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter your number :";
    cin>>n;
    pattern9(n);
    pattern(n);
    return 0;
}
/*               output
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********                                    */