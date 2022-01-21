#include <iostream>
using namespace std;

int main() {
    int n, m, c = 0, my_num, sm_num = 0, my_num2, sm_num2 = 0, b = 0, c = 0, d = 0, e = 0;
    cin >> n >> m;
    int a[30][30];

    // обработка
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            c++;
            a[i][j] = c;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cin >> my_num >> my_num2;
    // вывод
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] % 10 == a[i][j]) cout << "   ";
            else if (a[i][j] % 100 == a[i][j]) cout << "  ";
            else if (a[i][j] % 1000 == a[i][j]) cout << " ";
            if (my_num == a[i][j]) {
                sm_num = a[i][j];
                b = i;
                c = j;
            }
            else if (my_num2 == a[i][j]) {
                sm_num2 = a[i][j];
                d = i;
                e = j;
            }
            if (i == b && j == c) {
                a[i][j] = sm_num;
            }
            if (i == d && j == e) {
                a[i][j] = sm_num2;
            }
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}