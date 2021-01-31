//p2.cpp -- copy keyboard input to a file
#include <iostream>
#include <fstream>
#include <cstdlib>
int main(int argc, char * argv[])
{
    using namespace std;
    if (argc == 1)
    {
        cout << "No output file!\n";
        exit(EXIT_FAILURE);
    }
    ofstream fout(argv[1]);
    char ch;
    while ((ch = cin.get()) != EOF)
        fout.put(ch);
    return 0;
}