#include <iostream>
using namespace std;

int NhapSo() {
    int x;
    do {
        cout << "Nhap so tu 0 - 100: ";
        cin >> x;
        if (x < 0 || x > 100) {
            cout << "Nhap sai, nhap lai!\n";
        }
    } while (x < 0 || x > 100);
    return x;
}

void Nhapmang(int array[100][100], int m,int n) {
    int i,j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << "Nhap phan tu thu [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }
}

void Xuatmang(int array[100][100], int m, int n) {
    int i,j;
    cout << "Mang vua nhap la: \n";
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

void Tongmang(int array[100][100], int m, int n) {
    int i,j;
    int sum = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
           sum += array[i][j];
        }
    }
    cout << "Tong cac phan tu trong mang la: " << sum << endl;
}

void TongBien(int array[100][100], int m, int n) {
    int i,j;
    int sum = 0;
    for (i = 0; i < m; i++) {
        sum += array[i][0];
        sum += array[i][n-1];
    }
    for (j = 0; j < n; j++) {
        sum += array[0][j];
        sum += array[m-1][j];
    }
    sum -= array[0][0];
    sum -= array[0][n-1];
    sum -= array[m-1][0];
    sum -= array[m-1][n-1];
    cout << "Tong cac phan tu o bien la: " << sum << endl;
}

bool lucky_number(int k) {
    int sum = 0;
    int so=k%10;
    if ((so != 6) && (so != 8)) {
        return false;
        k /= 10;
    }
    return true;
}

void Lietkesomayman(int array[100][100], int m, int n) {
    int i,j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
           if (lucky_number(array[i][j])) {
               cout << array[i][j] << " ";
           }
        }
    }
}

void menu(int array[100][100], int m, int n) {
    int opt;
option:
    cout << "1. Tinh tong cac phan tu trong mang\n";
    cout << "2. Tinh tong cac phan tu o bien\n";
    cout << "3. Liet ke cac so may man\n";
    cout << "4. Thoat\n";
    cout << "Nhap lua chon: ";
    cin >> opt;
    switch (opt) {
        case 1:
            Tongmang(array,m,n);
            goto option;
        case 2:
            TongBien(array,m,n);
            goto option;
        case 3:
            Lietkesomayman(array,m,n);
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Nhap sai, nhap lai!\n";
            break;
    }
}

int main() {
    int m,n;
    int array[100][100];
    cout << "Nhap so hang: ";
    m = NhapSo();
    cout << "Nhap so cot: ";
    n = NhapSo();
    Nhapmang(array,m,n);
    Xuatmang(array,m,n);

    menu(array,m,n);

    system("pause");
    return 0;
}