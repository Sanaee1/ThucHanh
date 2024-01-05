#include <iostream>
using namespace std;

//Viết chương trình nhâp một dãy số hữu tỉ (tối đa 100) và tính tổng số
struct Phanso {
    int tu;
    int mau;
};

struct DaySoPhanSo {
    int n;
    Phanso e[100];
};

void NhapDaySoPhanSo(DaySoPhanSo &a) {
    cout << "Nhap so phan tu: ";
    cin >> a.n;
    for (int i = 0; i < a.n; i++) {
        cout << "Nhap phan so thu " << i + 1 << ": ";
        cin >> a.e[i].tu >> a.e[i].mau;
    }
}

void TongDaySoPhanSo(DaySoPhanSo a) {
    Phanso tong;
    tong.tu = 0;
    tong.mau = 1;
    for (int i = 0; i < a.n; i++) {
        tong.tu = tong.tu * a.e[i].mau + a.e[i].tu * tong.mau;
        tong.mau = tong.mau * a.e[i].mau;
    }
    cout << "Tong day so phan so: " << tong.tu << "/" << tong.mau << endl;
}

int main() {
    DaySoPhanSo a;
    NhapDaySoPhanSo(a);
    TongDaySoPhanSo(a);

    system("pause");
    return 0;
}