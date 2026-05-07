#include <iostream>
using namespace std;

void area(int r, float &area_c)
{
    area_c = (3.14 *r*r);
    cout<<area_c;

}
int main(){
    int r;
    float area_c;
    cout<<"enter the value of radius";
    cin>>r;
    cout<<"area of circle:";
    area(r,area_c);

    return 0;

}