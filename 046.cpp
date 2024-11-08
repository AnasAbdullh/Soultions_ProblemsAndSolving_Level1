#include <iostream>
#include <string>
using namespace std;

void PrintLetterAToZ()
{
    for (size_t i = 65; i <= 90; i++)
    {
        cout << (char)i << endl;
    }
}
int main()
{
    PrintLetterAToZ();
    return 0;
}