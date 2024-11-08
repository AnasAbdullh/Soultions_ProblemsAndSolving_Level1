#include <iostream>

using namespace std;
void ReadNumb(short &Num1, short &Num2, short &Num3)
{
    cout << "Enter Number One\n";
    cin >> Num1;
    cout << "ENter Number Two\n";
    cin >> Num2;
    cout << "ENter NUmber Three\n";
    cin >> Num3;
}

short sumNumber(short Num1, short Num2, short Num3)
{
    return Num1 + Num2 + Num3;
}

float Average(short Num1, short Num2, short Num3)
{
    return (float)sumNumber(Num1, Num2, Num3) / 3;
}
void PrintREsult(float total)
{
    cout << total << endl;
}

int main()

{
    short Num1, Num2, Num3;
    ReadNumb(Num1, Num2, Num3);
    PrintREsult(Average(Num1, Num2, Num3));

    return 0;
}