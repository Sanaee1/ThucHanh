#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int S = 0;

    for (int i = 1; i <= 2*n+1; i++) {
        if (i % 2 != 0) {
            S += i;
        }
    }

    cout << "S = " << S << endl;

    system("pause");
    return 0;
}