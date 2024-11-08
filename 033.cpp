#include <iostream>
#include <cmath>
using namespace std;

short ReadNumberInRange(short From, short To)
{
    short Grade;
    do
    {
        cout << "Enter a Number Between 1 and 100\n";
        cin >> Grade;
    } while (Grade < From || Grade > To);
    return Grade;
}
char GetGradeLetter(short Grade)
{
    if (Grade >= 90)
        return 'A';
    else if (Grade >= 80)
        return 'B';
    else if (Grade >= 70)
        return 'C';
    else if (Grade >= 60)
        return 'D';
    else
        return 'F';
}

int main()

{
    cout << GetGradeLetter(ReadNumberInRange(0, 100)) << endl;

    return 0;
}