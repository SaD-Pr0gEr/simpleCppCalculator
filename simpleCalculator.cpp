#include "iostream"

using namespace std;


int main() {
    double static num1, num2, result;
    int static operation;

    cout << "Hello! Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;
    cout << "Enter the operation\n1: add\n2: subdivide\n3: multiply\n4: divide\nChoice operation number: ";
    cin >> operation;
    switch (operation) {
    case 1:
        result = num1 + num2;
        break;
    case 2:
        result = num1 - num2;
        break;
    case 3:
        result = num1 * num2;
        break;
    case 4:
        result = num1 / num2;
        break;
    default:
        cout << "Error";
        main();
    }
    cout << "Result: " << result << endl;

    main();
}
