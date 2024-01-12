#include <iostream>
using namespace std;

struct KhachHang {
    int soTK;
    float beginning_balance;
    float charges;
    float credits;
    float credit_limit;
};

int main() {
    KhachHang khachhang;
    cout << "Nhap thong tin khach hang: " << endl;
    cout << "So tai khoan: ";
    cin >> khachhang.soTK;
    cout << "So du dau thang: ";
    cin >> khachhang.beginning_balance;
    cout << "Tong so tien trong thang: ";
    cin >> khachhang.charges;
    cout << "Tong so tien tra trong thang: ";
    cin >> khachhang.credits;
    cout << "So tien duoc phep no toi da: ";
    cin >> khachhang.credit_limit;

    int new_balance = khachhang.beginning_balance + khachhang.charges - khachhang.credits;
    if (new_balance > khachhang.credit_limit) {
        cout << "Khach hang " << khachhang.soTK << " vuot qua han muc no" << endl;
    }
    else {
        cout << "Khach hang " << khachhang.soTK << " khong vuot qua han muc no" << endl;
    }

    system("pause");
    return 0;
}