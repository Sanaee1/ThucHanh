#include <iostream>
using namespace std;

int main() {
    int nam;
    cout << "Nhap nam: ";
    cin >> nam;
    if (nam % 400 == 0 || nam % 4 == 0 && nam % 100 != 0) {
        cout << nam << " la nam nhuan" << endl;
    }
    else {
        cout << nam << " la nam khong nhuan" << endl;
    }
    return 0;
}