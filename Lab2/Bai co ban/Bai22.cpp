#include <iostream>
using namespace std;

int main() {
    int n;
    double S = 0;
    cout << "Nhap n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        S += 1.0/i;
    }

    cout << "S = " << S << endl;

    system("pause");
    return 0;
}