#include <iostream>

using namespace std;
enum enWhatToSum
{
    All = 1,
    Even = 2,
    Odd = 3
};
short ReadNumber()
{
    short Number;
    cout << "Enter a Number to Sum : \n";
    cin >> Number;
    return Number;
}

enWhatToSum ReadWhatToSum()
{
    cout << "***********************" << endl;
    cout << "[1] = All\n";
    cout << "[2] = Even\n";
    cout << "[3] = Odd\n";
    cout << "***********************" << endl;
    cout << "choose what to sum: \n";
    short choice;
    cin >> choice;
    return static_cast<enWhatToSum>(choice);
}
short CalculateSum(enWhatToSum choice, short Number)
{
    short sum = 0;
    for (size_t i = 1; i <= Number; i++)
    {
        switch (choice)
        {
        case All:
            sum += i;
            break;
        case Even:
            if (Number % 2 == 0)
            {
                sum += i;
            }
            break;
        case Odd:
            if (Number % 2 != 0)
            {
                sum += i;
            }
            break;
        }
    }
    return sum;
}
void DisplayResult(short Sum)
{
    cout << " The sum is : " << Sum << endl;
}

int main()

{
    DisplayResult(CalculateSum(ReadWhatToSum(), ReadNumber()));

    return 0;
}