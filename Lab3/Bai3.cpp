#include <iostream>
using namespace std;

void tong_cac_uoc(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    cout << "Tong cac uoc cua " << n << " la: " <<  sum << endl;
}

void tich_cac_uoc(int n) {
    int product = 1;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            product *= i;
        }
    }
    cout << "Tich cac uoc cua " << n << " la: " <<  product << endl;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    tong_cac_uoc(n);
    tich_cac_uoc(n);

    system("pause");
    return 0;
}