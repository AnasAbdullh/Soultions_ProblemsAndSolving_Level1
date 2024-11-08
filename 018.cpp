#include <iostream>
#include <cmath>
using namespace std;
float ReadRadious()
{
    float Radious;
    cout << "Enter the Radious\n";
    cin >> Radious;
    return Radious;
}
float CircleArea(float Radious)
{
    const float PI = M_PI;
    float Area = PI * pow(Radious, 2);
    return Area;
}
void PrintResult(float Area)
{
    cout << Area << endl;
}
int main()

{
    PrintResult(CircleArea(ReadRadious()));
    

    return 0;
}