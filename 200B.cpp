#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    int sum = 0;
    int p;

    for(int i = 0; i<n; i++){
        cin>>p;
        sum+=p;
    }

    float average = float(sum)/n;

    cout<<average<<endl;

    return 0;
}