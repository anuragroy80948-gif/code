#include <iostream>
using namespace std;
void pattern2(int n){
    int k =1;
    for(int i=0; i<n;i++){
        for(int j=0;j<i;j++){
            cout<<k<<" ";
            k=k+1;

        }

        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    pattern2(n);
    return 0;
}