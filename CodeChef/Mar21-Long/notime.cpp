#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll n,H,x,flag=0;
	// cin>>t;
	// while(t--){
		flag = 0;
		cin>>n>>H>>x;
		ll arr[n];
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		for(ll i=0;i<n;i++){
			if(x+arr[i]>=H){
				cout<<"YES"<<endl;
				flag = 1;	
				break;		
			}
		}
		if(flag==0){
			cout<<"NO"<<endl;
		}
		return 0;

}