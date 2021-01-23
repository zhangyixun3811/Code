#include <cstdio>
using namespace std;
int main(void)
{
    int up , down;
    
    for(scanf("%d %d",&down ,&up); down <= up; down++)
        printf("%-5d %-5d %-5d\n",down ,down * down ,down * down * down);
    return 0;
}