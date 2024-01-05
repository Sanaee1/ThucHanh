#include <iostream>
using namespace std;

void Hoanvi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Sapxep(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; j > i; j--)
            if (a[j] < a[j - 1])
                Hoanvi(a[j], a[j - 1]);
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
    Sapxep(a, n);
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            for (int j = i; j < n; j++) {
                a[j] = a[j + 1];
            }
            n--;
        }
    }
    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    system("pause");
    return 0;
}