#include <iostream>
using namespace std;

void sortAscending(int a[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
            }
        }
    }
}

int main() {
    int N;
    cin >> N;

    int* a = new int[N];
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }

    sortAscending(a, N);

    for (int i = 0; i < N; ++i) {
        cout << a[i];
        if (i < N - 1) cout << ' ';
    }
    cout << '\n';

    delete[] a;
    return 0;
}

// Time: O(N^2) trong mọi trường hợp
// Memory: O(N) cho mảng đầu vào, O(1) bộ nhớ phụ
