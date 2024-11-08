#include <iostream>

using namespace std;
struct stInfo
{
    short Age;
    bool HasDriverLicence;
};
stInfo readInfo()
{
    stInfo Info;
    cout << "Enter your Age" << endl;
    cin >> Info.Age;
    cout << "Is has Driver Licence" << endl;
    cin >> Info.HasDriverLicence;
    return Info;
}
bool IsAccpeted(stInfo info)
{
    return (info.Age >= 21 && info.HasDriverLicence);
}
void PrintResult(stInfo info)
{
    if (IsAccpeted(info))
    {
        cout << "Hird" << endl;
    }
    else
    {
        cout << "Regpect" << endl;
    }
}

int main()

{
    PrintResult(readInfo());

    return 0;
}