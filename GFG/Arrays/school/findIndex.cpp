#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution{
    public:
    vector<int> findIndex(int a[], int n, int key){
        int start=-1 ,end=-1,i=0;
        vector<int> result;
        while(a[i]!=key){
            i++;
        }
        start = i;
        for(int j=i;j<n;j++){
            if(a[j]==key){
                end = j;
            }
        }
        result.push_back(start);
        result.push_back(end);
        return  result;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res = ob.findIndex(arr,n,key);
        for(int i=0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}