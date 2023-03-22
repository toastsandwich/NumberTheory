#include<bits/stdc++.h>
#define int long long
using namespace std;
#define N 10000
void sievePrime(vector<int> &sieve) {
	//declare 0 and 1 as not prime
	sieve[0]=sieve[1]=0;
	//start from 2 and declare ith number absolute multiples as not primes
	for(int i=2;i<=N;i++) {
		if(sieve[i]) {
			for(int j = i*i;j<=N;j+=i) {
				sieve[j]=0;
			}
		}
	}
}
signed main(){
	int n;
	cin>>n;
	vector<int> sieve(N,1);
	sievePrime(sieve);
	int i=0;
	for(int i = 0;i<n;i++) {
		if(sieve[i]) {
			cout<<i<<" ";
		}
	}
	cout<<endl;
	return 0;
}

//input : 10
//output : 2 3 5 7
