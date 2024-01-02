#include <iostream>
using namespace std;

int main() {
    float a,b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;

    if (a != 0) {
        cout << "Phuong trinh co nghiem x = " << -b/a << endl;
    }
    else {
        cout << "Phuong trinh vo nghiem " << endl;
    }
    system("pause");
    return 0;

}