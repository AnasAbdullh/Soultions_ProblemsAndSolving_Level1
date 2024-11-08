#include <iostream>

using namespace std;
void ReadNumber(short &Num1, short &Num2)
{
    cout << "Enter number One\n";
    cin >> Num1;
    cout << "Enter Number Two\n";
    cin >> Num2;
}
void Swap(short &Num1, short &Num2)
{
    short Temp;
    Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;
}
void PrintNumber(short num1, short num2)
{
    cout << "\n Number 1 " << num1 << endl;
    cout << "\n Number 2 " << num2 << endl;
}

int main()

{
    short NumberOne, NumberTwo;
    ReadNumber(NumberOne, NumberTwo);
    PrintNumber(NumberOne, NumberTwo);
    Swap(NumberOne, NumberTwo);
    PrintNumber(NumberOne, NumberTwo);

    return 0;
}