#include <iostream>

using namespace std;

int main() {
    int n; 
    int doanhthu;
    int thunhap;

    cout << "Nhap so luong mat hang ";
    cin >> n;

    int masp[n];
    float giasp[n];

    for (int i = 0; i < n; i++) {
        cout << "Nhap ma san pham thu " << i + 1 << ": ";
        cin >> masp[i];
        cout << "Nhap gia san pham thu " << i + 1 << ": ";
        cin >> giasp[i];
    }

    for (int i = 0; i < n; i++) {
        doanhthu += masp[i] * giasp[i];
    }

    thunhap = 300 + 0.05 * doanhthu;

    cout << "Thu nhap nhan vien ban hang: " << thunhap << "USD" << endl;

    system("pause");
    return 0;
}
