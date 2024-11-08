#include <iostream>

using namespace std;
struct strInfo
{
    short Age;
    bool HasDriverLicence;
    bool HasRecomention;
};
strInfo reafInfo()
{
    strInfo info;
    cout << "ENter your age" << endl;
    cin >> info.Age;
    cout << "has driver licence" << endl;
    cin >> info.HasDriverLicence;
    cout << "has recomection " << endl;
    cin >> info.HasRecomention;
    return info;
}
bool IsAccpeted(strInfo info)
{
    if (info.HasRecomention)
    {
        return true;
    }
    else
    {
        return (info.Age >= 21 && info.HasDriverLicence);
    }
}
void PrintResult(strInfo info)
{
    if (IsAccpeted(info))
    {
        cout << "Hired" << endl;
    }
    else
    {
        cout << "Rejected" << endl;
    }
}

int main()

{

    PrintResult(reafInfo());
    return 0;
}