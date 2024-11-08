#include <iostream>
#include <cmath>
using namespace std;

short ReadAge()
{
    short Age;
    cout << "ENter your Age \n";
    cin >> Age;
    return Age;
}

bool ValitadNumberInRange(short Num, short from, short to)
{
    return (Num >= from && Num <= to);
}
void PrintResult(short Age)
{
    if (ValitadNumberInRange(Age, 18, 45))
        cout << "is Valid age\n";
    else
        cout << "Invalid Age\n";
}
int main()

{
    PrintResult(ReadAge());

    return 0;
}