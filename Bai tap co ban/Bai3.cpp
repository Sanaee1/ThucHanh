#include <iostream>
using namespace std;

int main() {
    int a, b, songuyen, tong, hieu, tich, thuong;
    float sothuc;
    char kitu;

    cout << "Nhap so nguyen: ";
    cin >> songuyen;
    cout << songuyen << endl;
    cout << "Nhap so thuc: ";
    cin >> sothuc;
    cout << sothuc << endl;
    cout << "Nhap ki tu: ";
    cin >> kitu;
    cout << kitu << endl;

    cout << "Nhap so nguyen a: ";
    cin >> a;
    cout << "Nhap so nguyen b: ";
    cin >> b;
    tong = a+b;
    hieu = a-b;
    tich = a*b;
    thuong = a/b;
    cout << "Tong 2 so a+b: " << tong << endl;
    cout << "Hieu 2 so a-b: " << hieu << endl;
    cout << "Tich 2 so a*b: " << tich << endl;
    cout << "Thuong 2 so a/b: " << thuong << endl;

    return 0;
}