#include <iostream>
using namespace std;

void uoc(int n) {
    int max = 1;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (i % 2 != 0)
                if (i > max) {
                    max = i;
                }
        }
    }
    cout << "Uoc le lon nhat cua " << n << " la: " <<  max << endl;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    uoc(n);

    system("pause");
    return 0;
}