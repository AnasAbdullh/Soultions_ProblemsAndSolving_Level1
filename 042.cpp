#include <iostream>
#include <cmath>
using namespace std;
struct strTaskDuration
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};
int ReafPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
strTaskDuration ReadTaskDuration()
{
    strTaskDuration TaskDuration;
    TaskDuration.NumberOfDays = ReafPositiveNumber("enter number Days");
    TaskDuration.NumberOfHours = ReafPositiveNumber("enter NUmber Hours");
    TaskDuration.NumberOfMinutes = ReafPositiveNumber("enter number Minutes");
    TaskDuration.NumberOfSeconds = ReafPositiveNumber("enter Number Seconds");

    return TaskDuration;
}
int TaskDurationInSeconds(strTaskDuration TaskDuration)
{
    int DurationInSeconds = 0;

    DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
    DurationInSeconds += TaskDuration.NumberOfSeconds;

    return DurationInSeconds;
}
int main()

{
    cout << TaskDurationInSeconds(ReadTaskDuration()) << endl;

    return 0;
}