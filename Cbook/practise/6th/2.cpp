#include <iostream>
using namespace std;
int main()
{
    char let = 'F';
    const int let_i = let - 64;
    int j;
    for(int i = 0; i < let_i; i++)
    {
        j = i + 1;
        for(int k = 0; k < j; k++)
        {
            cout<<let;
            let--;
        }
        let = 'F';
        cout<<endl;
    }
    return 0;
}