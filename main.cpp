#include <iostream>
#include "calc.h"
using namespace std;
void menu(){
    cout << "0 - End the program" << endl;
    cout << "1 - Addition" << endl;
    cout << "2 - Subtraction" << endl;
    cout << "3 - Division" << endl;
    cout << "4 - Multiplication" << endl;
}


int main() {
    int choice = 0;
    float a = 0;
    float b = 0;
    do {
        menu();
        cin >> choice;
        switch (choice) {
            case 0: {
                cout << "Program ended" << endl;
                break;
            }
            case 1: {
                cout << "a = " << endl;
                cin >> a;
                cout << "b= " << endl;
                cin >> b;
                float result = Add(a, b);
                cout << a << "+" << b << "=" << result << endl;
                break;
            }
            case 2: {
                cout << "a = " << endl;
                cin >> a;
                cout << "b= " << endl;
                cin >> b;
                float result = Sub(a, b);
                cout << a << "-" << b << "=" << result << endl;
                break;
            }
            case 3: {
                cout << "a = " << endl;
                cin >> a;
                cout << "b= " << endl;
                cin >> b;
                if(b != 0) {
                    float result = Div(a, b);
                    cout << a << "/" << b << "=" << result << endl;
                    break;
                }
                else{
                    cout << "Division by 0!!!" << endl;
                    break;
                }
            }
            case 4: {
                cout << "a = " << endl;
                cin >> a;
                cout << "b= " << endl;
                cin >> b;
                float result = Mul(a, b);
                cout << a << "*" << b << "=" << result << endl;
                break;
            }
            default: {
                cout << "Select the correct program!!!" << endl;
                break;
            }
        }
    }while(choice != 0);



    return 0;
}
