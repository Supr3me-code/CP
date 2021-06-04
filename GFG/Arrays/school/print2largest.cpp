#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int print2largest(int arr[], int n){
        sort(arr,arr+n);
        int x = arr[n-1];
        for(int i=n-2;i>=0;i--){
            if(arr[i]!=x)
                return arr[i];
        }
        return -1;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << endl;
    }
    return 0;
}