#include <iostream>
using namespace std;

void Chenxvaovitri(int A[], int &n, int x, int vt)
{
    for (int i = n; i > vt; i--)
        A[i] = A[i - 1];
    A[vt] = x;
    n++;
}

void Themcuoi(int A[], int &n, int x)
{   
    A[n] = x;
    n++;
}

void Chenxvaosauy(int A[], int &n, int x, int y)
{
    int i;
    for (int i = 0; i < n; i++)
        if (A[i] == y) {
            Chenxvaovitri(A, n, x, i + 1);
            break;
        }        
}

int main() {
    int A[100];
    int n, x, y;
    cout << "Nhap so phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> A[i];
    }
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;
    Chenxvaosauy(A, n, x, y);
    if (y > n) {
        cout << "Khong tim thay y trong mang" << endl;
        cout << "Mang sau khi them: ";
        Themcuoi(A, n, x);
        for (int i = 0; i < n; i++)
            cout << A[i] << " ";
    }
    else {
        cout << "Mang sau khi chen: ";
        for (int i = 0; i < n; i++)
            cout << A[i] << " ";
    }
    

    system("pause");
    return 0;
}