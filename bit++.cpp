#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int x = 0;

    for(int i = 0; i<n; i++)
{
    string operation;
    cin >> operation;

    if(operation == "++X" || operation == "X++"){
        x++;
    }else if(operation == "--X" || operation == "X--"){
        x--;
    }
}

cout << x << endl;
return 0;
}