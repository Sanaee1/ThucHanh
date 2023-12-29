#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 0;
    cout << "Nhap n: ";
    cin >> n;
    int temp = n;
    //giả sử số may mắn chỉ toàn chưa số 6 hoặc 8
    while (n > 0) {
        int donvi = n % 10;
        
        n /= 10;
        if (donvi != 6 && donvi != 8) {
            i++;
        }
    }
    if (i == 0) {
        cout << temp << " la so may man!" << endl;
    } else {
        cout << temp << " khong phai la so may man!" << endl;
    }

    system("pause");
    return 0;
}