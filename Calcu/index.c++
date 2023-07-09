#include <iostream>
using namespace std;

int main() {

    double n1, n2;
    char operation;

        cout << "Please Enter a Number: ";
        cin >> n1;
        cout << "Please Enter Another Number: ";
        cin >> n2;
        cout << "Please Choose an Operation ( +, -, *, / ): ";
        cin >> operation;
        cout << "The Result is: ";

            switch (operation) {
                case '+' : cout << n1 + n2 << endl;
                    break;
                case '-' : cout << n1 - n2 << endl;
                    break;
                case '*' : cout << n1 * n2 << endl;
                    break;
                case '/' : cout << n1 / n2 << endl;
                    break;
                default : cout << "Invalid Operation" << endl;
            }
    return 0;
}