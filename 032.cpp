#include <iostream>
using namespace std;
short ReadNumer()
{
    short Num;
    cout << "Enter Number \n";
    cin >> Num;
    return Num;
}
short ReadPower()
{
    short Power;
    cout << "Enter The Power\n";
    cin >> Power;
    return Power;
}
short PowerOfN(short Power, short Num)
{
    if (Power == 0)
    {
        // Any Number powered to zero gives
        return 1;
    }
    short result = 1;
    for (size_t i = 1; i <= Power; i++)
    {
        result *= Num;
    }
    return result;
}
int main()

{
    cout << "Result = " << PowerOfN(ReadPower(), ReadNumer()) << endl;

    return 0;
}