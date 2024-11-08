#include <iostream>
#include <cmath>
using namespace std;
enum enOddOrEven
{
    Odd = 1,
    Even = 2
};
enum enwhatTosum
{
    all = 0,
    Odd = 1,
    Even = 2

};
short ReadNumber()
{
    short Num;
    cout << "Enter a Number\n";
    cin >> Num;
    return Num;
}
enOddOrEven CheckOddOrEven(short Num)
{
    if (Num % 2 != 0)
        return enOddOrEven::Odd;
    else
        return enOddOrEven::Even;
}
short SumOddNumbersFrom1ToN_UsingWhile(short Num)
{
    short Country = 0;
    short Sum = 0;
    cout << "Sum Odd Numbers Using While Statement\n";

    while (Country < Num)
    {
        Country++;
        if (CheckOddOrEven(Country) == enOddOrEven::Even)
        {
            Sum += Country;
        }
    }
    return Sum;
}
short SumOddNumberFrom1ToN_UsingDoWhile(short Num)
{
    short Country = 0;
    short Sum = 0;
    cout << "Sum Odd Numbers Using DO while\n";
    do
    {
        Country++;
        if (CheckOddOrEven(Country) == enOddOrEven::Even)
        {
            Sum += Country;
        }

    } while (Country < Num);
    return Sum;
}
short SumOddNumberFrom1ToN_UsingFor(short Num)
{
    // short Country = 0;
    short Sum = 0;
    for (size_t i = 1; i <= Num; i++)
    {
        if (CheckOddOrEven(i) == enOddOrEven::Even)
        {
            Sum += i;
        }
    }
    return Sum;
}
enwhatTosum NumberRange(enOddOrEven type, short Num)
{
    if(enwhatTosum::Even == enOddOrEven::Even)
    SumOddNumberFrom1ToN_UsingFor(Num);
    else if (enwhatTosum::Odd == enOddOrEven::Odd)
    
}

int main()

{
    short count = ReadNumber();

    cout << SumOddNumbersFrom1ToN_UsingWhile(count) << endl;
    cout << SumOddNumberFrom1ToN_UsingDoWhile(count) << endl;
    cout << SumOddNumberFrom1ToN_UsingFor(count) << endl;

    return 0;
}