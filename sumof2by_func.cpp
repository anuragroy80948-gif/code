#include <iostream>
using namespace std;
int sum (int a,int b){
    return a + b;

}
int main(){
    int num1,num2;
    cout<<"Enter your numbers";
    cin>>num1>> num2;
    int result = sum(num1,num2);

    cout<< "sum="<<result<<endl;
    return 0;
}

//                                  output 
//                           sum= sum of 2numbers 