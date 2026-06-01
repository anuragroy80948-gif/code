#include <iostream>
using namespace std;
void pattern1 (int n){
    for(int i=1;i<=n;i++){
        // space 
        for(int k=n-i;k>=0;k--){       
            cout<<" ";
        }
        //stars
        for(int j=1;j<=(2*i) -1;j++){
            cout<<"*";
        }
        cout<<endl;

    }

}
void pattern2(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i+1;j++){
            cout<<" ";
        }
        for(int k=1;k<=(2*i-1);k++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"enter your number:";
    cin>>n;
    pattern1(n);
    pattern2(n);
    return 0;
}
/*         output
     *
    ***
   *****
  *******
 *********         
 *********  
  *******
   *****
    *** 
     *         */