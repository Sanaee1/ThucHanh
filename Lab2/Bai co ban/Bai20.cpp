#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int S = 0;

    for (int i = 1; i <= n; i++) {
        S += i;
    }
    cout << "Tong S = 1 + ... + " << n << "= " << S << endl;

    system("pause");
    return 0;
}