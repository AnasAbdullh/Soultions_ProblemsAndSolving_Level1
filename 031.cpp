#include <iostream>
#include <cmath>
using namespace std;
short ReadNumber()
{
    short Number;
    cout << "Enter a number\n";
    cin >> Number;
    return Number;
}

void PowerOf1_2_3(short Num)
{
    short A, B, C;
    A = Num * Num;
    B = Num * Num * Num;
    C = Num * Num * Num * Num;
    cout << A << " " << B << " " << C << endl;
}
int main()

{
    PowerOf1_2_3(ReadNumber());
    return 0;
}