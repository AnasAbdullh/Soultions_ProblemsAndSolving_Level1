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
float TotalMonths(float LoanAmount, float MonthlyInstallment)
{
    return static_cast<float>(LoanAmount / MonthlyInstallment);
}
int main()

{
    float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount?");
    float MonthlyInstallment = ReadPositiveNumber("Please Enter Monthly Installment?");

    cout << "\nTotal Months to pay = " << TotalMonths(LoanAmount, MonthlyInstallment);
    cout << endl;

    return 0;
}
