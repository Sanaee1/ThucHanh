#include <iostream>
using namespace std;

int main() {
    int n;
    int temp[3];
    int i = 1;
    cout << "Nhap n: ";
    cin >> n;

    temp[3] = n / 100; //lấy chữ số hàng trăm

    while (n > 0) {
        int donvi = n % 10;
        temp[i] = donvi;
        n /= 10;
        i++;
    }
    
    cout << temp[1] << temp[2] << temp[3] << endl;

    system("pause");
    return 0;
}