#include <iostream>
using namespace std;

void Xoataivitri(int a[], int &n, int x)
{
    for (int i = x; i < n; i++)
        a[i] = a[i + 1];
    n--;
}

void Xoacacgiatri(int a[], int &n, int x) {
    for (int i = n-1; i >= 0; i--) {
        if (a[i] == x) {
            Xoataivitri(a, n, i);
        }
    }
}

int main() {
    int a[100];
    int n, x;
    cout << "Nhap so phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> a[i];
    }
    cout << "Nhap gia tri can xoa: ";
    cin >> x;
    Xoacacgiatri(a, n, x);
    cout << "Mang sau khi xoa: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    system("pause");
    return 0;
}
