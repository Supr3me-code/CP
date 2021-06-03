#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> findElement(int a[], int n){
        vector<int> result;
        sort(a,a+n);
        for(int i=0;i<n-2;i++){
            result.push_back(a[i]);
        }
        return result;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Solution ob;
        vector<int> res = ob.findElement(a,n);

        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}