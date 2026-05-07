#include <iostream>
using namespace std;

void change1(int num)
{
    num++;
}

int change2(int &sum, int a, int b)
{
    sum = a + b;
    return sum;
}

int main()
{
    int a = 100;
    int b = 100;
    int sum = 0;

    // change1(num);
    // cout<< num<<endl;

    change2(sum, a, b);
    cout << sum;
    return 0;
}
