#pragma once
#ifndef String_H_
#define String_H_
#include <iostream>
using namespace std;
class String
{
private:
    char * str;
    int len;
    static int num;
public:
    enum {npos = 1000};//max
    char * c_str()const{return str;};
//constructors
    String(const char * s);
    String();
    String(const String & s);
    String(String && s);
    //String(char c,int n);
//destructor
    ~String();
//I/O
    friend ostream & operator<<(ostream & os,const String & s);
    friend istream & operator>>(istream & is,String & s);
    friend istream & getline(istream & is,String & s);
//nums
    int length() const{return len;}
    static int HowMany();
//operator methods
    String & operator=(const String &);
    String & operator=(String &&);
    String & operator=(const char *);
    char & operator[](int i);
    const char & operator[](int i)const;
    int find(char ch);
//operator friends
    friend bool operator<(const String &,const String &);
    friend bool operator>(const String &,const String &);
    friend bool operator==(const String &,const String &);
//new methods and friends at 1.0.3
    friend String operator+(const String &,const String &);
    String & sToUpper();
    String & sToLower();
    int has(char c);
    String operator+=(const String &);
};
#endif