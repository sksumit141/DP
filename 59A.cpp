#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;

    cin >> s;

    int uppercase = 0;
    int lowercase = 0;

    for(char c: s){
        if(isupper(c)){  
            uppercase++;
        }else if(islower(c)){  
            lowercase++;
        }
    }

    if(uppercase > lowercase){
        for(char &c: s){
            c = toupper(c);
        }
    } else {
        for(char &c: s){
            c = tolower(c);
        }
    }

    cout << s << endl;

    return 0;
}
