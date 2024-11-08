#include <iostream>
#include <cmath>
using namespace std;

short ReadNumber()
{
    short Num;
    cout << "Enter Number\n";
    cin >> Num;
    return Num;
}
void RangeNumberFromNTo1_UsingWhile(short Num)
{
    cout << "Range Printed Using While Starement\n";
    short Country = Num + 1;
    while (Country > 1)
    {
        Country--;
        cout << Country << endl;
    }
}
void RangeNumberFromNTo1_UsingDoWhile(short Num)
{
    cout << "Range Printed Using Do While\n";
    short Country = Num + 1;
    do
    {
        Country--;
        cout << Country << endl;
    } while (Country > 1);
}
void RangeNUmberFromNTo1_UsingFor(short Num)
{
    cout << "Range Printed Using For Statement\n";
    // short Country = Country + 1;
    for (short Country = Num; Country >= 1; Country--)
    {
        cout << Country << endl;
    }
}
int main()

{
    short Num = ReadNumber();

    RangeNumberFromNTo1_UsingWhile(Num);
    RangeNumberFromNTo1_UsingDoWhile(Num);
    RangeNUmberFromNTo1_UsingFor(Num);

    return 0;
}