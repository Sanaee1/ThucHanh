#include <iostream>
#include <math.h>
using namespace std;

struct OXY {
    float x;
    float y;
};

void TamGiac(OXY A, OXY B, OXY C) {
    float AB = sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2));
    float BC = sqrt(pow(C.x - B.x, 2) + pow(C.y - B.y, 2));
    float AC = sqrt(pow(C.x - A.x, 2) + pow(C.y - A.y, 2));
    float P = AB + BC + AC;
    cout << "Chu vi tam giac: " << P << endl;
    float p = P / 2;
    float S = sqrt(p * (p - AB) * (p - BC) * (p - AC));
    cout << "Dien tich tam giac: " << S << endl;
}

void haidiemnhonhat(int n, OXY *a) {
    float min = sqrt(pow(a[1].x - a[0].x, 2) + pow(a[1].y - a[0].y, 2));
    int i1 = 0, i2 = 1;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++)
            if (sqrt(pow(a[j].x - a[i].x, 2) + pow(a[j].y - a[i].y, 2)) < min) {
                min = sqrt(pow(a[j].x - a[i].x, 2) + pow(a[j].y - a[i].y, 2));
                i1 = i;
                i2 = j;
            }
    }
    cout << "2 diem co khoang cach nho nhat: " << endl;
    cout << "Diem thu " << i1 + 1 << ": " << a[i1].x << " " << a[i1].y << endl;
    cout << "Diem thu " << i2 + 1 << ": " << a[i2].x << " " << a[i2].y << endl;
}

int main() {
    OXY A,B,C;
    cout << "Nhap toa do diem A: ";
    cin >> A.x >> A.y;
    cout << "Nhap toa do diem B: ";
    cin >> B.x >> B.y;
    cout << "Nhap toa do diem C: ";
    cin >> C.x >> C.y;

    TamGiac(A, B, C);
    
    int n;
    OXY a[100];
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap toa do diem thu " << i + 1 << ": ";
        cin >> a[i].x >> a[i].y;
    }
  
    haidiemnhonhat(n, a);

    system("pause");
    return 0;
}