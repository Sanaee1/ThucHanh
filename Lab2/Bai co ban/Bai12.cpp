#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int a;
    do {
        cout << "Nhap a: ";
        cin >> a;
        sum += a;
    } 
    while (a != 0);
    cout << "Tong cac so vua nhap: " << sum << endl;

    system("pause");
    return 0;
}