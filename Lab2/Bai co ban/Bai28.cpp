#include <iostream>
#include <math.h>
using namespace std;

const float pi = 3.14;

void HCN() {
    float a,b,S,P;
    cout << "Nhap chieu dai: ";
    cin >> a;
    cout << "Nhap chieu rong: ";
    cin >> b;

    S = a*b;
    P = (a+b)*2;

    cout << "Dien tich hcn: " << S << endl;
    cout << "Chu vi hcn: " << P << endl; 
}

void TamGiac() {
    float a,b,c,P,S;
    cout << "Nhap canh a: ";
    cin >> a;
    cout << "Nhap canh b: ";
    cin >> b;
    cout << "Nhap canh c: ";
    cin >> c;

    P = a+b+c;
    S = sqrt(P*(P-a)*(P-b)*(P-c));

    cout << "Dien tich tam giac: " << S << endl;
    cout << "Chu vi tam giac: " << P << endl;
}

void HinhTron() {
    float r,S,P;
    cout << "Nhap ban kinh: ";
    cin >> r;

    S = pi*r*r;
    P = 2*pi*r;

    cout << "Dien tich hinh tron: " << S << endl;
    cout << "Chu vi hinh tron: " << P << endl;

}

void menu() {
menu:
    cout << "MENU:" << endl;
    cout << "1. Tinh dien tich va chu vi hinh chu nhat khi biet do dai 2 canh" << endl;
    cout << "2. Tinh dien tich va chu vi tam giac khi biet do dai 3 canh" << endl;
    cout << "3. Tinh dien tich va chu vi khi biet ban kinh hinh tron" << endl;
    cout << "4. Ket thuc chuong trinh" << endl;
    cout << "Ban chon (1-4): ";
    int opt;
    cin >> opt;
    bool tieptuc = true;
    while (tieptuc == true){
        switch (opt) {
            case 1:
                HCN();
                goto menu;
            case 2:
                TamGiac();
                goto menu;
            case 3:
                HinhTron();
                goto menu;
            case 4:
                tieptuc = false;
                break;
            default:
                cout << "Nhap sai, vui long nhap lai!" << endl;
                goto menu;
                break;
        }
    }
}

int main() {
    menu();
    cout << "Bye Bye!" << endl;
    system("pause");
    return 0;
}