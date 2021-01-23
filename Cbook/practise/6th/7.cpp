#include <cstdio>
#include <cstring>
#define size 81
using namespace std;
int main()
{
    char word[size];
    printf("Enter a word, and I will print it opposite.\n");
    scanf("%s",word);
    for(int i = strlen(word); i >= 0; i--)
        putchar(word[i]);
    putchar('\n');
    return 0;
}