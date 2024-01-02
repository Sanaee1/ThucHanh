#include <iostream>
using namespace std;

void check(int x, int array[100]) {
    int pos;
    int n;
    bool duplicate;
    for (int i = 0; i < n; i++) {
        if (array[i] == x) {
            pos = i;
            duplicate = true;
            break;
        }
    }
    if (duplicate) {
        cout << "Gia tri " << x << " co trong mang va xuat hien tai vi tri " << pos + 1 << endl;
    } else {
        cout << "Gia tri " << x << " khong xuat hien trong mang" << endl;
    }
}

int main() {
    int n;
    int x;
    int array[100];

    cout << "Nhap so phan tu: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> array[i];
    }

    cout << "Nhap gia tri x: ";
    cin >> x;

    check(x, array);

    system("pause");
    return 0;
}