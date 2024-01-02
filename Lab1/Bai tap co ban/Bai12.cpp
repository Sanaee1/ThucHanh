#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Nhap a: ";
    cin >> a;

    int hang_tram = a / 100;
    int hang_chuc = (a % 100) / 10;
    int hang_donvi = a % 10;

    int temp = hang_tram;

    if (hang_chuc > temp) {
        temp = hang_chuc;
    }
    if (hang_donvi > temp) {
        temp = hang_donvi;
    }
    cout << "Chu so lon nhat la: " << temp << endl;

    system("pause");
    return 0;
}