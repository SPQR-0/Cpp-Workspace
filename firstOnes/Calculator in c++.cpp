#include <iostream>
using namespace std;


int main()
{
    char op;
    double num1;
    double num2;
    double result;

    cout << "********* CALCULATOR ***********\n";

    cout << "enter operation (* + - /): " ;
    cin >> op;

    cout << "Enter the number 1: " ;
    cin >> num1;

    cout << "Enter the number 2: " ;
    cin >> num2;

    switch (op)
    {
        case '*':
            result = num1 * num2;
            cout << "result is: " << result << '\n';
            break;
        case '+':
            result = num1 + num2;
            cout << "result is: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            cout << "result is: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            cout << "result is: " << result << '\n';
            break;
    default:
        cout << "No Result Sir!!\n";
        break;
    }

    cout << "**********************************";

    return 0;
}