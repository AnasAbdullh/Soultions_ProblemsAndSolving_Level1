#include <iostream>
#include <cmath>
using namespace std;
void ReadNUmber(float &REctangleside, float &RectangleDiagonal)
{
    cout << "Enter rectangle side\n";
    cin >> REctangleside;
    cout << "Enter Rectangle Diagnoal\n";
    cin >> RectangleDiagonal;
}
float RectangleAreasideAnddiagonal(float side, float Diagonal)
{
    float Area;
    Area = side * sqrt(pow(Diagonal, 2) - pow(side, 2));
    return Area;
}
void PrintArea(float rsultArea)
{
    cout << rsultArea << endl;
}
int main()

{
    float side, rectangle;
    ReadNUmber(side, rectangle);
    PrintArea(RectangleAreasideAnddiagonal(side, rectangle));

    return 0;
}