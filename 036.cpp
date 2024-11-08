#include <iostream>
#include <string>
using namespace std;

enum enOperationType
{
    Add = '+',
    Subtract = '-',
    Multiply = '*',
    Divide = '/'
};
float ReadNumber(string Message)
{
    float Number = 0;
    cout << Message << endl;
    cin >> Number;
    return Number;
}
enOperationType ReadOpType()
{

    char To = '+';

    cout << "Please enter Operation Type ( + , -, * ,/)? \n";
    cin >> To;
    return static_cast<enOperationType>(To);
}
float Calculate(float Number1, float Number2, enOperationType OpType)
{
    switch (OpType)
    {
    case enOperationType::Add:
        return Number1 + Number2;
    case enOperationType::Subtract:
        return Number1 - Number2;
    case enOperationType::Multiply:
        return Number1 * Number2;
    case enOperationType::Divide:
        return Number1 / Number2;
    default:
        return Number1 + Number2;
    }
}
int main()

{
    float Number1 = ReadNumber("Please enter the First number?");
    float Number2 = ReadNumber("Please enter the seconds number?");

    enOperationType OpType = ReadOpType();

    cout << Calculate(Number1, Number2, OpType) << endl;

    return 0;
}