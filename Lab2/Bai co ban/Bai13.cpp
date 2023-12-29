#include <iostream>
using namespace std;

int main() {
    unsigned int n, a, d;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap d: ";
    cin >> d;
    int i = 0;
    while (i < n) {
        cout << a << " ";
        a += d;
        i++;
    }
    cout << endl;

    system("pause");
    return 0;
}
