#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    for(int i=0;i<n;i=i+2){
        cout<<arr[i]<<" ";
    }
}

int msin(){
    int t;
    cin>>t;
    while(t--){
        int arr[100001] = {0}
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        print(arr,n);
        cout<<endl;
    }
    return 0;
}