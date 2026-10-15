#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long sum = 0;
    for (int i = 0; i < N; ++i) {
        int x;
        cin >> x;
        sum += x;
    }

    cout << sum << '\n';
    return 0;
}

// Time: O(N) trong mọi trường hợp
// Memory: O(1)
