#include <iostream>
using namespace std;

string ReadPinCode()
{
    string PinCode;
    cout << "Please enter PIN code \n";
    cin >> PinCode;

    return PinCode;
}

bool Login()
{
    string PinCode;
    do
    {
        PinCode = ReadPinCode();

        if (PinCode == "1234")
        {
            return 1; // this will exit the Function and return true
        }
        else
        {
            cout << "\nWrong PIN\n";
            system("color 4F"); // turn screen to Red
        }

    } while (PinCode != "1234");
    return 0; // When you reach here this means Login Faild
}
int main()
{
    if (Login())
    {
        system("color 2F"); // turn screen to green
        cout << "\nYour account balance is " << 7500 << '\n';
    };
    return 0;
}