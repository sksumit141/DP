#include<iostream>

using namespace std;

int main(){
    string t;

    cin >> t;

    string strnum = "";

    int n = t.length();  

    int i = 0;

    while (i < n) {
        if (t[i] == '.') {  
            strnum += "0";
            i += 1;
        }
        else if (t[i] == '-' && i + 1 < n && t[i+1] == '.') {  
            strnum += "1";
            i += 2;
        }
        else {
            strnum += "2";
            i += 2;
        }
    }

    cout << strnum << endl;
    return 0;
}
