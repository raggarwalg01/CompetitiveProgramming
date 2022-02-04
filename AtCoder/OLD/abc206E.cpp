		/*****     raggarwalg01     *****/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
#define pb(x)   push_back(x);
bool isPrime(int n);
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}
int solve(){    
        
        ll l{},r{};
        cin>>l>>r;
        ll count{};
        for (ll i = l; i <=r; ++i)
        {
        	for (ll j = i; j <=r; ++j){
        	       if(gcd(i,j)!=i && gcd(i,j)!=j && gcd(i,j)!=1){
        			// if((isPrime(i)==true || isPrime(j)==true) || max(i,j)%min(i,j)!=0){
        	       	// }else count++;

        	       	count++;}
            }
        }
        cout<<count;

    return 0;
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll testcase = 1;
    // cin>>testcase;
    while(testcase--)
        solve();
}
bool isPrime(int n){
    if(n==1)
        return false;
    if(n==2 || n==3)
        return true;
    if(n%2==0 || n%3==0)
        return false;
    for(int i=5; i*i<=n; i=i+6){
        if(n % i == 0 || n % (i + 2) == 0)
            return false; 
    }
    return true;
}