#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        int len = m + 1;

        int l_prime = l;
        int r_prime = l + m;

        cout << l_prime << " " << r_prime << endl;
    }

    return 0;
}
