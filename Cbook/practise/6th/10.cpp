#include <cstdio>
int main()
{
    int up,low,sum;
    sum = 0;
    printf("Enter lower and upper integer limits:");
    while(scanf("%d %d",&low ,&up) == 2 && low < up)
    {
        for(int i = low; i <= up; i++)
            sum += i * i;
        printf("The sums of the squares from %d to %d is %d\n",low,up,sum);
        printf("Enter next set of limits:");
        sum = 0;
    }
    puts("Down");
    return 0;
}