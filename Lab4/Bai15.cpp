#include <iostream>
#include <math.h>
using namespace std;

struct OXY {
    float x;
    float y;
};

void NhaptoaXY(OXY *a, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap toa do diem thu " << i + 1 << endl;
        cout << "Nhap x" << i+1 << ": ";
        cin >> a[i].x;
        cout << "Nhap y" << i+1 << ": ";
        cin >> a[i].y;
    }
}

void Khoangcach2diem(OXY *a, int n) {
    float d = 0;
    for (int i = 0; i < n - 1; i++) {
        d = sqrt(pow(a[i].x - a[i+1].x, 2) + pow(a[i].y - a[i+1].y, 2));
        cout << "Khoang cach giua 2 diem " << i + 1 << " va " << i + 2 << " la: " << d << endl;
    }
}

void DiemcokhoangcachganO(OXY *a, int n) {
    float d = 0;
    float min = 0;
    int index = 0;
    for (int i = 0; i < n; i++) {
        d = sqrt(pow(a[i].x, 2) + pow(a[i].y, 2));
        if (i == 0) {
            min = d;
        }
        if (d < min) {
            min = d;
            index = i;
        }
    }
    cout << "Diem co khoang cach gan O nhat la: " << endl;
    cout << "x = " << a[index].x << endl;
    cout << "y = " << a[index].y << endl;
}

int main() {
    int n;
    cout << "Nhap so luong diem: ";
    cin >> n;
    OXY *a = new OXY[n];
    NhaptoaXY(a, n);
    if (n == 2) {
        Khoangcach2diem(a, n);
    }
    DiemcokhoangcachganO(a, n);
    
    system("pause");
    return 0;
}