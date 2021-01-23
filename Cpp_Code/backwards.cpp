#include <cstdio>
#include <cstring>
int main(void)
{
    char * word = new char[82];
    puts("Enter a string and I print it backwards(using C++ pointer):");
    fgets(word,82,stdin);
    for(int i = strlen(word); i >= 0; i--)
        putchar(word[i]);
    putchar('\n');
    return 0;
}