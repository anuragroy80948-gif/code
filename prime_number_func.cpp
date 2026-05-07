#include <iostream> 
using namespace std;
void prime(int a, int count){
    count=0;
    for(int i=1; i<=a;i++){
        if(a%i==0){
            count++;
        }
    }
    if (count==2){
        cout<<"number is prime";
    }
    else{
        cout<<"number is not prime";

    }

}int main(){
    int num,a;
    cout<<"Enter your number";
    cin>>num;
    prime(num,a);
    return 0;
}



//                                output
//                         number is/is not prime