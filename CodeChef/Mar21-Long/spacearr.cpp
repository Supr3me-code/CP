#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll t,n;
	cin>>t;
	while(t--){
		cin>>n;
		ll arr[n],counter=0;
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
									// for(ll i=0;i<n;i++){
									// 	cout<<arr[i]<<" ";
									// }
		ll diff[n],arr1[n];
		for(ll i=0;i<n;i++){
			arr1[i] = i+1;
		}
									// for(ll i=0;i<n;i++){
									// 	cout<<arr[i]<<" ";
									// }
		for(ll i=0;i<n;i++){
			diff[i] = arr1[i] - arr[i];
			if(diff[i]<0){
				cout<<"Second"<<endl;
				counter = 1;
				break;
			} 
		}
		ll sum=0;
		for(ll i=0;i<n;i++){
			sum += diff[i];
		}
		if(counter == 0){
			if(sum%2==0){
				cout<<"Second"<<endl;
			}
			else{
				cout<<"First"<<endl;
			}
		}
		//sort in ascending order
		//take correstponding difference
		//sum all differences, if even -> second, odd -> first

	}
	return 0;
}