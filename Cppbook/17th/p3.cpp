//p3.cpp -- copy a file to another file
#include <iostream>
#include <cstdlib>
#include <fstream>
int main(int argc ,char * argv[])
{
    using namespace std;
    if (argc < 3)
    {
        cout << "No infile or outfile.\nUsage: " << argv[0] << " [infile] [outfile]\n";
        exit(EXIT_FAILURE);
    }
    ifstream fin(argv[1]);
    ofstream fout(argv[2]);
    char ch;
    while ((ch = fin.get()) != EOF)
        fout.put(ch);
    return 0;
}