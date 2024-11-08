#include <iostream>
#include <cmath>
using namespace std;
float ReadPositiveNumber(string Message)
{
    short Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
float HoursToDays(float NumberOfHours)
{
    return (float)NumberOfHours / 24;
}
float HoursToWeeks(float NumberOfHours)
{
    return (float)NumberOfHours / 24 / 7;
}
float DaysToWeeks(float NumberOfDays)
{
    return (float)NumberOfDays / 7;
}
int main()

{
    float NumberOfHours = ReadPositiveNumber("Please Enter Number Of Hours?");
    float NumberOfDays = HoursToDays(NumberOfHours);
    float NumberOfWeeks = DaysToWeeks(NumberOfDays);

    cout << NumberOfHours << endl;
    cout << NumberOfDays << endl;
    cout << NumberOfWeeks << endl;
    // cout << HoursToWeeks(NumberOfHours) << endl;

    return 0;
}