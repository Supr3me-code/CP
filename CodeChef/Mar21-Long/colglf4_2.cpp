#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll t,n,e,h,a,b,c;
	cin>>t;
	while(t--){
		ll cost=0,smallest=INT_MAX,carr[3],index;
		cin>>n>>e>>h;
		for(ll i=0;i<3;i++){
			cin>>carr[i];
		}
		a = carr[0];
		b = carr[1];
		c = carr[2];
		//------------------testing

		//------------------testing
		//find smallest among all the prices
		//increase cost, deduct n and ingredients accordingly until possible
		//if n still >0
		//again find smallest price and so on
		//if ingredients finish before n --> -1
		//else print cost
		for(ll i=0;i<3;i++){
			if(carr[i]<smallest){
				smallest = carr[i];
				index = i;
			}
		}
		// cout<<index<<endl;
		//------------------testing
			// cout<<"n: "<<n<<"\ne: "<<e<<"\nh: "<<h<<"\na: "<<a<<"\nb: "<<b<<"\nc: "<<c<<endl;
		//-------------------testing
		switch(index){
			case 0:
				while(e>=2 && n>0){
					e-=2;
					n--;
					cost+=a;
					// cout<<e<<" "<<h<<" "<<" "<<n<<endl;

				}
				//check is n=0 or e<2
				//if n=0 -->print cost
				//else find smaller(b,c) and proceed similarly
				if(n>0){
					if(b<c){
						while(h>=3 && n>0){
							h-=3;
							n--;
							cost+=b;
						}
						while((e>=1 && h>=1) && n>0){
							e-=1;
							h-=1;
							n--;
							cost+=c;
						}
						if(n>0){
							cout<<-1<<endl;
						}
						else{
							cout<<cost<<endl;
						}
					}
					else{
						while((e>=1 && h>=1) && n>0){
							e-=1;
							h-=1;
							n--;
							cost+=c;
						}
						while(h>=3 && n>0){
							h-=3;
							n--;
							cost+=b;
						}
						if(n>0){
							cout<<-1<<endl;
						}
						else{
							cout<<cost<<endl;
						}
					}
				}
				else{
					cout<<cost<<endl;
				}
				break;
			case 1:
				while(h>=3 && n>0){
					h-=3;
					n--;
					cost+=b;
				}
				/////////
				if(n>0){
					if(a<c){
						while(e>=2 && n>0){
							e-=2;
							n--;
							cost+=a;
						}
						while((e>=1 && h>=1) && n>0){
							e-=1;
							h-=1;
							n--;
							cost+=c;
						}
						if(n>0){
							cout<<-1<<endl;
						}
						else{
							cout<<cost<<endl;
						}
					}
					else{
						while((e>=1 && h>=1) && n>0){
							e-=1;
							h-=1;
							n--;
							cost+=c;
						}
						while(e>=2 && n>0){
							e-=2;
							n--;
							cost+=a;
						}
						if(n>0){
							cout<<-1<<endl;
						}
						else{
							cout<<cost<<endl;
						}
					}
				}
				else{
					cout<<cost<<endl;
				}
				/////////
				break;
			case 2:
				while((e>=1 && h>=1) && n>0){
					e-=1;
					h-=1;
					n--;
					cost+=c;
					// cout<<e<<" "<<h<<" "<<" "<<n<<endl;
				}
				///////////
				if(n>0){
					if(b<a){
						while(h>=3 && n>0){
							h-=3;
							n--;
							cost+=b;
						}
						while(e>=2 && n>0){
							e-=2;
							n--;
							cost+=a;
						}
						if(n>0){
							cout<<-1<<endl;
						}
						else{
							cout<<cost<<endl;
						}
					}
					else{
						while(e>=2 && n>0){
							e-=2;
							n--;
							cost+=a;
						}
						while(h>=3 && n>0){
							h-=3;
							n--;
							cost+=b;
						}
						if(n>0){
							cout<<-1<<endl;
						}
						else{
							cout<<cost<<endl;
						}
					}
				}
				else{
					cout<<cost<<endl;
				}
				///////////
				break;

		}

	}
	return 0;
}