//Check if the given string is a Lapindrome
//Lapindrome is defined as a string which when split in the middle, 
//gives two halves having the same characters and same frequency of each character.
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
const int MAX = 25;

int isLapin(string s){
	int i,j;
	int len = s.length();
	if(len==1)					//if length is 1, corner case
		return 1;

	int left[MAX] = {0};		//frequency arrays
	int right[MAX] = {0};

	for(i=0,j=len-1;i<j;i++,j--){ 	//feeding-in frequencies 
		left[s[i]-'a']++;				//in their corresponding letter indices
		right[s[j]-'a']++;
	}

	for(i=0;i<MAX;i++){			//comparing
		if(left[i]!=right[i])
			return 0;
	}

	return 1;

}

int main(){
	int t;
	string s;
	cin >> t;
	while(t--){
		cin >> s;
		if(isLapin(s)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}