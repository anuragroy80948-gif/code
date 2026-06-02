#include <iostream>
using namespace std;
void pattern(int n){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        for (int k=1;k<=2*(n-i);k++){
            cout<<" ";
        }
        for(int l=1;l<=i;l++){
            cout<<"*";
        }
        cout<<endl;

    }
}
void pattern1(int n){
    for(int i=0;i<=n;i++){
        for (int j=n-1;j>i;j--){
            cout<<"*";
        }
        for(int k=0;k<2*(i+1);k++){
            cout<<" ";
        }
        for (int j=n-1;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter your number:";
    cin>>n;
    pattern(n);
    pattern1(n);
    return 0;

}
/*               OUTPUT

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *                     

                                                     */
                                                    