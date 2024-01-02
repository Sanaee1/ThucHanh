#include <iostream>
#include <algorithm> //để dùng sort()

using namespace std;

int main() {
    string ten[3];
    for (int i = 0; i < 3; i++) {
        cout << "Nhap ten nguoi thu " << i + 1 << ": ";
        cin >> ten[i];
    }

    sort(ten, ten + 3); //sort(con trỏ đầu, con trỏ cuối)

    cout << "Cac ten da dc sap xep: ";
    for (int i = 0; i < 3; i++) {
        cout << ten[i] << " ";
    }
    cout << endl;
    
    system("pause");
    return 0;
}
