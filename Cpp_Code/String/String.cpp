#include <cstring>
#include "String.h"
#include <cctype>
using std::cout;
using std::cin;

int String::num = 0;

int String::HowMany()
{
    return num;
}

//特殊成员函数
String::String(const char * s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str,s);
    num++;
}
String::String()
{
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num++;
}
String::String(const String & st)
{
    num++;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str,st.str);
}
String::String(String && s)
{
    num++;
    str = s.str;
    s.str = nullptr;
    s.len = 0;
}
String::~String()
{
    --num;
    delete[] str;
}
String & String::operator=(const String & st)
{
    if (this == &st)
        return *this;
    delete[] str;
    len = st.len;
    std::strcpy(str,st.str);
    return *this;
}
String & String::operator=(String && st)
{
    delete[] str;
    str = st.str;
    st.str = nullptr;
    len = st.len;
    st.len = 0;
    return *this;
}
String & String::operator=(const char * s)
{
    delete[] str;
    len = std::strlen(s);
    str = new char[len+1];
    std::strcpy(str,s);
    return *this;
}

//输入输出方法
ostream & operator<<(ostream & os,const String & s)
{
    os << s.str;
    return os;
}
istream & operator>>(istream & is,String & s)
{
    char temp[String::npos];
    for (int i = 0; i < String::npos and !isspace(temp[i] = is.get()); i++)continue;
    s = String(temp);
    return is;
}
istream & getline(istream & is, String & s)
{
    char temp[String::npos];
    is.get(temp, String::npos);
    if(is)s = String(temp);
    while(is && is.get() != '\n')continue;
    return is;
}

//从非const对象中读写字符
char & String::operator[](int i)
{
    return str[i];
}
//从const对象中读取字符
const char & String::operator[](int i) const
{
    return str[i];
}

//比较字符串
bool operator<(const String & s1,const String & s2)
{
    return (std::strcmp(s1.str,s2.str) < 0);
}
bool operator>(const String & s1,const String & s2)
{
    return (std::strcmp(s1.str,s2.str) > 0);
}
bool operator==(const String & s1,const String & s2)
{
    return (s1 < s2 == false and s1 > s2 ==false);
}
int String::find(char ch)
{
    for(int i = 0; i < len; i++)
    {
        if (str[i] == ch)
            return i;
    }
    return String::npos;
}
//new methods and friends at 1.0.3
String operator+(const String & s1,const String & s2)
{
    const int s1len = s1.length();
    const int s2len = s2.length();
    char * str = new char[s1len + s2len + 2];
    strcpy(str,s1.str);
    strcat(str,s2.str);
    String s(str);
    return s;
}
String & String::sToUpper()
{
    for(int i = 0; i < len; i++)
    {
        str[i] = toupper(str[i]);
    }
    return *this;
}
String & String::sToLower()
{
    for(int i = 0; i < len; i++)
    {
        str[i] = tolower(str[i]);
    }
    return *this;
}
int String::has(char c)
{
    int count;
    for(int i = 0; i < len; i++)
    {
        if (str[i] == c)
            count++;
    }
    return count;
}
String String::operator+=(const String & s)
{
    *this = *this + s;
    return *this;
}