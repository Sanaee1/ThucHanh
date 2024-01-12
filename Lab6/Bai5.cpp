#include <iostream>
using namespace std;

void menu(int n, int matrix[][]) {
menu:
    char opt;
    cout << "a. Nhap ma tran" << endl;

    switch (opt) {
        case 'a':
        matrix:
            int opt;
            cout << "1. Nhap ma tran bang tay" << endl;
            cout << "2. Nhap ma tran ngau nhien" << endl;
            cout << "3. Quay lai" << endl;
            cout << "Nhap lua chon: ";
            cin >> opt;
            switch (opt) {
                case 1:
                    cout << "Nhap ma tran: " << endl;
                    for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                            cout << "Nhap phan tu [" << i << "][" << j << "]: ";
                            cin >> matrix[i][j];
                        }
                    }
                    break;
                case 2:
                    cout << "Nhap ma tran: " << endl;
                    srand(time(NULL));
                    for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                            matrix[i][j] = rand() % 100;
                        }
                    }
                    break;
                case 3:
                    goto menu;
                    break;
                default:
                    cout << "Lua chon khong hop le!" << endl;
                    goto matrix;
            }
    }
}

int main() {
    int n;
    int matrix[10][10];
    cout << "Nhap n: ";
    cin >> n;

    menu(n, matrix);

    system("pause");
    return 0;
}