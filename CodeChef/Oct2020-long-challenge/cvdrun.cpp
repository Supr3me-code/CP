#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,k,x,y;
	cin>>t;
	while(t--){
		cin>>n>>k>>x>>y;

		int init = (x+k)%n,flag=0;
		if(x==y){
			cout<<"YES"<<endl;
			flag=1;
		}
		while(init!=x){
			if(init==y){
				cout<<"YES"<<endl;
				flag=1;
				break;
			}
			init = (init+k)%n;
		}
		if(flag==0){
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
