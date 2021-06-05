#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll t,xa,xb,Xa,Xb;
    cin>>t;
    while(t--){
        cin>>xa>>xb>>Xa>>Xb;
        cout<< ceil(Xa/xa) + ceil(Xb/xb)<<endl;
    }
    return 0;
}
