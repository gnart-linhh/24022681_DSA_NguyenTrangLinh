#include <iostream>
using namespace std;

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);

    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

void reduceFraction(int& a, int& b) {
    if (b == 0) return;

    int g = gcd(a, b);
    if (g != 0) {
        a /= g;
        b /= g;
    }

    if (b < 0) {
        a = -a;
        b = -b;
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    if (b == 0) {
        cout << "Mau so khong hop le\n";
        return 0;
    }

    reduceFraction(a, b);
    cout << a << '/' << b << '\n';

    return 0;
}

// Time: O(log(min(|a|, |b|))) trong mọi trường hợp
// Memory: O(1)
