#include <iostream>
using namespace std;
int main()
{
    char c = getchar();
    char ch;
    int num = c - 'A' + 1;
    int j;
    for(int i = 0; i <= num; i++)
    {
        for(j = 0; j < num - i; j++)
            putchar(' ');
        for(ch = 'A'; j < num; j++)
            putchar(ch++);
        for(j = 1 , ch -= 2; j < i; j++ , ch--)
            putchar(ch);
        putchar('\n');
        ch++;
    }
    return 0;
}