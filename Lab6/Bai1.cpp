#include <iostream>
using namespace std;

void TongBP(int n, int dayso[]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += dayso[i] * dayso[i];
    }
    cout << "Tong binh phuong: " << sum << endl;
}

void Lietke(int n, int dayso[]) {
    for (int i = 0; i < n; i++) {
        bool check = true;
        for (int j = 0; j < i; j++) {
            if (dayso[i] == dayso[j]) {
                check = false;
                break;
            }
        }
        if (check) {
            cout << dayso[i] << " ";
        }
    }
    cout << endl;
}

void Min_Max(int n, int dayso[]) {
    int min = dayso[0];
    int max = dayso[0];
    for (int i = 1; i < n; i++) {
        if (dayso[i] < min) {
            min = dayso[i];
        }
        if (dayso[i] > max) {
            max = dayso[i];
        }
    }
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
}

void TB_cong(int n, int dayso[]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (dayso[i] > 0) {
            sum += dayso[i];
        }
    }
    float tongtbcong = (float)sum / n;
    cout << "Trung binh cong cac so duong: " << tongtbcong << endl;
}

int main() {
    int dayso[100];
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> dayso[i];
    }

    TongBP(n, dayso);
    Lietke(n, dayso);
    Min_Max(n, dayso);
    TB_cong(n, dayso);

    system("pause");
    return 0;
}