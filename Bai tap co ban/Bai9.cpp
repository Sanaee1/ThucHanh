#include <iostream>
using namespace std;

int main() {
    int a, b, max;
    cout << "Nhap so a: ";
    cin >> a;
    cout << "Nhap so b: ";
    cin >> b;
    max = a;
    if (max < b) {
        max = b;
    }
    cout << "So lon nhat la: " << max << endl;
    return 0;
}