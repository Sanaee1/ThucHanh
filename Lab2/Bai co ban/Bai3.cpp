#include <iostream>
using namespace std;

const float pi = 3.14;

int main() {
    //Câu a
    int a, b;
    char opt;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap phep tinh: ";
    cin >> opt;
    
    switch(opt) {
        case '+':
            cout << a << " + " << b << " = " << a + b;
            break;
        case '-':
            cout << a << " - " << b << " = " << a - b;
            break;
        case '*':
            cout << a << " * " << b << " = " << a * b;
            break;
        case '/':
            cout << a << " / " << b << " = " << a / b;
            break;
        default:
            cout << "Khong hop le";
            break;
    }
    cout << endl;
    //Câu b
    float r;
    int option;
    cout << "Nhap ban kinh: ";
    cin >> r;
    cout << "Tinh: " << endl;
    cout << "1. Dien tich hinh tron" << endl;
    cout << "2. Chu vi hinh tron" << endl;
    cin >> option;

    switch(option) {
        case 1:
            cout << "Dien tich hinh tron: " << pi * r * r;
            break;
        case 2:
            cout << "Chu vi hinh tron: " << 2 * pi * r;
            break;
        default:
            cout << "Khong hop le";
            break;
    }

    system("pause");
    return 0;
}
