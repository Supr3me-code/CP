/*Most problems on CodeChef highlight chef's love for food and cooking but little is known about his love for racing sports. 
He is an avid Formula 1 fan. He went to watch this year's Indian Grand Prix at New Delhi. He noticed that one segment of the circuit was a long straight road. 
It was impossible for a car to overtake other cars on this segment. Therefore, a car had to lower down its speed if there was a slower car in front of it. 
While watching the race, Chef started to wonder how many cars were moving at their maximum speed.

Formally, you're given the maximum speed of N cars in the order they entered the long straight segment of the circuit. Each car prefers to move at its maximum speed. 
If that's not possible because of the front car being slow, it might have to lower its speed. It still moves at the fastest possible speed while avoiding any collisions. 
For the purpose of this problem, you can assume that the straight segment is infinitely long.

Count the number of cars which were moving at their maximum speed on the straight segment.*/
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
typedef long long int ll;

ll fast(ll arr[],ll n){
	ll max=INT_MAX,count=0;
	for(ll i=0;i<n;i++){
		if(arr[i]<max){
			max = arr[i];
			count++;
		}
	}
	return count;
}

int main(){
	ll t,n,z=0;
	cin>>t;
	ll T=t,ans[t];
	while(t--){
		cin>>n;
		ll arr[n];
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		ans[z] = fast(arr,n); 
		z++;
	}
	for(ll i=0;i<T;i++){
		printf("%lld\n",ans[i]);
	}
	return 0;
}