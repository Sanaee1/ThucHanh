#include <iostream>
using namespace std;

void liet_ke(int n,int m) {
    int uoc_n[100];
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            uoc_n[i] = i;
        }
    }
    cout << "Cac uoc so cua " << n << " nho hon " << m << " la: ";
    for (int i = 1; i <= n/2; i++) {
        if (uoc_n[i] < m) {
            cout << uoc_n[i] << " ";
        }
    }
}

int main() {
    int n,m;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap m: ";
    cin >> m;
    liet_ke(n,m);

    system("pause");
    return 0;
}