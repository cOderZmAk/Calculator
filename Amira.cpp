#include <iostream>

using namespace std;


double operationSum(double num1, double num2, char operatorChoice) {

    double result = 0;

    switch (operatorChoice) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0) {
            cout << "Division by zero is not allowed." << endl;
        }
        else {
            result = num1 / num2;
        }
        break;
    }
    return result;
}



int main() {
    char operatorChoice;
    double num1, num2, result;

    cout << "Choose an operator (+ , - , / , *): ";
    cin >> operatorChoice;

    cout << "Choose two numbers! ";
    cin >> num1 >> num2;

    result = operationSum(num1, num2, operatorChoice);

    cout << num1 << " " << operatorChoice << " " << num2 << " = " << result << endl;

    return 0;
}
