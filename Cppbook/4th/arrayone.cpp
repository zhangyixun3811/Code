#include <iostream>
int main()
{
    using namespace std;
    int yams[3] = {7,8,6};
    int yamcosts[3] = {20,30,5};
    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs ";
    cout << yamcosts[1] << " cent per yam.\n";
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    cout << total << endl;
    return 0;
}