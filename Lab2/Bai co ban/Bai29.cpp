#include <iostream>
#include <math.h>
using namespace std;

void squirt() {
    float a;
    cout << "Nhap so can tinh can bac 2: ";
    cin >> a;
    cout << "Can bac 2 cua " << a << " la: " << sqrt(a) << endl;
}

void absolute() {
    float a;
    cout << "Nhap so can tinh tri tuyet doi: ";
    cin >> a;
    cout << "Tri tuyet doi cua " << a << " la: " << abs(a) << endl;
}

void n_star() {
    unsigned int n;
    cout << "Nhap so n: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;
}

void uoc() {
    unsigned int n;
    cout << "Nhap so n: ";
    cin >> n;
    cout << "Cac uoc cua " << n << " la: ";
    for (int i = 1; i <= n; i++) {
        if (n%i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void tong() {
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;
    }
    cout << "Tong tu 1 den " << n << " la: " << s << endl;

}

void prime() {
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    if (n < 2) {
        cout << n << " khong phai la so nguyen to" << endl;
        return;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n%i == 0) {
            cout << n << " khong phai la so nguyen to" << endl;
            return;
        }
    }
    cout << n << " la so nguyen to" << endl;

}

void ASCII() {
    char c;
    cout << "Nhap ky tu: ";
    cin >> c;
    cout << "Ma ASCII cua " << c << " la: " << (int)c << endl;

}

void menu() {
    int opt;
    do {
        cout << "1. Tinh can bac 2" << endl;
        cout << "2. Tinh tri tuyet doi" << endl;
        cout << "3. In ra n dau *" << endl;
        cout << "4. In ra cac uoc cua n" << endl;
        cout << "5. Tinh tong tu 1 den n" << endl;
        cout << "6. Kiem tra so nguyen to" << endl;
        cout << "7. Ma ASCII" << endl;
        cout << "0. Thoat" << endl;
        cout << "Nhap lua chon: ";
        cin >> opt;
        switch (opt) {
        case 1:
            squirt();
            break;
        case 2:
            absolute();
            break;
        case 3:
            n_star();
            break;
        case 4:
            uoc();
            break;
        case 5:
            tong();
            break;
        case 6:
            prime();
            break;
        case 7:
            ASCII();
            break;
        case 0:
            break;
        default:
            cout << "Lua chon khong hop le!" << endl;
            break;
        }
    } while (opt != 0);

}

int main() {
    menu();
    cout << "Bye bye!" << endl;
    system("pause");
    return 0;
}