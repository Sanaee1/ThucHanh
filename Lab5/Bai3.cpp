#include <iostream>
#include <math.h>
using namespace std;

void matrixB(float A[50][50], float B[50][50], int m, int n) {
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            B[i][j] = abs(A[i][j]);
        }
    }
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
}

void menu(float A[50][50], float B[50][50], int m, int n) {
menu:
    int choice;
    cout << "1. B[i][j] = abs(A[i][j])" << endl;

    cout << "0. Thoat" << endl;
    cout << "Nhap lua chon: "; cin >> choice;
    switch (choice) {
        case 1:
            matrixB(A,B,m,n);
            goto menu;
            
        case 0:
            cout << "Dang thoat..." << endl;
            break;
        default:
            cout << "Nhap sai, nhap lai" << endl;
            goto menu;
    }
}
int main() {
    float A[50][50];
    float B[50][50];
    int m,n;
    cout << "Nhap m: "; cin >> m;
    cout << "Nhap n: "; cin >> n;

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout << "Nhap A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }
    menu(A,B,m,n);

    system("pause");
    return 0;
}