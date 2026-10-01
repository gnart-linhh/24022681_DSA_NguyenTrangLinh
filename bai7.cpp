#include <iostream>
using namespace std;

long long sumMatrix(int** a, int N, int M) {
    long long sum = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            sum += a[i][j];
        }
    }

    return sum;
}

void deleteRow(int**& a, int& N, int M, int i) {
    if (i < 0 || i >= N) return;

    delete[] a[i];

    for (int row = i; row < N - 1; ++row) {
        a[row] = a[row + 1];
    }

    --N;
}

int main() {
    int N, M;
    cin >> N >> M;

    int** a = new int*[N];

    for (int i = 0; i < N; ++i) {
        a[i] = new int[M];
        for (int j = 0; j < M; ++j) {
            cin >> a[i][j];
        }
    }

    cout << sumMatrix(a, N, M) << '\n';

    int i;
    cin >> i;
    deleteRow(a, N, M, i);

    for (int row = 0; row < N; ++row) {
        for (int col = 0; col < M; ++col) {
            cout << a[row][col];
            if (col < M - 1) cout << ' ';
        }
        cout << '\n';
    }

    for (int row = 0; row < N; ++row) {
        delete[] a[row];
    }
    delete[] a;

    return 0;
}

// Time:
// Tính tổng: O(N*M) trong mọi trường hợp
// Xóa dòng: O(N) trong mọi trường hợp
// Memory: O(N*M)
