#include <iostream>
#include <time.h>
using namespace std;

void am100_100(int m, int n) {
    int array[50][50];
    int i,j;
    srand(time(NULL)); // khởi tạo bộ sinh số ngẫu nhiên
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            array[i][j] = rand() % 201 - 100; // tạo số ngẫu nhiên từ -100 đến 100
        }
    }
    cout << "Mang sau khi phat sinh ngau nhien trong khoang -100 den 100:\n";
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
}

void ij(int m, int n) {
    int array[50][50];
    int i,j;
    srand(time(NULL)); // khởi tạo bộ sinh số ngẫu nhiên
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            array[i][j] = i*j;
        }
    }
    cout << "Mang sau khi phat sinh ngau nhien va phai toan la i*j:\n";
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
           cout << array[i][j] << "\t";
        }
        cout << endl;
    }
}

void _0_99(int m, int n) {
    int array[50][50];
    int i,j;
    srand(time(NULL)); // khởi tạo bộ sinh số ngẫu nhiên
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            array[i][j] = rand() % 100;
        }
    }
    cout << "Mang sau khi phat sinh ngau nhien trong khoang 0-99:\n";
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
           cout << array[i][j] << "\t";
        }
        cout << endl;
    }
}

void toan_so_le(int m, int n) {
    int array[50][50];
    int i,j;
    srand(time(NULL)); // khởi tạo bộ sinh số ngẫu nhiên
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            array[i][j] = rand() % 100;
            if (array[i][j] % 2 == 0) {
                array[i][j] += 1;
            }
        }
    }
    cout << "Mang sau khi phat sinh ngau nhien va phai toan la so le:\n";
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
}

void toan_so_chan(int m,int n) {
    int array[50][50];
    int i,j;
    srand(time(NULL)); // khởi tạo bộ sinh số ngẫu nhiên
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            array[i][j] = rand() % 100;
            if (array[i][j] % 2 != 0) {
                array[i][j] += 1;
            }
        }
    }
    cout << "Mang sau khi phat sinh ngau nhien va phai toan la so chan:\n";
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

}

void toan_so_am_le(int m, int n) {
    int array[50][50];
    int i,j;
    srand(time(NULL)); // khởi tạo bộ sinh số ngẫu nhiên
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            //tạo số ngẫu nhiên từ -100 đến -1
            array[i][j] = rand() % 100 - 100;
            if (array[i][j] % 2 == 0) {
                array[i][j] += 1;
            } // nếu là số chẵn thì cộng thêm 1 để thành số lẻ
        }
    }
    cout << "Mang sau khi phat sinh ngau nhien vua la so am vua la so le:\n";
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
}

void toan_so_duong_chan(int m, int n) {
    int array[50][50];
    int i,j;
    srand(time(NULL)); // khởi tạo bộ sinh số ngẫu nhiên
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            array[i][j] = rand() % 100;
            if (array[i][j] % 2 != 0) {
                array[i][j] += 1;
            }
        }
    }
    cout << "Mang sau khi phat sinh ngau nhien vua la so duong vua la so chan:\n";
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
}

void toan_so_am_chan(int m, int n) {
    int array[50][50];
    int i,j;
    srand(time(NULL)); // khởi tạo bộ sinh số ngẫu nhiên
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            array[i][j] = rand() % 100 - 100;
            if (array[i][j] % 2 != 0) {
                array[i][j] += 1; 
            }
        }
    }
    cout << "Mang sau khi phat sinh ngau nhien vua la so am vua la so chan:\n";
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
}

void toan_so_duong_le(int m, int n) {
    int array[50][50];
    int i,j;
    srand(time(NULL)); // khởi tạo bộ sinh số ngẫu nhiên
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            // tạo số ngẫu nhiên từ 0 đến 100
            array[i][j] = rand() % 100;
            if (array[i][j] % 2 == 0) {
                array[i][j] += 1;
            }
        }
    }
    cout << "Mang sau khi phat sinh ngau nhien vua la so duong vua la so le:\n";
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
}

