#include <iostream>
using namespace std;

struct DaySoNguyen{
    int n;
    int e[100];
};

//Tìm x trong mảng
void TimX(DaySoNguyen a, int x) {
    int dem = 0;
    int pos;
    for (int i = 0; i < a.n; i++) {
        if (a.e[i] == x) {
            dem++;
            pos = i;
        }
    }
    if (dem == 0) {
        cout << "Khong tim thay " << x << " trong mang" << endl;
    } else {
        cout << "Tim thay " << x << " trong mang va o vi tri thu " << pos + 1 << endl;
    }
}

void Sort(DaySoNguyen &a) {
    for (int i = 0; i < a.n - 1; i++) {
        for (int j = i + 1; j < a.n; j++) {
            if (a.e[i] > a.e[j]) {
                int temp = a.e[i];
                a.e[i] = a.e[j];
                a.e[j] = temp;
            }
        }
    }
    cout << "Mang duoc sap xep tang dan: ";
    for (int i = 0; i < a.n; i++) {
        cout << a.e[i] << " ";
    }
}

int main() {
    DaySoNguyen a;
    cout << "Nhap so phan tu: ";
    cin >> a.n;
    for (int i = 0; i < a.n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> a.e[i];
    }
    int x;
    cout << "Nhap x: ";
    cin >> x;
    TimX(a, x);

    Sort(a);
    
    system("pause");
    return 0;
}