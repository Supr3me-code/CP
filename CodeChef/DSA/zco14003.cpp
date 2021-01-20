/* You are developing a smartphone app.
You have a list of potential customers for your app. 
Each customer has a budget and will buy the app at your declared price 
if and only if the price is less than or equal to the customer's budget.

You want to fix a price so that the revenue you earn from the app is maximized. 
Find this maximum possible revenue.

For instance, suppose you have 4 potential customers and 
their budgets are 30, 20, 53 and 14. In this case, 
the maximum revenue you can get is 60 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll price(ll customer[],ll len){
	sort(customer,customer+len);
	ll sum=0,max=0;
	for(ll i=0;i<len;i++){
		sum = customer[i]*(len-i);
		if(sum>max){
			max = sum;
		}
	}
	return max;
}

int main(){
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++){
		cin>>arr[i];
	}
	printf("%lld",price(arr,n));
	return 0;
}