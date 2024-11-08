#include <iostream>

using namespace std;
void ReadNumbers(short &Num1, short &Num2, short &Num3)
{
    cout << "Enter number One\n";
    cin >> Num1;
    cout << "Enter Number Two\n";
    cin >> Num2;
    cout << "Enter Number Three\n";
    cin >> Num3;
}
short SumOfNumbers(short Num1, short Num2, short Num3)
{
    return Num1 + Num2 + Num3;
}
void PrintResult(short total)
{
    cout << total << endl;
}
short readNumber(short num[3])
{

    for (short i = 0; i <= 2; i++)
    {
        cout << "Enter Number" << i + 1 << endl;
        cin >> num[i];
    }
    return num[3];
}

short sumNumber(short Num[3])
{
    return Num[0] + Num[1] + Num[2];
}

void printsum(short num[3])
{
    cout << sumNumber(num) << endl;
}
int main()

{
    short Num1, Num2, Num3;
    // short i[3];
    // readNumber(i);
    // printsum(i);
    ReadNumbers(Num1, Num2, Num3);
    PrintResult(SumOfNumbers(Num1, Num2, Num3));

    return 0;
}