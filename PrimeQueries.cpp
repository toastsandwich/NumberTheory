//problem:PRIME QUERIES

//You are given a,b find prime numbers between them including a,b


#include<bits/stdc++.h>
#define int long long
#define N 100000

using namespace std;  
 /*
 Approach :
 constraint is 10^6 make a vector define all elements as prime .
 Apply Sieve to the vector
 Run the querry
 */
void primeSieve(vector<int> &vec) {
	vec[0]=vec[1]=0;
	for(int i=2;i<=N;i++) {
		if(vec[i]) {
			for(int j= i*i;j<=N;j=j+i){
				vec[j]=0;
			}
		}
	}
}

signed main() {
	vector<int> vec(N,1);
	primeSieve(vec);
	int t;
	cin>>t;
	while(t--) {
		int a,b;
		cin>>a>>b;
		// cout<<"Hello\n";
		for(int i=a;i<b;i++) {
			if(vec[i]){
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
