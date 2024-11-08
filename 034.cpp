#include <iostream>

using namespace std;
float ReadTotalSales()
{
    float TotalSales;
    cout << "Enter Total Sales \n";
    cin >> TotalSales;
    return TotalSales;
}
float ComissionPerceTage(float TotalSalse)
{
    if (TotalSalse >= 1000000)
        return 0.01;
    else if (TotalSalse >= 500000)
        return 0.02;
    else if (TotalSalse >= 100000)
        return 0.03;
    else if (TotalSalse >= 50000)
        return 0.05;
    else
        return 0.00;
}
float CalculateTotalComission(float TotalSales)
{
    return ComissionPerceTage(TotalSales) * TotalSales;
}

int main()

{
    float TotalSales = ReadTotalSales();
    //  cout << TotalSales << endl;
    cout << ComissionPerceTage(TotalSales) << endl;
    cout << CalculateTotalComission(TotalSales) << endl;

    return 0;
}