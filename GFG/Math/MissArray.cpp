#include <bits/stdc++.h>
using namespace std;

int MissingNumber(vector<int>& array,int n);

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> array(n-1);
		for(int i=0;i<n-1;++i)
			cin>>array[i];
		cout<<MissingNumber(array,n)<<"\n";
	}
	return 0;
}

int MissingNumber(vector<int>& array, int n){
	int sum=0;
	for(int i=0;i<n-1;i++){
		sum+=array[i];
	}
	return (((n*(n+1))/2)-sum);
}