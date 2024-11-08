#include <iostream>

using namespace std;
string ReadName()
{
    string readName;
    cout << "PLease Enter your Name" << endl;
    getline(cin, readName);
    return readName;
}
void printName(string name)
{
    cout << "My name is :" << name << endl;
}

int main()

{
    printName(ReadName());

    return 0;
}