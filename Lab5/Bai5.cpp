#include <iostream>
using namespace std;

void Sapxeptheodong(int n, int matran[50][50]) {
    int i, j, k, temp;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1; j++) {
            for (k = j + 1; k < n; k++) {
                if (matran[i][j] > matran[i][k]) {
                    temp = matran[i][j];
                    matran[i][j] = matran[i][k];
                    matran[i][k] = temp;
                }
            }
        }
    }
}

void Sapxeptheocot(int n, int matran[50][50]) {
    int i, j, k, temp;
    for (j = 0; j < n; j++) {
        for (i = 0; i < n - 1; i++) {
            for (k = i + 1; k < n; k++) {
                if (matran[i][j] > matran[k][j]) {
                    temp = matran[i][j];
                    matran[i][j] = matran[k][j];
                    matran[k][j] = temp;
                }
            }
        }
    }
}

void Sapxeptheocheochinh(int n, int matran[50][50]) {
    int i, j, k, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (matran[i][i] > matran[j][j]) {
                temp = matran[i][i];
                matran[i][i] = matran[j][j];
                matran[j][j] = temp;
            }
        }
    }
}

void Sapxeptheocheophu(int n, int matran[50][50]) {
    int i, j, k, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (matran[i][n - i - 1] > matran[j][n - j - 1]) {
                temp = matran[i][n - i - 1];
                matran[i][n - i - 1] = matran[j][n - j - 1];
                matran[j][n - j - 1] = temp;
            }
        }
    }
}

void menu(int n, int matran[50][50]) {
menu:
    char opt;
    cout << "a. Xuat ma tran\n";
    cout << "b. Sap xep tang dan cac gia tri trong tung dong\n";
    cout << "c. Sap xep tang dan cac gia tri trong tung cot\n";
    cout << "d. Sap xep tang dan cac gia tri nam tren duong cheo chinh\n";
    cout << "e. Sap xep tang dan cac gia tri nam tren duong cheo phu\n";
    cout << "f. Thoat.\n";
    cout << "Nhap lua chon: ";
    cin >> opt;
    switch (opt) {
        case 'a':
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    cout << matran[i][j] << " ";
                }
                cout << endl;
            }
            goto menu;
        case 'b':
            Sapxeptheodong(n, matran);
            goto menu;
        case 'c':
            Sapxeptheocot(n, matran);
            goto menu;
        case 'd':
            Sapxeptheocheochinh(n, matran);
            goto menu;
        case 'e':
            Sapxeptheocheophu(n, matran);
            goto menu;
        case 'f':
            break;
        default:
            cout << "Lua chon khong hop le!\n";
            goto menu;
    }
}


int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int matran[50][50];

matrix:
    int o;
    cout << "1. Nhap tu ban phim \n";
    cout << "2. Ngau nhien\n";
    cout << "0. Thoat.\n";
    cout << "Nhap lua chon: ";
    cin >> o;
    int i,j;
    switch (o) {
        case 1:
            //Nhập tay
            for (i = 0; i < n; i++) {
                cout << "Nhap dong " << i + 1 << ": ";
                for (j = 0; j < n; j++) {
                    cin >> matran[i][j];
                    }
                }
            break;
        case 2:
            //Ngẫu nhiên ma trận
            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    matran[i][j] = rand() % 100;
                }
            }
            break;
        case 0:
            break;
        default:
            cout << "Lua chon khong hop le!\n";
            goto matrix;
    }

    menu(n, matran);

    return 0;
}