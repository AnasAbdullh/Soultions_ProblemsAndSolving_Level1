#include <iostream>
#include <string>
using namespace std;

enum enMonthOfYear
{
    Jan = 1,
    Feb = 2,
    Mar = 3,
    Apr = 4,
    May = 5,
    Jun = 6,
    July = 7,
    Aug = 8,
    Sep = 9,
    Oct = 10,
    Nov = 11,
    Dec = 12

};

int ReadNumberInRange(string Message, int From, int To)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number  <0 || Number > To);

    return Number;
}
enMonthOfYear ReadMonthOfYear()
{
    return static_cast<enMonthOfYear>(ReadNumberInRange("Please enter a Month", 0, 12));
}
string GetMonthOfYear(enMonthOfYear Month)
{
    switch (Month)
    {
    case enMonthOfYear::Jan:
        return "January";
    case enMonthOfYear::Feb:
        return "February";
    case enMonthOfYear::Mar:
        return "March";
    case enMonthOfYear::May:
        return "May";
    case enMonthOfYear::Jun:
        return "Jun";
    case enMonthOfYear::July:
        return "July";
    case enMonthOfYear::Aug:
        return "August";
    case enMonthOfYear::Sep:
        return "Septmber";
    case enMonthOfYear::Oct:
        return "October";
    case enMonthOfYear::Nov:
        return "November";
    case enMonthOfYear::Dec:
        return "December";

    default:
      return  "Not a vaild Month";
    }
}

int main()
{
    cout << GetMonthOfYear(ReadMonthOfYear());
    return 0;
}