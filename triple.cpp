#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        int A=0;
        for(int i=0;i<n;i++){
            if((arr[i]==arr[i+1]) &&(arr[i]==arr[i+ 2])){
                A=1;
                cout<<arr[i]<<endl;
                break;
            }
        }
        if(A==0){
            cout<<-1<<endl;
        }
        
        
    }
}