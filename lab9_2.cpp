//ขอให้เติมมาเฉพาะ function printO() โดยที่ไม่ต้องเติม function main() มาในช่องนี้
#include <iostream>
#include <string>
using namespace std;
void printO(int N, int M) {
    if (N <= 0 || M <= 0) {
        cout << "Invalid input";
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << "O";
        }
        cout << "\n";
    }
}
