#include  <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll cb2[100];
		ll a[100],b[100];
		ll c;
		ll d=0;
		cin>>c;
		while(c>=pow(2,d)){
			d++;
		}
		ll i=0;
		while(c>0){
			cb2[i] = c%2;
			c = c/2;
			i++;
		}
		//reverse(c,c+i);//
		ll cb[100];
		for(ll j=0;j<i;j++){
			cb[j] = cb2[i-j-1];
		}

		// for(ll j=0;j<i;j++){
		// 	cout<<cb[j];
		// }
		if(cb[0]==1){
			a[0] = 1;
			b[0] = 0;
		}
		else{

		}
		for(ll j=1;j<i;j++){
			if(cb[j]==1){
				a[j] = 0;
				b[j] = 1;
			}
			else{
				a[j] = 1;
				b[j] = 1;
			}
		}
		// for(ll j=0;j<i;j++){
		// 	cout<<a[j];
		// }
		// cout<<endl;
		// for(ll j=0;j<i;j++){
		// 	cout<<b[j];
		// }
		ll a1=0,b1=0;
		for(ll j=0;j<i;j++){
			a1 += a[j]*pow(2,i-1-j);
		}
		for(ll j=0;j<i;j++){
			b1 += b[j]*pow(2,i-1-j);
		}
		// cout<<a1<<" "<<b1<<endl;
		ll prod = a1*b1;
		cout<<prod<<endl;
	}
	return 0;
}