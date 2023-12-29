#include <iostream>
using namespace std;

int main() {
    int rong;
    cout << "Nhap chieu rong: ";
    cin >> rong;

    int dai = 1.5 * rong;
    int P = (dai + rong)*2;
    int S = dai*rong;
    
    cout << "Chu vi hinh chu nhat: " << P << endl;
    cout << "Dien tich hinh chu nhat: " << S << endl;   

    system("pause");
    return 0;
}