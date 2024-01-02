#include <iostream>
using namespace std;

int main() {
    int n,x;
    float count = 0;
    int array[100];
    cout << "Nhap so phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> array[i];
    }
    cout << "Nhap gia tri x: ";
    cin >> x;

    for (int i = 0; i < n; i++) {
        if (array[i] == x) {
            count++;
        }
    }
    cout << "Gia tri " << x << " xuat hien " << count << " lan trong mang" << endl;

    system("pause");
    return 0;
}