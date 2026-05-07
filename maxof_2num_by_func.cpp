#include <iostream>
using namespace std;
int max(int a,int b){
    if (a>b){
        cout<<a<<"is greater than"<<b;
    }
    else{
        cout<<b<<"is greater than"<<a;
    }
}int main(){
    int a,b;
    cout<<"Emter your numbers";
    cin>>a>>b;
    max(a,b);
    return 0;
}

//                         output
//                    num is greater than num