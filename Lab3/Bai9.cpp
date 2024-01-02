#include <iostream>
#include <valarray>
using namespace std;

bool check(int n) {
    for (int i = 0; i < (int)log10(n) + 1; i++) //(int)log10(n) :lấy số chữ số 
    {
        if (n % 10 < (n / 10) % 10) {
            return false;
        }
    n /= 10;
    }
    return true;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    if (check(n)) {
        cout << "Cac chu so cua " << n << " dang tang dan" << endl;
    } 
    else {
        cout << "Cac chu so cua " << n << " khong tang dan" << endl;
    }

    system("pause");
    return 0;
}