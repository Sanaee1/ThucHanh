#include <iostream>
using namespace std;

void ucln(int a, int b) {
    int min = a < b ? a : b;
    int ucln = 1;

    for (int i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            ucln = i;
        }
    }
    cout << "UCLN cua " << a << " va " << b << " la: " << ucln << endl;
}

int main() {
    int a, b;
    cout << "Nhap a: "; 
    cin >> a;
    cout << "Nhap b: "; 
    cin >> b;

    ucln(a, b);

    system("pause");
    return 0;
}