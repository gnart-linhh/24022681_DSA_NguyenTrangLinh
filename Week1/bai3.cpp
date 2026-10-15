#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    if (n < 0) {
        cout << "Khong hop le\n";
        return 0;
    }

    cout << factorial(n) << '\n';
    return 0;
}

// Time: O(n) trong mọi trường hợp
// Memory: O(1)
