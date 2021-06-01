#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int sum(int arr[], int n){
        int result=0;
        for(int i=0;i<n;i++){
            result+=arr[i];
        }
        return result;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++){
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sum(arr, n);
        cout << ans << endl;
    }
    return 0;
}