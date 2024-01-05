#include <iostream>
using namespace std;

int main() {
    int array[100][100];
    int m,n;
    cout << "Nhap so hang: ";
    cin >> m;
    cout << "Nhap so cot: ";
    cin >> n;
    for (int i = 0; i < m; i++) {
        cout << "Nhap hang thu " << i + 1 << ": ";
        for (int j = 0; j < n; j++) {
            cin >> array[i][j];
        }
    }
    int Tong = 0;
    for (int i = 0; i < m; i++) {
        int TongHang = 0;
        for (int j = 0; j < n; j++) {
            TongHang += array[i][j];
        }
        cout << "Tong hang thu " << i + 1 << ": " << TongHang << endl;
        Tong += TongHang;
    }

    system("pause");
    return 0;
}