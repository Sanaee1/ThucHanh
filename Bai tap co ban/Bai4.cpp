#include <iostream>
using namespace std;

const float pi = 3.14;

int main() {
    double r, P, S;
    cout << "Nhap ban kinh r= ";
    cin >> r;
    P = 2*pi*r;
    S = pi*r*r;
    cout << "Chu vi hinh tron = " << P << endl;
    cout << "Dien tich hinh tron = " << S << endl;

    return 0;
}