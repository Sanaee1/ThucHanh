#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int a,b,c;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "Phuong trinh vo so nghiem " << endl;
            }
            else {
                cout << "Phuong trinh vo nghiem " << endl;
            }
        }
        else {
            cout << "Phuong trinh co nghiem x = " << -c/b << endl;
        }
    }
    else {
        int delta = b*b - 4*a*c;
        if (delta < 0) {
            cout << "Phuong trinh vo nghiem " << endl;
        }
        else if (delta == 0) {
            cout << "Phuong trinh co nghiem kep x = " << -b/(2*a) << endl;
        }
        else {
            cout << "Phuong trinh co hai nghiem phan biet: " << endl;
            cout << "x1 = " << (-b + sqrt(delta))/(2*a) << endl;
            cout << "x2 = " << (-b - sqrt(delta))/(2*a) << endl;
        }
    }
    system("pause");
    return 0;
}