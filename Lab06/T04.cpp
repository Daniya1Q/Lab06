//#include <iostream>
//using namespace std;
//
//int main() {
//    char choice;
//
//    do {
//        float num1, num2;
//        char op;
//
//        cout << "Enter first number, operator, and second number: ";
//        cin >> num1 >> op >> num2;
//
//        float result;
//
//        switch (op) {
//        case '+':
//            result = num1 + num2;
//            break;
//        case '-':
//            result = num1 - num2;
//            break;
//        case '*':
//            result = num1 * num2;
//            break;
//        case '/':
//            if (num2 != 0) {
//                result = num1 / num2;
//            }
//            else {
//                cout << "Error: Division by zero is not allowed.";
//                continue;
//            }
//            break;
//        default:
//            cout << "Error: Invalid operator.";
//            continue;
//        }
//        cout << "Answer = " << result << endl;
//        cout << "Do another (y/n)? ";
//        cin >> choice;
//    } while (choice == 'y' || choice == 'Y');
//    return 0;
//}