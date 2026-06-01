#include <iostream>
using namespace std;
void pattern (int n){
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a;
        }
        for (int k=n+(2*i);k<=3*n;k++){
            cout<<" ";
        }
        for (int l=1; l<=i;l++){
                cout<<a;
        }
        a=a+1;
        cout<<endl;
    }
}
int main (){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    pattern(n);
    return 0;

}
/* OUTPUT

1       1
22     22
333   333
4444 4444*/