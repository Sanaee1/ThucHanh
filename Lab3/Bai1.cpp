#include <iostream>
using namespace std; 

void liet_ke_uoc_so(int n) {
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
}
int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Cac uoc so cua " << n << " la: ";
    liet_ke_uoc_so(n);
    system("pause");
    return 0;
}