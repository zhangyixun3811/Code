#include <iostream>
using namespace std;
int main()
{
    const int x = 5;
    cout<<x<<endl;
    int * px = (int *)&x;
    *px = 10;
    cout<<x<<endl;
    return 0;
}