#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so n: ";
    cin >> n;

    for (int i=1; i*i<=n;i++) {
        if (i*i==n) {
            cout << n << " la so chinh phuong." << endl;
            system("pause");
            return 0;
        }
    }
    cout << n << " khong phai la so chinh phuong." << endl;

    system("pause");
    return 0;
}