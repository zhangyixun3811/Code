#include <iostream>
using namespace std;
#define size 8
int main()
{
    int ints[size];
    cin>>ints[0]>>ints[1]>>ints[2]>>ints[3]>>ints[4]>>ints[5]>>ints[6]>>ints[7];
    cout<<ints[7]<<ints[6]<<ints[5]<<ints[4]<<ints[3]<<ints[2]<<ints[1]<<ints[0]<<endl;
    return 0;
}