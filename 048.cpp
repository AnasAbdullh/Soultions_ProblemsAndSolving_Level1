#include <iostream>
#include <string>

using namespace std;

float ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
float MonthlyInstallment(float LoanAmount, float HowManyMonths)
{
    return static_cast<float>(LoanAmount / HowManyMonths);
}
int main()
{
    float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount?");
    float HowManyMonths = ReadPositiveNumber("How Many Months?");

    cout << "\nMonthly Installment = " << MonthlyInstallment(LoanAmount, HowManyMonths);
    cout << endl;
    return 0;
}