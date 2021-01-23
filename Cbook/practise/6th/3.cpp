#include <iostream>
using namespace std;
int main()
{
    char let = 'F';
    int let_i = let - 64;
    for(int i = 0; i < let_i; i++)
    {
        for(int j = 0; j < i+1; j++)
        {
            putchar(let);
            let--;
        }
        let = 'F';
        putchar('\n');
    }
    return 0;
}