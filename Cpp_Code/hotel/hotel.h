#pragma once
#ifndef _HOTEL_H
#define _HOTEL_H
#define q 5
#define h1 180.00
#define h2 225.00
#define h3 255.00
#define h4 355.00
#define disc 0.95
#define star "********************************************************************"
class hotel
{
    public:
        double m_rate;
        int m_night;
    public:
        int menu(void);
        int getnight(void);
        void showprice(void);
};
#endif