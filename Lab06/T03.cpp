//#include <iostream>
//using namespace std;
//
//int main() {
//    int decimalNum;
//    int octalNum = 0;
//    int multiplier = 1;
//
//    cout << "Enter a decimal number: ";
//    cin >> decimalNum;
//
//    if (decimalNum < 0) {
//        cout << "Octal conversion is not defined for negative numbers.";
//    }
//    else {
//        do {
//            octalNum += (decimalNum % 8) * multiplier;
//            decimalNum /= 8;
//            multiplier *= 10;
//        } while (decimalNum > 0);
//
//        cout << "The octal representation of the given decimal number is: " << octalNum;
//    }
//
//    return 0;
//}