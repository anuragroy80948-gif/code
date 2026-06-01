#include <iostream>
using namespace std;
void pattern (int n){
    int a=1;
    for(int i=1;i<=n;i++){
        
    
        for (int j=n-i;j>=1;j--){
            cout<<" ";
        }
        for (int k=1; k<=i;k++){
                cout<<a;
        }
        a=a+1;
        cout<<endl;
    }

} 

int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    pattern(n);
    return 0;
}
/*                 OUTPUT
   1
  22
 333
4444*/