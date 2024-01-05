#include <iostream>
using namespace std;

struct SinhVien {
    char maSV[10];
    char hoTen[30];
    float TB;
};

int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    SinhVien *sv = new SinhVien[n];
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin sinh vien thu " << i + 1 << endl;
        cout << "Nhap ma sinh vien: ";
        cin >> sv[i].maSV;
        cout << "Nhap ho ten: ";
        cin >> sv[i].hoTen;
        cout << "Nhap diem trung binh: ";
        cin >> sv[i].TB;
    }

    cout << "Danh sach sinh vien: " << endl;
    cout << "MaSV\tHoTen\t\t\tTB" << endl;
    for (int i = 0; i < n; i++) {
        cout << sv[i].maSV << "\t" << sv[i].hoTen << "\t\t\t" << sv[i].TB << endl;
    }

    system("pause");
    return 0;
}