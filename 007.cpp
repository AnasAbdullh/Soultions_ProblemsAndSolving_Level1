#include <iostream>

using namespace std;
short ReadNumber()
{
    short Numbers;
    cout << "Enter number \n";
    cin >> Numbers;
    return Numbers;
}

float CalculateHalfNumber(short Num)
{
    return (float)Num / 2;
}
void printResult(short Num)
{
    string result = "Half of " + to_string(Num) + " is " + to_string(CalculateHalfNumber(Num));
    cout << result << endl;
}

int main()

{
    printResult(ReadNumber());

    return 0;
}