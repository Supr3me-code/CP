#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int leftElement(int a[], int n){
        sort(a,a+n);
        int x = (n-1)/2;
        return a[x];
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n], i;
        for(i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.leftElement(a,n)<<endl;
    }
}