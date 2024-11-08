#include <iostream>
#include <cmath>
using namespace std;
void ReadTriangleData(float &Num1, float &Num2)
{
    cout << "enter Triangle side\n";
    cin >> Num1;
    cout << "enter Triangle Bass\n";
    cin >> Num2;
}
float CirclrAreaByInTriangle(float Side, float Bass)
{
    //  const float PI = M_PI;
    float Area = M_PI * (pow(Bass, 2) / 4);
    float anas = (Area / (2 * Side - Bass) / (2 * Side + Bass));
    return anas;
}
void PrintResult(float Area)
{
    cout << Area << endl;
}

int main()

{
    float Siide, Basss;
    ReadTriangleData(Siide, Basss);
    PrintResult(CirclrAreaByInTriangle(Siide, Basss));

    return 0;
}