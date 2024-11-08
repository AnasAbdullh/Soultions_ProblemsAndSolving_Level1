#include <iostream>
#include <string>
using namespace std;

enum enPassFail
{
    Pass = 1,
    Fail = 2
};
short readMark()
{
    short Mark;
    cout << "please Enter your Mark? " << endl;
    cin >> Mark;
    return Mark;
}
enPassFail checkMark(short Mark)
{
    if (Mark >= 50)

        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}
void PrintResult(short Mark)
{
    if (checkMark(Mark) == enPassFail::Pass)
        cout << "\n You Passed" << endl;
    else
        cout << "\n You Faild" << endl;
}
int main()

{
    PrintResult(readMark());

    return 0;
}