#include<iostream>
using namespace std;
int main()
{
    double Operand1, Operand2, Result;
    //Request two numbers from the user
    cout << "This program allows you to perform a division of two numbers\n";
    cout << "To proceed enter two numbers:";
    try
    {
        cout << "First Number:";
        cin >> Operand1;
        cout << "Second Number:";
        cin >> Operand2;

        //find out if the denominator is 0
        if (Operand2 == 0)
        throw "Division by zero not allowed";
        //perform a division and display the reslut
        Result = Operand1/Operand2;
        cout << "\n" << Operand1 << "/" << Operand2 << "=" << Result << "\n\n";
    }
    catch (const char* Str) // catch an exception
    {
        //Display a string message accordingly
        cout << "\nBad Operator: " << Str;
    }
}
