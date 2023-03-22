#define ll long long
vector<ll> vec(5000006,1);
class Solution {
public:
    vector<ll> primes;
    void seive(ll n){
        vec[0]=vec[1]=0;
        for(ll i=0;i<=n;i++) {
            if(vec[i]){
                for(ll j=i*i;j<=n;j+=i){
                    vec[j]=0;
                }
            }
        }
        for(int i=0;i<n;i++) {
            if(vec[i]==1) primes.push_back(1);
        }
    }
    int countPrimes(int n) {
        seive(n);
        return primes.size();
    }
};
