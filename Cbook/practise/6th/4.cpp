#include <iostream>
using namespace std;
int main()
{
    char last = 'U';
    char Let = 'A';
    for(int j = 0; j < 6; j++)
    {
        for(int i = 0; i < j + 1; i++)
        {
            putchar(Let);
            Let++;
        }
        putchar('\n');
    }
    return 0;
}