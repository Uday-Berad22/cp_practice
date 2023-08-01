#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        if (gcd(a, b) == 1) {
            // Case 1: Direct jump to (a,b)
            cout << "1\n";
            // cout << "0 0\n";
            cout << a << " " << b << "\n";
        } else {
            // Case 2: Jump to an intermediate point
            int d = gcd(a, b);
            int a1 = a / d;
            int b1 = b / d;
            int x, y;
            bool found = false;

            // Check (a1, 0) as the intermediate point
            x = a1;
            y = 0;
            if (x <= a && y <= b && gcd(x, y) == 1 && gcd(a-x, b-y) == 1) {
                found = true;
            }

            // Check (0, b1) as the intermediate point
            x = 0;
            y = b1;
            if (!found && x <= a && y <= b && gcd(x, y) == 1 && gcd(a-x, b-y) == 1) {
                found = true;
            }

            // Check (a1, b) as the intermediate point
            x = a1;
            y = b;
            if (!found && x <= a && y <= b && gcd(x, y) == 1 && gcd(a-x, b-y) == 1) {
                found = true;
            }

            // Check (a, b1) as the intermediate point
            x = a;
            y = b1;
            if (!found && x <= a && y <= b && gcd(x, y) == 1 && gcd(a-x, b-y) == 1) {
                found = true;
            }

            if (found) {
                // Intermediate point found
                cout << "2\n";
                // cout << "0 0\n";
                cout << x << " " << y << "\n";
                cout << a << " " << b << "\n";
            } 
        }
    }
    return 0;
}
