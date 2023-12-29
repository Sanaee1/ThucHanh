#include <iostream>
using namespace std;

int main() {
    unsigned int n;
    cout << "Nhap n: ";
    cin >> n;
    int tong = 0;
    int tich = 1;
    while (n > 0) {
        int donvi = n % 10;
        tong += donvi;
        tich *= donvi;
        n /= 10;
    }
    cout << "Tong cac chu so cua n: " << tong << endl;
    cout << "Tich cac chu so cua n: " << tich << endl;

    system("pause");
    return 0;
}