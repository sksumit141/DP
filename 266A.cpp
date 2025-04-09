#include<iostream>
#include<string>

using namespace std;

int main(){

    int t;
    string s;

    cin>>t;
    cin>>s;

    int ans = 0;

    int l = s.length();
    char last = s[0];
    for(int i = 1; i<l;i++){
        if(last == s[i]){
            ans++;
        }
        last = s[i];
    }
    cout<<ans<<endl;

    return 0;
}