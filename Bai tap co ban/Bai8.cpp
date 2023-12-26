#include <iostream>
using namespace std;

int main() {
    int a, b,temp;
    cout << "Nhap so 1: ";
    cin >> a;
    cout << "Nhap so 2: ";
    cin >> b;

    if (a > b) {
        temp = a;
        a = b;
        b = temp;    
    }
    cout << a << " " << b << endl;
    return 0;
}