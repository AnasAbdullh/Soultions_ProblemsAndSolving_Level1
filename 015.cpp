#include <iostream>
#include <cmath>
using namespace std;
void ReadNumber(float &Area, float &Rectangle)
{
    cout << "Enter rectangle Area \n";
    cin >> Area;
    cout << "Enter Rectangle Length \n";
    cin >> Rectangle;
}
float CalculatorRectangleArea(float Area, float Recnagle)
{
    return Area * Recnagle;
}
void PrintRectangleArea(float result)
{
    cout << "Rectangle Area is : " << result << endl;
}

int main()

{
    float Num1, Num2;
    ReadNumber(Num1, Num2);
    PrintRectangleArea(CalculatorRectangleArea(Num1, Num2));

    return 0;
}