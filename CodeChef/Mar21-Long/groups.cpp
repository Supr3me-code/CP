#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll t,counter=0;
	string str;
	cin>>t;
	while(t--){
		counter=0;
		cin>>str;
		ll n = str.length();
		ll arr[n];
		for(ll i=0;i<n;i++){
			arr[i] = str.at(i);
		}
		for(ll i=0;i<n-1;i++){
			if(arr[i]=='1'){
				if(arr[i+1]=='0'){
					counter++;
				}
			}
		}
		if(arr[n-1]=='1'){
			counter++;
		}
		cout<<counter<<endl;
	}
	return 0;
}