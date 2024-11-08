#include <iostream>
#include <cmath>
using namespace std;
float ReadDiameter()
{
    float Radious;
    cout << "Please enter radious\n";
    cin >> Radious;
    return Radious;
}
float CircleAreaByDiameter(float diameter)
{
    float Area = (M_PI * pow(diameter, 2)) / 4;
    return Area;
}
void PrintAreaResult(float Area)
{
    cout << Area << endl;
}

int main()

{
    PrintAreaResult(CircleAreaByDiameter(ReadDiameter()));

    return 0;
}