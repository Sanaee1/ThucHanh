#include <iostream>
using namespace std;

int main() {
    int a,b,c,tong_n,tich_n;
    float d,e,f,tong_t,tich_t;

    cout << "Nhap so nguyen 1: ";
    cin >> a;
    cout << "Nhap so nguyen 2: ";
    cin >> b;
    cout << "Nhap so nguyen 3: ";
    cin >> c;
    cout << "Nhap so thuc 1: ";
    cin >> d;
    cout << "Nhap so thuc 2: ";
    cin >> e;
    cout << "Nhap so thuc 3: ";
    cin >> f;

    tong_n = a + b + c;
    tich_n = a * b * c;
    tong_t = d + e + f;
    tich_t = d * e * f;

    cout << "Tong 3 so nguyen: " << tong_n << endl;
    cout << "Tich 3 so nguyen: " << tich_n << endl;
    cout << "Tong 3 so thuc: " << tong_t << endl;
    cout << "Tich 3 so thuc: " << tich_t << endl;

    system("pause");
    return 0;
}