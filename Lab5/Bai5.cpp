#include <iostream>
#include <math.h>

using namespace std;

struct DayA {
    int n;
    int e[100];
};

void XuatDayA(DayA a) {
    cout << "Day A: ";
    for (int i = 0; i < a.n; i++) {
        cout << a.e[i] << " ";
    }
    cout << endl;
}

int TongLe(DayA a) {
    int sum = 0;
    for (int i = 0; i < a.n; i++) {
        if (a.e[i] % 2 != 0) {
            sum += a.e[i];
        }
    }
    return sum;
}

int TongChan(DayA a) {
    int sum = 0;
    for (int i = 0; i < a.n; i++) {
        if (a.e[i] % 2 == 0) {
            sum += a.e[i];
        }
    }
    return sum;
}

int Tong(DayA a) {
    int sum = 0;
    for (int i = 0; i < a.n; i++) {
        sum += a.e[i];
    }
    return sum;
}

int Max(DayA a) {
    int max = a.e[0];
    for (int i = 1; i < a.n; i++) {
        if (a.e[i] > max) {
            max = a.e[i];
        }
    }
    return max;
}

int Min(DayA a) {
    int min = a.e[0];
    for (int i = 1; i < a.n; i++) {
        if (a.e[i] < min) {
            min = a.e[i];
        }
    }
    return min;
}

bool KiemTraSoNguyenTo(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void SoNguyenTo(DayA a) {
    cout << "Cac so nguyen to trong day A: ";
    for (int i = 0; i < a.n; i++) {
        if (KiemTraSoNguyenTo(a.e[i])) {
            cout << a.e[i] << " ";
        }
    }
    cout << endl;
}

void KiemTra(DayA a) {
    int x;
    cout << "Nhap gia tri can kiem tra: ";
    cin >> x;
    bool check = false;
    for (int i = 0; i < a.n; i++) {
        if (a.e[i] == x) {
            check = true;
            break;
        }
    }
    if (check) {
        cout << "Gia tri " << x << " co trong day A.\n";
    }
    else {
        cout << "Gia tri " << x << " khong co trong day A.\n";
    }
}

void SapXepTang(DayA a) {
    for (int i = 0; i < a.n - 1; i++) {
        for (int j = i + 1; j < a.n; j++) {
            if (a.e[i] > a.e[j]) {
                int temp = a.e[i];
                a.e[i] = a.e[j];
                a.e[j] = temp;
            }
        }
    }
    XuatDayA(a);
}

void SapXepGiam(DayA a) {
    for (int i = 0; i < a.n - 1; i++) {
        for (int j = i + 1; j < a.n; j++) {
            if (a.e[i] < a.e[j]) {
                int temp = a.e[i];
                a.e[i] = a.e[j];
                a.e[j] = temp;
            }
        }
    }
    XuatDayA(a);
}

void NhapLai(DayA a) {
    cout << "Nhap lai so phan tu cua day A: ";
    cin >> a.n;
    for (int i = 0; i < a.n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> a.e[i];
    }
}

void menu(DayA a) {
menu: 
    cout << "0. Thoat\n";
    cout << "1. Xuat gia tri day so nguyen A.\n";
    cout << "2. Xuat gia tri tong cac phan tu le trong day A.\n";
    cout << "3. Xuat gia tri tong cac phan tu chan trong day A.\n";
    cout << "4. Xuat gia tri tong cac phan tu trong day A.\n";
    cout << "5. Xuat gia tri lon nhat trong day A.\n";
    cout << "6. Xuat gia tri nho nhat trong day A.\n";
    cout << "7. Xuat cac gia tri la so nguyen to trong day A.\n";
    cout << "8. Kiem tra mot gia tri.\n";
    cout << "9. Xuat gia tri cac phan tu trong day A theo thu tu tang dan.\n";
    cout << "10. Xuat gia tri cac phan tu trong day A theo thu tu giam dan.\n";
    cout << "11. Nhap lai day A.\n";

    int opt;
    cout << "Nhap lua chon: ";
    cin >> opt;
    
    switch (opt) {
    case 0:
        break;
    case 1:
        XuatDayA(a);
        goto menu;
    case 2:
        cout << "Tong cac phan tu le trong day A: " << TongLe(a) << endl;
        goto menu;
    case 3:
        cout << "Tong cac phan tu chan trong day A: " << TongChan(a) << endl;
        goto menu;
    case 4:
        cout << "Tong cac phan tu trong day A: " << Tong(a) << endl;
        goto menu;
    case 5:
        cout << "Gia tri lon nhat trong day A: " << Max(a) << endl;
        goto menu;
    case 6:
        cout << "Gia tri nho nhat trong day A: " << Min(a) << endl;
        goto menu;
    case 7:
        SoNguyenTo(a);
        goto menu;
    case 8:
        KiemTra(a);
        goto menu;
    case 9:
        SapXepTang(a);
        goto menu;
    case 10:
        SapXepGiam(a);
        goto menu;
    case 11:
        NhapLai(a);
        goto menu;
    default:
        cout << "Lua chon khong hop le.\n";
        goto menu;
    }

}

int main() {
    DayA a;
    cout << "Nhap so phan tu cua day A: ";
    cin >> a.n;
    for (int i = 0; i < a.n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> a.e[i];
    }

    menu(a);

    system("pause");
    return 0;
}