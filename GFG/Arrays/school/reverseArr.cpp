#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,s;
    cin>>t;
    while(t--){
        cin>>s;
        int arr[s];
        for(int i=0;i<s;i++){
            cin>>arr[i];
        }
        reverse(arr,arr+s);
        for(int i=0;i<s;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}