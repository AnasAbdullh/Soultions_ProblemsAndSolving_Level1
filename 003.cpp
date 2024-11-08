#include <iostream>

using namespace std;
enum enNumberType
{
    Odd = 1,
    Even = 2
};
short ReadNumber()
{
    short Num;
    cout << "Please Enter a Number ?" << endl;
    cin >> Num;
    return Num;
}

enNumberType checkNumberType(short Num)
{
    short result = Num % 2;
    if (result == 0)
    {
        return enNumberType::Even;
    }
    else
    {
        return enNumberType::Odd;
    }
}
void PrintNumberType(enNumberType NumberType)
{
    if (NumberType == enNumberType::Even)
    {
        cout << "\n Number is Even. \n";
    }
    else
    {
        cout << "\n Number is odd \n";
    }
}

int main()

{
    PrintNumberType(checkNumberType(ReadNumber()));
    

    return 0;
}