#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    double* a = new double[N];
    double sum = 0;

    for (int i = 0; i < N; ++i) {
        cin >> a[i];
        sum += a[i];
    }

    double average = sum / N;

    for (int i = 0; i < N; ++i) {
        if (a[i] >= average) {
            cout << a[i] << ' ';
        }
    }
    cout << '\n';

    delete[] a;
    return 0;
}

// Time: O(N) trong mọi trường hợp
// Memory: O(N) cho mảng đầu vào, O(1) bộ nhớ phụ
