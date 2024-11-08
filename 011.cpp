#include <iostream>

using namespace std;
enum enPassFail
{
    Pass = 1,
    Fail = 2
};
void ReadNumbers(short &Mark1, short &Mark2, short &Mark3)
{
    cout << "Please Enter Mark 1 ?" << endl;
    cin >> Mark1;
    cout << "Please enter Mark 2 ?" << endl;
    cin >> Mark2;
    cout << "Please enter Mark 3 ?" << endl;
    cin >> Mark3;
}
short SumOf3Marks(short Mark1, short Mark2, short Mark3)
{
    return Mark1 + Mark2 + Mark3;
}
float CalculateAverage(short Mark1, short Mark2, short Mark3)
{
    return (float)SumOf3Marks(Mark1, Mark2, Mark3) / 3;
}
enPassFail checkAverage(float Average)
{
    if (Average >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}
void PrintResult(float Average)
{
    cout << "\n Your Average is: " << Average << endl;
    if (checkAverage(Average) == enPassFail::Pass)
        cout << "\n You Passed" << endl;
    else
        cout << "\n You Faild" << endl;
}
int main()

{
    short Mark1, Mark2, Mark3;
    ReadNumbers(Mark1, Mark2, Mark3);
    PrintResult(CalculateAverage(Mark1, Mark2, Mark3));

    return 0;
}