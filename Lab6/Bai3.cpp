#include <iostream>
#include <algorithm>

using namespace std;

void TuDien(int n, string day[]) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++)
            if (day[j] < day[min])
                min = j;
        swap(day[i], day[min]); //swap() dùng để hoán đổi giá trị của 2 biến
    }

    cout << "Day sau khi sap xep theo thu tu tu dien: " << endl;
    for (int i = 0; i < n; i++)
        cout << day[i] << " ";

    cout << endl;
}

void Dodai(int n, string day[]) {
    //Sắp xếp theo độ dài tăng dần
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++)
            if (day[j].length() < day[min].length())
                min = j;
        swap(day[i], day[min]);
    }

    cout << endl << "Day sau khi sap xep theo do dai tang dan: " << endl;
    for (int i = 0; i < n; i++)
        cout << day[i] << " ";

    cout << endl;
}

string Dainhat(int n, string day[]) {
    string dainhat;
    int max = day[0].length();
    for (int i = 1; i < n; i++)
        if (day[i].length() > max) {
            max = day[i].length();
            dainhat = day[i];
        }
    return dainhat;
}

string Ngannhat(int n, string day[]) {
    string ngannhat;
    int min = day[0].length();
    for (int i = 1; i < n; i++)
        if (day[i].length() < min) {
            min = day[i].length();
            ngannhat = day[i];
        }
    return ngannhat; 
}

int main() {
    string day[255];
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;

    cout << "Nhap cac phan tu: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> day[i];
    }

    TuDien(n, day);
    Dodai(n, day);  
    cout << "Tu dai nhat: " << Dainhat(n, day) << endl;
    cout << "Tu ngan nhat: " << Ngannhat(n, day) << endl;

    system("pause");
    return 0;
}