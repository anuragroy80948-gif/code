#include<iostream>
using namespace std;
int square(int a, int b){
    b=a*a;
    cout<<b;
}
int main(){
    int a,b;
    cout<<"Enter your number";
    cin>>a;
    square(a,b);

    return 0;

}