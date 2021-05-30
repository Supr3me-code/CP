#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int n);

int main(){
    int arr[1000];
    int t,n;
    cin>>t;
    while (t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<largest(arr,n)<<endl;
    }
    return 0;
}

int largest(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}