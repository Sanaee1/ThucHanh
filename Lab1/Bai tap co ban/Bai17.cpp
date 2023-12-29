#include <iostream>
using namespace std;

int main() {
    int dai,rong;
    cout << "Nhap chieu dai: ";
    cin >> dai;
    cout << "Nhap chieu rong: ";
    cin >> rong;

    int P = (dai + rong)*2;
    int S = dai*rong;

    cout << "Chu vi hinh chu nhat: " << P << endl;
    cout << "Dien tich hinh chu nhat: " << S << endl;
    
    return 0;
}