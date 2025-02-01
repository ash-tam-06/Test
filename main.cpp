#include <iostream>

using namespace std;

int main() {
    char operation;
    short num1;
    short num2;
    cout << "What operation would you like to use? +? -? *? /?" << endl;
    cin >> operation;
    cout << "What is the first number?" << endl;
    cin >> num1;
    cout << "What is the second number?" << endl;
    cin >> num2;
    if (operation == '/') {
        while (num2 == 0) {
            cout << "Please chose a non zero number" << endl;
            cin >> num2;
        }
    }
    switch (operation) {
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            cout << num1 / num2 << endl;
            break;
        default:
            cout << "Invalid operation." << endl;
    }

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.