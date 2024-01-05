#include <iostream> 
using namespace std;

int main() {
    int A[100][100], B[100][100];
    int m;
    cout << "Nhap so hang, cot: ";
    cin >> m;
    int n = m;
    for (int i = 0; i < m; i++) {
        cout << "Nhap hang thu " << i + 1 << ": ";
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        cout << "Nhap hang thu " << i + 1 << ": ";
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }

    //Tổng A và B
    int C[100][100];
    cout << "Tong A va B: " << endl;
    for (int i = 0; i < m; i++) {
        cout << "Hang thu " << i + 1 << ": ";
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}