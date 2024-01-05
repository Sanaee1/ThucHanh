#include <iostream>
using namespace std;

void Xoavitri(int A[], int &n, int vt)
{
    for (int i = vt; i <= n-1; i++)
        A[i] = A[i + 1];
    n--;
}

int main() {
    int A[100];
    int n, vt;
    cout << "Nhap so phan tu: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "Nhap phan tu thu " << i  << ": ";
        cin >> A[i];
    }
    cout << "Nhap vi tri can xoa: ";
    cin >> vt;
    Xoavitri(A, n, vt);
    cout << "Mang sau khi xoa: ";
    for (int i = 1; i <= n; i++)
        cout << A[i] << " ";

    system("pause");
    return 0;
}