#include <iostream>
#include <cstdio>
using namespace std;
#include "hotel.h"
int hotel::menu(void)
{
    int code;
    bool status;
    cout<<star<<endl;
    cout<<"Enter the number of the hotel:"<<endl;
    cout<<"1)                    2)                 \n";
    cout<<"3)                    4)                 \n";
    cout<<"5)quit"<<endl;
    cout<<star<<endl;
    while(!(status = scanf("%d", &code)) || (code < 1 || code > 5))
    {
        if(!status)
            scanf("%*s");
        cout<<"Enter an integer from 1 - 5, please."<<endl;
    }
    return code;
}
int hotel::getnight(void)
{
    int night;
    cout<<"How many nights are needed? ";
    while(!scanf("%d",&night))
    {
        scanf("%*s");
        cout<<"Enter an integer from 1 - 5, please."<<endl;        
    }
    m_night = night;
    return 0;
}
void hotel::showprice(void)
{
    int n;
    double tot = 0.0;
    double factor = 1.0;
    for(n = 1; n <= m_night; n++, factor *= disc)
        tot += m_rate * factor;
    cout<<"the total cost will be $"<<tot<<".\n";
}