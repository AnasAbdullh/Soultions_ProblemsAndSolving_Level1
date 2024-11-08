#include <iostream>
#include <string>

using namespace std;

string ReadPINCode()
{
    string PINcode;

    cout << "Please enter PIN code \n";
    cin >> PINcode;

    return PINcode;
}
bool Login()
{
    string PinCode;
    short Counter = 3;

    do
    {
        Counter--;
        PinCode = ReadPINCode();
        if (PinCode == "1234")
        {
            return 1;
        }
        else
        {
            system("color 4F");
            cout << "\nWrong PIN, you have " << Counter << " more turn" << endl;
        }

    } while (Counter >= 1 && PinCode != "1234");

    return 0;
}

int main()
{
    if (Login())
    {
        system("color 2F");
        cout << "\nYour account balance is " << 7500 << '\n';
    }
    else
    {

        cout << "\nYou card blocked call the bank for help. \n";
    }
}