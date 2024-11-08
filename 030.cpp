#include <iostream>
#include <cmath>
using namespace std;

short ReadPositiveNumber(string Mseeage)
{
    short Number;
    do
    {
        cout << Mseeage << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
short Factorial(short Num)
{
    short Factor = 1;
    for (size_t i = Num; i >= 1; i--)
    {
        Factor *= i;
    }
    return Factor;
}
int main()

{

    cout << Factorial(ReadPositiveNumber("Enter Number")) << endl;
    return 0;
}
