#include <iostream>
#include <cmath>
using namespace std;
void ReadTriangleData(float &A, float &B, float &C)
{
    cout << "ENter NUmber Triangle Side \n";
    cin >> A;
    cout << "Enter Number Triangle Bass \n";
    cin >> B;
    cout << "Enter Number Triangle Side \n";
    cin >> C;
}
float CircleAreaByTriangle(float A, float B, float C)
{
    float P = (A + B + C) / 2;
    float T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
    float Area = M_PI * pow(T, 2);
    return Area;
}
void PrintResult(float Area)
{
    cout << Area << endl;
}
int main()

{
    float a, b, c;
    ReadTriangleData(a, b, c);
    PrintResult(CircleAreaByTriangle(a, b, c));

    return 0;
}