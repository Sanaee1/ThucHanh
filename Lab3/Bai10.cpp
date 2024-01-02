#include <iostream>
using namespace std;

void tong_day_so(int array[15]) {
    int sum = 0;
    for (int i = 0; i < 15; i++) {
        sum += array[i];
    }
    cout << "Tong day so: " << sum << endl;
}

void tich_day_so(int array[15]) {
    int mul = 1;
    for (int i = 0; i < 15; i++) {
        mul *= array[i];
    }
    cout << "Tich day so: " << mul << endl;
}

void min_max_day_so(int array[15]) {
    int min = array[0];
    int max = array[0];
    for (int i = 1; i < 15; i++) {
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }
    cout << "Min day so: " << min << endl;
    cout << "Max day so: " << max << endl;
}

int main() {
    int array[15];
    for (int i = 0; i < 15; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> array[i];
    }

    tong_day_so(array);
    tich_day_so(array);
    min_max_day_so(array);

    system("pause");
    return 0;
}