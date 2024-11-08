#include <iostream>
#include <cmath>
using namespace std;

float ReadPositiveNumber(string Message)
{
    float Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}
float CalculateRemainder(float ToTalBill, float TotalCashPaid)
{
    return TotalCashPaid - ToTalBill;
}

int main()

{
    float TotalBill = ReadPositiveNumber("Please Enter Total Bill?");
    float TotalCashPaid = ReadPositiveNumber("Please Enter Total Cash Piad? ");

    cout << endl;
    cout << " Total Bill " << TotalBill << endl;
    cout << " Total Cash Piad " << TotalCashPaid << endl;

    cout << "************************\n";
    cout << "Remainder = " << CalculateRemainder(TotalBill, TotalCashPaid) << endl;
    return 0;
}