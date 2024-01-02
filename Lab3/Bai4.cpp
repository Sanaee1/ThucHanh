#include <iostream>
using namespace std;

void tong(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (i % 2 == 0) {
                sum += i;
            }
        }
    }
    cout << "Tong cac uoc chan cua " << n << " la: " <<  sum << endl;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    tong(n);

    system("pause");
    return 0;
}