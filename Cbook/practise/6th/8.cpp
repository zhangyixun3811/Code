#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    float flt1,flt2;
    printf("Please enter 2 float number:\n");
    while(scanf("%f %f",&flt1 ,&flt2) == 2)
    {
        printf("%.2f\n",(fabs(flt1 - flt2)) / (flt1 * flt2));
        printf("Please enter next number(q to quit):\n");
    }
    return 0;
}