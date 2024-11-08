#include <iostream>
#include <cmath>
using namespace std;
short ReadNumber()
{
    short Age;
    cout << "Enter Number between from 18 to 45\n";
    cin >> Age;
    return Age;
}
bool ValtedNumberInRange(short Age, short from, short to)
{
    return (Age >= from && Age <= to);
}
short ReadUntilAgeBetween(short from, short to)
{
    short Age;
    do
    {
        Age = ReadNumber();

    } while (!ValtedNumberInRange(Age, from, to));
    return Age;
}
void PrintResult(short Age)
{
    cout << "your Age " << Age << endl;
}

short Random()
{
    cout << "Gmail\n";
    short i = 4 + 4;
    return i;
}
void rean()
{
    cout << "Gmail\n";
}

int main()

{
    // PrintResult(ReadUntilAgeBetween(18, 45));
    //   cout << Random() << endl;
    //  rean();
    Random();
    return 0;
}