#include <iostream>

using namespace std;

struct strfullName
{
    string FirstName;
    string LastName;
};
strfullName readName()
{
    strfullName Name;
    cout << "Enter First Name" << endl;
    cin >> Name.FirstName;
    cout << "Enter Last Name" << endl;
    cin >> Name.LastName;
    return Name;
}
string fullName(strfullName full, bool reverds)
{
    string Full = "";
    if (reverds)
        Full = (full.LastName + " " + full.FirstName);
    else
        Full = (full.FirstName + " " + full.LastName);
    return Full;
}
void printFullName(string Name)
{
    cout << "Your Name is " << Name << endl;
}

int main()

{
    printFullName(fullName(readName(), false));
    return 0;
}