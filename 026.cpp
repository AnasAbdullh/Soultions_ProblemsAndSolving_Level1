#include <iostream>
#include <cmath>
using namespace std;
short ReadNumber()
{
    short Num;
    cout << "Enter Number \n";
    cin >> Num;
    return Num;
}
void PrintRangeFrom1toN_UsingWhile(short Num)
{
    short Country = 0;
    cout << "Range Printed using while Statement \n";
    while (Country < Num)
    {
        Country++;
        cout << Country << endl;
    }
}
void PrintRangeFrom1toN_UsingDoWhile(short Num)
{
    short Country = 0;
    cout << "Range Printed using Do While Statement\n";
    do
    {
        Country++;
        cout << Country << endl;
    } while (Country < Num);
}

void PrintRangeFrom1ToN_UsingFor(short Num)
{
    cout << "Range Printed using For Statement\n";

    for (size_t i = 1; i <= Num; i++)
    {
        cout << i << endl;
    }
}
int main()

{
    short Num = ReadNumber();

    PrintRangeFrom1toN_UsingWhile(Num);
    PrintRangeFrom1toN_UsingDoWhile(Num);
    PrintRangeFrom1ToN_UsingFor(Num);

    return 0;
}