#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<float> streamAvg(int arr[], int n){
        vector<float> result;
        int sum=0;
        for(int i=0;i<n;i++){
            sum += arr[i];
            result.push_back((float)sum/(i+1));
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
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        auto ans = ob.streaAvg(arr, n);
        cout<<fixed<<setprecision(2);
        for(auto x : ans){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}