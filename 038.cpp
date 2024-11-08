#include <iostream>
#include <cmath>
using namespace std;
enum enPrimNotPrime
{
    Prime = 1,
    NotPrime = 2
};
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
enPrimNotPrime CheckPrime(short Number)
{
    short M = round(Number / 2);
    for (size_t i = 2; i <= M; i++)
    {
        if (Number % i == 0)
            return enPrimNotPrime::NotPrime;
    }
    return enPrimNotPrime::Prime;
}
void PrintNumberType(short Number)
{
    switch (CheckPrime(Number))
    {
    case enPrimNotPrime::Prime:
        cout << "The Number is Prime\n";
        break;
    case enPrimNotPrime::NotPrime:
        cout << "The Number is Not Prime\n";
        break;
    }
}
int main()

{
    PrintNumberType(ReadPositiveNumber("Please enter a Number"));

    return 0;
}