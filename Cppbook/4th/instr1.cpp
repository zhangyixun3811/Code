#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string s;
    const int size = 20;
    char name[size];
    char des[size];
    cout << "enter your name:\n";
    cin >> name;
    cout << "enter your favourite dessert:\n";
    cin >> des;
    cout << "I have 中" << des << " for " << name << endl;
    return 0;
}