#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n,q,k,number,i,j;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin>>n>>q;
    int **arr = new int*[n];

    for (int b=0;b<n;b++){
        cin>>k;

        arr[b] = new int[k];
        for (int a=0;a<k;a++){
            cin>>number;
            arr[b][a]=number;
        }
    }

    for (int c=0;c<q;c++){
        cin>>i>>j;
        cout<<arr[i][j]<<endl;
    }

    return 0;
}