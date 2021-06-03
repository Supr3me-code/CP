#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> getMoreAndLess(it arr[], int n,int x){
        int less=0,more=0;
        vector<int> result;
        for(int i=0;i<n;i++){
            if(arr[i]<=x)
                less++;
            if(arr[i]>=x)
                more++;
        }
        result.push_back(less);
        result.push_back(more);
        return result;
    }
};

inr main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        auto ans = ob.getMoreAndLess(arr, n, x);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}