#include <iostream>
using namespace std;

int main() {
    unsigned int n;
    int i = 1;
    int sum = 0;
    cout << "Nhap n: ";
    cin >> n;
    while (i <= n ) {
        if (i % 3 == 0 && i % 5 == 0 || i % 3 == 2 && i % 5 ==3) {
            sum += i;
        }
        i++;
    }
    cout << "Tong cac so nguyen <= " << n << ": " << sum << endl;

    system("pause");
    return 0;
}