#include <iostream>
using namespace std; 

void tong(int array[3][4]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += array[i][j];
        }
        cout << "Tong dong " << i + 1 << " la: " << sum << endl;

    }
}

int main() {
    int array[3][4];

    cout << "Nhap cac phan tu cua mang: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Nhap cac phan tu cua dong " << i + 1 << ": " << endl;
        for (int j = 0; j < 4; j++) {
            cout << "Nhap phan tu thu " << j + 1 << ": ";
            cin >> array[i][j];
        }
    }

    tong(array);

    system("pause");
    return 0;
}