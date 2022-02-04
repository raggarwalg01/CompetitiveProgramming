		/*****     raggarwalg01     *****/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
#define pb(x)   push_back(x);
#define rep(i,a,b) for(ll i = a;i<b;i++)
#define repn(i,a,b) for(ll i=a;i>=b;i--)

void rvereseArray(ll arr[], ll start, ll end);
bool isPrime(ll n);
ll power(ll x,  ll y);

long long int mod = 1000000007;

ll arr[1000000000-1]{};
int solve(){    
        ll n{},k{};
        cin>>n>>k;
        set<ll> s1{};
        
        for (int i = 0; i < n; ++i){
        	ll x{};
        	cin>>x;
        	s1.insert(x);
        	arr[x]=1;
        }
        ll i=0;
        	for(;i<=n;i++){
        		// auto pos = s1.find(i);
        		if(arr[i]==0 && k>0){
        			s1.insert((i+1+*(--s1.end()))/2);
        			arr[(i+1+*(--s1.end()))/2]=1;
        			i=-1;
        			k--;
        		}
        	}
        cout<<s1.size() + k<<endl;
        for (ll i = 0; i <=*(--s1.end()); ++i){
        	arr[i]=0;
        }
        

    return 0;
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll testcase = 1;
     cin>>testcase;
    while(testcase--)
        solve();

    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
}
bool isPrime(int n){
    if(n==1)
        return false;
    if(n==2 || n==3)
        return true;
    if(n%2==0 || n%3==0)
        return false;
    for(ll i=5; i*i<=n; i=i+6){
        if(n % i == 0 || n % (i + 2) == 0)
            return false; 
    }
    return true;
}

void rvereseArray(ll arr[], ll start, ll end){
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

ll power(ll x,  ll y){
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return ((power(x, y / 2)%mod) * (power(x, y / 2)%mod))%mod;
    else
        return ((((x  %mod) * ((power(x, y / 2)%mod)))%mod * (power(x, y / 2)%mod))%mod)%mod;
}