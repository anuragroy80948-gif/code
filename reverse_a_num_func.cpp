#include <iostream>
using namespace std;
int reverse(int a, int rev){
    if(a==0)
        return rev;
    int digit = a%10;
    return reverse(a/10 , rev * 10 + digit);

}
int reverse(int a){
    return reverse(a,0);

}
int main (){
    int a;
    cout<<"Enter your number";
    cin>>a;
    cout<<"reversed number ="<<reverse(a)<<endl;
    return 0;
}