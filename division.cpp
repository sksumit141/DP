#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    
        if(arr[i] >= 1900){
            cout<<"Division 1"<<endl;
        }else if(arr[i] >= 1600 && arr[i] <= 1899){
            cout<<"Division 2"<<endl;
        }else if(arr[i] >= 1400 && arr[i] <= 1599){
            cout<<"Division 3"<<endl;
        }else{
            cout<<"Division 4"<<endl;
        }
    }

    return 0;
}
