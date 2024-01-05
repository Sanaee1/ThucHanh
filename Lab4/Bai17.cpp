#include <iostream>

using namespace std;

struct PhanSo {
    int Tu;
    int Mau;
};

// Hàm nhập số hữu tỉ
void NhapPhanSo(PhanSo &p) {
    cout << "Nhap tu so: ";
    cin >> p.Tu;
    cout << "Nhap mau so: ";
    cin >> p.Mau;
}

// Hàm tính tổng hai số hữu tỉ
PhanSo TinhTong(PhanSo p1, PhanSo p2) {
    PhanSo p;
    p.Tu = p1.Tu * p2.Mau + p2.Tu * p1.Mau;
    p.Mau = p1.Mau * p2.Mau;
    return p;
}

// Hàm tính tích hai số hữu tỉ
PhanSo TinhTich(PhanSo p1, PhanSo p2) {
    PhanSo p;
    p.Tu = p1.Tu * p2.Tu;
    p.Mau = p1.Mau * p2.Mau;
    return p;
}

int main() {
    PhanSo p1, p2;

    // Nhập hai số hữu tỉ
    NhapPhanSo(p1);
    NhapPhanSo(p2);

    
    // Tính tổng hai số hữu tỉ
    PhanSo pTong = TinhTong(p1, p2);
    cout << "Tong 2 so huu ti: " << pTong.Tu << "/" << pTong.Mau << endl;
    
    // Tính tích hai số hữu tỉ
    PhanSo pTich = TinhTich(p1, p2);
    cout << "Tich 2 so huu ti: " << pTich.Tu << "/" << pTich.Mau << endl;
    
    system("pause");
    return 0;
}