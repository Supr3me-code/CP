#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool IsPerfect(int a[], int n){
        int b[n];
        for(int i=0;i<n;i++){
            b[i]  = a[i];
        }
        reverse(b,b+n);

        for(int i=0;i<n;i++){
            if(b[i]!=a[i])
                return false;
        }
        return true;
    }
};

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Solution ob;
        if(ob.IsPerfect(a,n))
            cout<<"PERFECT\n";
        else   
            cout<<"NOT PERFECT\n";
    }
    return 0;
}