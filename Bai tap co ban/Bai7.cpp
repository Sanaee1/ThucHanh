#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Nhap so nguyen: ";
    cin >> a;

    if (a < 0) {
        cout << a << " la so am!" << endl;
    }
    if (a % 2 == 0) {
        cout << a << " la so chan" << endl;
    }
    else {
        cout << a << " la so le" << endl;
    }
    return 0;
}