
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;

        string modern = "";
        modern += s1[0];
        modern += s2[0];
        modern += s3[0];

        for (char &c : modern) {
            c = tolower(c);
        }

        cout << modern << endl;
    }

    return 0;
}
