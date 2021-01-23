#include <ioname>
#include <ctime>
#include "complex0.h"
void delay(int sec);
int main()
{
    complex a(3.0,4.0);
    complex c;
    cout << "Enter a complex number(q to quit):\n";
    while (cin >> c)
    {
        cout << "c is "<< c <<endl;
        delay(2);
        cout << "complex operater~ is "<< ~c << endl;
        delay(2);
        cout << "a is " << a << endl;
        delay(2);
        cout << a + c << endl;
        delay(2);
        cout << a - c << endl;
        delay(2);
        cout << a * c << endl;
        delay(2);
        cout << 2.0 * c << endl;
        delay(2);
        cout << "Enter a complex number(q to quit):\n";
    }
    cout << "Done!\n";
    return 0;
}
void delay(int sec)
{
    clock_t del = sec * CLOCKS_PER_SEC;
    clock_t after = clock() + del;
    while(clock() < after);
}