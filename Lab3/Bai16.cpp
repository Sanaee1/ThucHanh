#include <iostream>
using namespace std;

void tong(int array[30][30], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; i++) {
        sum = 0;
        for (int j = 0; j < n; j++) {
            sum += array[i][j];
        }
        cout << "Tong dong " << i + 1 << " la: " << sum << endl;

    }
}

int main() {
    int m;
    int n;
    int array[30][30];

    cout << "Nhap so dong: ";
    cin >> m;
    cout << "Nhap so cot: ";
    cin >> n;

    cout << "Nhap cac phan tu cua mang: " << endl;
    for (int i = 0; i < m; i++) {
        cout << "Nhap cac phan tu cua dong " << i + 1 << ": " << endl;
        for (int j = 0; j < n; j++) {
            cout << "Nhap phan tu thu " << j + 1 << ": ";
            cin >> array[i][j];
        }
    }

    tong(array, m, n);

    system("pause");
    return 0;
}