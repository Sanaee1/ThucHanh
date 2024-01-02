#include <iostream>
using namespace std;

void dem_uoc_n(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    cout << "So uoc cua " << n << " la: " <<  count << endl;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    dem_uoc_n(n);

    system("pause");
    return 0;
}