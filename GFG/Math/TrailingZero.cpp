#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int trailingZeros(int N){
		int count = 0;
        for (int i = 5; (N/i) > 0; i=i*5) {
            count = count + N/i;
        }
        return count;
	}
};

int main(){
	int t;
	cin>>t;
	while(t--){
		int N;
		cin>>N;
		Solution ob;
		int ans = ob.trailingZeros(N);
		cout<<ans<<endl;
	}
	returrn 0;
}