#include <iostream>
#include <cmath>

using namespace std;

//Hàm kiểm tra tam giác
bool KT_tamgiac(int a, int b, int c) {
  // Kiểm tra xem tổng của hai số nhỏ nhất có lớn hơn số lớn nhất không
  if (a + b > c && b + c > a && a + c > b) {
    return true;
  }
  return false;
}

int main() {
    int a,b,c;
    cout << "Nhap canh a: ";
    cin >> a;
    cout << "Nhap canh b: ";
    cin >> b;
    cout << "Nhap canh c: ";
    cin >> c;

    if (KT_tamgiac(a,b,c)) {
        cout << "Day la tam giac " << endl;
        int P, S;
        P = a + b + c;
        S = sqrt(P/2 * (P/2 - a) * (P/2 - b) * (P/2 - c));
        cout << "Chu vi: " << P << endl;
        cout << "Dien tich: " << S << endl;
    }
    else {
        cout << "Day khong phai la tam giac " << endl;
    }

    
    system("pause");
    return 0;
}
