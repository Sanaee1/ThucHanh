#include <iostream>
using namespace std;

void Chenxvaovitri(int A[], int &n, int x, int vt)
{
    for (int i = n; i > vt; i--)
        A[i] = A[i - 1];
    A[vt] = x;
    n++;
}

int main() {
    int A[100], n, x, vt;
    cout << "Nhap so phan tu: "; cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> A[i];
    }
    cout << "Nhap gia tri can chen: "; cin >> x;
    cout << "Nhap vi tri can chen: "; cin >> vt;
    Chenxvaovitri(A, n, x, vt);
    cout << "Mang sau khi chen: ";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    system("pause");
    return 0;
}