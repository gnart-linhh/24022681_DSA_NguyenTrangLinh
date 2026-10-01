#include <iostream>
using namespace std;

void deleteAt(int a[], int& n, int k) {
    if (k < 0 || k >= n) return;

    for (int i = k; i < n - 1; ++i) {
        a[i] = a[i + 1];
    }

    --n;
}

void insertAt(int a[], int& n, int capacity, int y, int m) {
    if (n >= capacity || m < 0 || m > n) return;

    for (int i = n; i > m; --i) {
        a[i] = a[i - 1];
    }

    a[m] = y;
    ++n;
}

int main() {
    int N;
    cin >> N;

    int capacity = N + 1;
    int* a = new int[capacity];

    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }

    int k;
    cin >> k;
    deleteAt(a, N, k);

    int y, m;
    cin >> y >> m;
    insertAt(a, N, capacity, y, m);

    for (int i = 0; i < N; ++i) {
        cout << a[i];
        if (i < N - 1) cout << ' ';
    }
    cout << '\n';

    delete[] a;
    return 0;
}

// Time:
// Xóa: Best O(1), Average O(N), Worst O(N)
// Chèn: Best O(1), Average O(N), Worst O(N)
// Memory: O(N) cho mảng, O(1) bộ nhớ phụ
