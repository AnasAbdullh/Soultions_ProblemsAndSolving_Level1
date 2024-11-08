#include <iostream>
#include <cmath>
using namespace std;
float ReadSquareSide()
{
    short SquarSide;
    cout << "Enter Square Side\n";
    cin >> SquarSide;
    return SquarSide;
}
float CircleAreaInscribedInSquare(float Square)
{
    float Area = (M_PI * pow(Square, 2)) / 4;
    return Area;
}
void PrintResult(float Area)
{
    cout << Area << endl;
}

int main()

{
    PrintResult(CircleAreaInscribedInSquare(ReadSquareSide()));

    return 0;
}