#include <iostream>
#include <cmath>
#include <string>

using namespace std;
struct stPiggyBankContenet
{
    short Pennies, Nickels, Dimes, Quarters, Dollars;
};
stPiggyBankContenet ReadPiggyBankContenet()
{
    stPiggyBankContenet PiggyBankContenet;
    cout << "Please enter a Tota Pennies? " << endl;
    cin >> PiggyBankContenet.Pennies;
    cout << "Please enter a Total Nickels? " << endl;
    cin >> PiggyBankContenet.Nickels;
    cout << "Plase enter a Total Dimes? " << endl;
    cin >> PiggyBankContenet.Dimes;
    cout << "Please enter a Total Quarters? " << endl;
    cin >> PiggyBankContenet.Quarters;
    cout << "Please enter a Totsl Dollars? " << endl;
    cin >> PiggyBankContenet.Dollars;

    return PiggyBankContenet;
}
int CalculateTotalPennies(stPiggyBankContenet PiggyBankContenet)
{
    int TotalPennies = 0;
    TotalPennies = PiggyBankContenet.Pennies * 1 + PiggyBankContenet.Nickels * 5 + PiggyBankContenet.Dimes * 10 + PiggyBankContenet.Quarters * 25 + PiggyBankContenet.Dollars * 100;
    return TotalPennies;
}

int main()

{
    int TotalPennies = CalculateTotalPennies(ReadPiggyBankContenet());
    cout << TotalPennies << endl;
    cout << static_cast<float>(TotalPennies) / 100 << endl;

    return 0;
}