#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long int

//if n = 2^i then -1
//else 2,3,1,5,4,6,7,9,8,10,11,12,13,14,15,16,17,18,19..

int main(){
	ll t,n;
	cin>>t;
	while(t--){
		cin>>n;
		ll arr[n];
		if(n==1){
			cout<<1<<endl;
		}
		else if(!(n&(n-1))){
			cout<<-1<<endl;
		}
		else{
			for(ll i=0;i<n;i++){
				arr[i] = i+1;
			}
			for(ll i=0;i<n;i++){
				if(!(arr[i]&(arr[i]-1))){
					// cout<<"swapped"<<arr[i]<<"and"<<arr[i+1];

					swap(arr[i],arr[i+1]);
					i++;
				}
				
			}
			swap(arr[1],arr[2]);
			for(ll i=0;i<n;i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
