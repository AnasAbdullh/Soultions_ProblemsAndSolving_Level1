#include <iostream>
#include <cmath>
using namespace std;
float ReadCircumFerence()
{
    float CircumFerence;
    cout << "Enter CircumFerence\n";
    cin >> CircumFerence;
    return CircumFerence;
}
float CircleAreaByCircumFerence(float CircumFerence)
{
    return (pow(CircumFerence, 2) / (4 * M_PI));
}
void PrintResult(float Area) { cout << Area << endl; }

int main()

{
    PrintResult(CircleAreaByCircumFerence(ReadCircumFerence()));

    return 0;
}