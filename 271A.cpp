#include<iostream>
#include<set>

using namespace std;

//use set to accompany all distinct digits

int main(){
    int year;

    cin>>year;

    year = year + 1;

    while(true){

        string year_string = to_string(year);

        set<char> digits(year_string.begin(), year_string.end());

        if(digits.size() == 4){
            cout << year <<endl;
            break;
        }
        year++;
    }
    return 0;
}