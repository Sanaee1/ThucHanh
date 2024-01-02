#include <iostream>
using namespace std;

int lay_chu_so_dau(int n) {
    while (n >= 10) {
        n /= 10;
    }
    return n;
}

void counting(int n) {
    int first = lay_chu_so_dau(n);
    int count = 0;
    
    while (n > 0) {
        if (n % 10 == first) {
            count++;
        }
        n /= 10;
    }
    cout << "Co " << count << " chu so " << first << endl;
}

int main() {
    int n;
    cout << "Nhap n: "; 
    cin >> n;

    counting(n);

    system("pause");
    return 0;
}