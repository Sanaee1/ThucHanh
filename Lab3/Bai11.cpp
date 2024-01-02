#include <iostream>
using namespace std;

void tong_tich_day_so(int n, int array[100]) {
    int sum = 0;
    int mul = 1;
    for (int i = 0; i < n; i++) {
        sum += array[i];
        mul *= array[i];
    }
    cout << "Tong day so: " << sum << endl;
    cout << "Tich day so: " << mul << endl;
}

void min_max(int n, int array[100]) {
    int min = array[0];
    int max = array[0];
    cout << array[0] << endl;
    for (int j = 0; j < n; j++) {
        if (array[j] < min) {
            min = array[j];
        }
        if (array[j] > max) {
            max = array[j];
        }
    }
    cout << "Min day so: " << min << endl;
    cout << "Max day so: " << max << endl;
}

int main() {
    int n;
    int array[100];
    cout << "Nhap so phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> array[i];
    }

    tong_tich_day_so(n, array);
    min_max(n, array);

    system("pause");
    return 0;
}