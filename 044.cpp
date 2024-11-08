#include <iostream>

using namespace std;

enum enDayOfWeek
{
    Sat = 1,
    Sun = 2,
    Mon = 3,
    Tue = 4,
    Wed = 5,
    Thu = 6,
    Fri = 7
};

int ReadNumberInRange(string Message, int From, int To)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < From || Number > To);

    return Number;
}
enDayOfWeek ReadDayOfWeek()
{
    return static_cast<enDayOfWeek>(ReadNumberInRange("Please Enter day Number", 0, 7));
}

string GetDayOfWeek(enDayOfWeek Day)
{
    switch (Day)
    {
    case enDayOfWeek::Sat:
        return "Saturday";
    case enDayOfWeek::Sun:
        return "Sunday";
    case enDayOfWeek::Mon:
        return "Monday";
    case enDayOfWeek::Tue:
        return "Tuesday";
    case enDayOfWeek::Wed:
        return "Wednesday";
    case enDayOfWeek::Thu:
        return "Thurday";
    case enDayOfWeek::Fri:
        return "Friady";
    default:
        return "Not a valid Day";
    }
}

int main()
{
    cout << GetDayOfWeek(ReadDayOfWeek()) << endl;
    return 0;
}