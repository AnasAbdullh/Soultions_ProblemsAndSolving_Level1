#include <iostream>

using namespace std;
void ReadNumbers(short &Num1, short &Num2, short &Num3)
{
    cout << "ENter Number ONe\n";
    cin >> Num1;
    cout << "Enter Number two\n";
    cin >> Num2;
    cout << "Enter NUmber Three\n";
    cin >> Num3;
}
short MaxOf3Numbers(short Num1, short Num2, short Num3)
{
    if (Num1 > Num2)
        if (Num1 > Num3)
            return Num1;
        else
            return Num3;
    else if (Num2 > Num3)
        return Num2;
    else
        return Num3;
}
void PrintResult(short result)
{
    cout << "The of Maximum is Number " << result << endl;
}
int main()

{
    short Num1, Num2, Num3;
    ReadNumbers(Num1, Num2, Num3);
    PrintResult(MaxOf3Numbers(Num1, Num2, Num3));
    return 0;
}