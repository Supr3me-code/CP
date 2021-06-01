#include <bits/stdc++.h>
using namespace std;

int countOfElemets(int arr[], int n, int x);

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];
        cin >> x;
        cout << countOfElemets(arr, n, x) <<endl;
    }
    return 0;
}

int countOfElements(int arr[], int n,int x){
    int counter=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=x){
            counter++;
        }
    }
    return counter;
}