void toan_so_nguyen_to(int m, int n) {
    int array[50][50];
    int i,j;
    int count = 0;
    srand(time(NULL)); // khởi tạo bộ sinh số ngẫu nhiên
    for (i = 2; i < m; i++) {
        for (j = 2; j < n; j++) {
            array[i][j] = rand() % 100;
            //Giá trị mảng toàn số nguyên tố
            for (int k = 1; k < array[i][j]; k++) {
                if (array[i][j] % k == 0) {
                    count++;
                }
            }
            if (count != 2) {
                array[i][j] = rand() % 100;
            } // nếu không phải số nguyên tố thì tạo lại
        }
    }
    cout << "Mang sau khi phat sinh ngau nhien vua la so nguyen to:\n";
    for (i = 2; i < m; i++) {
        for (j = 2; j < n; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
}

void toan_so_hoan_thien(int m, int n) {
    int array[50][50];
    int i,j;
    int sum = 0;
    srand(time(NULL)); // khởi tạo bộ sinh số ngẫu nhiên
    for (i = 2; i < m; i++) {
        for (j = 2; j < n; j++) {
            array[i][j] = rand() % 201 - 100;
            for (int k = 1; k < array[i][j]; k++) {
                if (array[i][j] % k == 0) {
                    sum += k;
                } 
            } // tính tổng các ước
            if (sum != array[i][j]) {
                array[i][j] = rand() % 201 - 100;
            } // nếu không phải số hoàn thiện thì tạo lại
        }
    }
    cout << "Mang sau khi phat sinh ngau nhien vua la so hoan thien:\n";
    for (i = 2; i < m; i++) {
        for (j = 2; j < n; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
}

void tongijlasole(int m, int n) {
    int array[50][50];
    int i,j;
    srand(time(NULL)); // khởi tạo bộ sinh số ngẫu nhiên
    // Lặp qua các phần tử của mảng
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
        // Tính tổng i+j
            int sum = i + j;

        // Gán giá trị cho phần tử
            array[i][j] = (sum % 2 == 0) ? 2 : 1;
        }
    }
    cout << "Mang sau khi phat sinh ngau nhien ma a[i][j] chi nhan so chan khi i+j la so le:\n";
    for (i = 2; i < m; i++) {
        for (j = 2; j < n; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
}

void tongijlasochan(int m, int n) {
    int array[50][50];
    int i,j;
    srand(time(NULL)); // khởi tạo bộ sinh số ngẫu nhiên
    for (i = 2; i < m; i++) {
        for (j = 2; j < n; j++) {
            array[i][j] = rand() % 201 - 100;
            if ((i+j) % 2 != 0) {
                array[i][j] = rand() % 201 - 100;
            }
        }
    }
    cout << "Mang sau khi phat sinh ngau nhien ma a[i][j] chi nhan so chan khi i+j la so chan:\n";
    for (i = 2; i < m; i++) {
        for (j = 2; j < n; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

}

void cau4(int m, int n) {
    int option;
option:
    cout << "1. Gia tri phat sinh ngau nhien va phai toan la so le.\n";
    cout << "2. Gia tri phat sinh ngau nhien va phai toan la so chan.\n";
    cout << "3. Gia tri phat sinh ngau nhien vua la so am vua la so le.\n";
    cout << "4. Gia tri phat sinh ngau nhien vua la so duong vua la so chan.\n";
    cout << "5. Gia tri phat sinh ngau nhien vua la so am vua la so chan.\n";
    cout << "6. Gia tri phat sinh ngau nhien vua la so duong vua la so le.\n";
    cout << "7. Thoat.\n";
    cout << "Nhap lua chon: ";
    cin >> option;
    switch (option) {
        case 1:
            toan_so_le(m,n);
            goto option;
        case 2:
            toan_so_chan(m,n);
            goto option;
        case 3:
            toan_so_am_le(m,n);
            goto option;
        case 4:
            toan_so_duong_chan(m,n);
            goto option;
        case 5:
            toan_so_am_chan(m,n);
            goto option;
        case 6:
            toan_so_duong_le(m,n);
            goto option;
        case 7:
            break;
        default:
            cout << "Lua chon khong hop le.\n";
            goto option;
    }
}

void cau5(int m, int n) {
    int option;
op:
    cout << "1. Gia tri phat sinh ngau nhien va phai toan la so nguyen to.\n";
    cout << "2. Gia tri phat sinh ngau nhien va phai toan la so hoan thien.\n";
    cout << "3. Thoat.\n";
    cout << "Nhap lua chon: ";
    cin >> option;
    switch (option) {
        case 1:
            toan_so_nguyen_to(m,n);
            goto op;
        case 2:
            toan_so_hoan_thien(m,n);
            goto op;
        case 3:
            break;
        default:
            cout << "Lua chon khong hop le.\n";
            goto op;
    }
}

void cau6(int m, int n) {
    int o;
o:
    cout << "1. Gia tri phat sinh ngau nhien ma a[i][j] chi nhan so chan khi i+j la so le.\n";
    cout << "2. Gia tri phat sinh ngau nhien ma a[i][j] chi nhan so chan khi i+j la so chan.\n";
    cout << "3. Thoat.\n";
    cout << "Nhap lua chon: ";
    cin >> o;
    switch (o) {
        case 1:
            tongijlasole(m,n);
            goto o;
        case 2:
            tongijlasochan(m,n);
            goto o;
        case 3:
            break;
        default:
            cout << "Lua chon khong hop le.\n";
            goto o;
    }

}

void menu(int m, int n) {
menu:
    int luachon;
    cout << "1. Gia tri mang phat sinh ngau nhien trong khoang -100 den 100.\n";
    cout << "2. Gia tri trong phan tu a[i][j] la i*j.\n";
    cout << "3. Gia tri phat sinh ngau nhien trong khoang 0-99.\n";
    cout << "4. Gia tri phat sinh ngau nhien va phai toan la so le, chan, vua am vua le hoac vua duong vua chan.\n";
    cout << "5. Gia tri phat sinh ngau nhien va phai toan la so nguyen to hoac so hoan thien.\n";
    cout << "6. Gia tri phat sinh ngau nhien ma a[i][j] chi nhan so chan khi i+j la so le hoac nguoc lai.\n";
    cout << "7. Thoat.\n";
    cout << "Nhap lua chon: ";
    cin >> luachon;
    switch (luachon) {
        case 1:
            am100_100(m,n);
            goto menu;
        case 2:
            ij(m,n);
            goto menu;
        case 3:
            _0_99(m,n);
            goto menu;
        case 4:
            cau4(m,n);
            goto menu;
        case 5:
            cau5(m,n);
            goto menu;
        case 6:
            cau6(m,n);
            goto menu;
        case 7:
            exit(0);
        default:
            cout << "Lua chon khong hop le.\n";
            goto menu;
    }
}

int main() {
    //Viết hàm khởi tạo các phần tử là ngẫu nhiên trong mảng 2 chiều kích thước mxn (2<=n, m < 50)
    int m,n;
nhapm:
    cout << "Nhap so hang: ";
    cin >> m;
    if (m < 0 || m >= 50) {
        cout << "So hang khong hop le";
        goto nhapm;
    }
nhapn:
    cout << "Nhap so cot: ";
    cin >> n;
    if (n < 0 || n > 2) {
        cout << "So cot khong hop le";
        goto nhapn;
    }

    menu(m,n); //Bị lỗi câu 5 và 6

    system("pause");
    return 0;
}