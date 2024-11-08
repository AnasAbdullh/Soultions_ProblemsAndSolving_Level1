#include <iostream>
#include <cmath>
using namespace std;
void ReadNumber(float &trainglebass, float &triagnleHigth)
{
    cout << "ENter the triangle bass\n";
    cin >> trainglebass;
    cout << "Enter the triangle Higth\n";
    cin >> triagnleHigth;
}
float TriangleArea(float bass, float higth)
{
    float Result = (bass / 2) * higth;
    return Result;
}
void PrintArea(float result)
{
    cout << result << endl;
}

int main()

{
    float bass, Higth;
    ReadNumber(bass, Higth);
    PrintArea(TriangleArea(bass, Higth));

    return 0;
}