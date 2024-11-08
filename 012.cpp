#include <iostream>

using namespace std;
void ReadNUmber(short &Num1, short &Num2)
{
    cout << "Enter Number 1 ?" << endl;
    cin >> Num1;
    cout << "Enter Number 2 ?" << endl;
    cin >> Num2;
}
short MAXof2Numbers(short num1, short num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}
void PrintMax(short Max)
{
    cout << "\n The Maximum Number is : " << Max << endl;
}
int main()

{
    short Num1, Num2;
    ReadNUmber(Num1, Num2);
    PrintMax(MAXof2Numbers(Num1, Num2));

    return 0;
}