#include <iostream>
using namespace std;
#include "hotel.h"
int main()
{
    hotel h;
    int code;
    while((code = h.menu()) != q)
    {
        switch(code)
        {
            case 1:h.m_rate = h1;
                   break;
            case 2:h.m_rate = h2;
                   break;
            case 3:h.m_rate = h3;
                   break;
            case 4:h.m_rate = h4;
                   break;
            default:h.m_rate = 0.0;
                    cout<<"Oops!"<<endl;
                    break; 
        }
        h.getnight();
        h.showprice();
    }
    cout<<"Bye\n";
    return 0;
}