#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout << "Nhap so a: ";
    cin >> a;
    cout << "Nhap so b: ";
    cin >> b;
    cout << "Nhap so c: ";
    cin >> c;

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    if (a > c) {
        int temp = a;
        a = c;
        c = temp;
    }

    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
    cout << "Cac so nguyen theo thu tu tang dan: " << a << " " << b << " " << c << endl;
    system("pause");
    return 0;
}