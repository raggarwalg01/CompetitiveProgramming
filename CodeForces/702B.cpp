	/*****     raggarwalg01     *****/
	
	#include<bits/stdc++.h>
	using namespace std;
	
	#define ll                  long long 
	#define rep(i,a,b)          for(ll i = a;i<b;i++)
	#define repn(i,a,b)         for(ll i=a;i>=b;i--)
	#define seti                set<ll>
	#define useti               unordered_set<ll>
	#define mapii               map<ll, ll>
	#define umapii              unordered_map<ll, ll>
	#define vpi                 vector <pair<ll, ll>>
	#define vi                  vector<ll>
	#define pi                  pair<ll , ll>
	#define vvi                 vector<vector<ll>>
	#define pb                  push_back 
	#define sz                  size()
	#define all(var)            var.begin(), var.end()
	#define spc                 <<" "<<
	#define spcend              <<" "
	#define imin                INT_MIN
	#define imax                INT_MAX
	#define fi                  first
	#define se                  second
	#define ndl                 <<"\n"
	#define cndl                cout<<"\n";
	
	long long int mod = 1000000007;
	
	// void SieveOfEratosthenes(bool Sieve[],ll SieveCount);
	bool isPrime(ll n);
	ll power(ll x,  ll y);
	ll gcd(ll a,ll b);
	
	/******************************************************************************************
	
	******************************************************************************************/
	
	void solve(){    
	        
	        ll n{};
	        cin>>n;
	        ll x{},ans{};
	        umapii mymap{};
	        ll arr[n]{};
	        rep(i,0,n){
	        	cin>>arr[i];
	        	rep(j,1,32){
		        	ans += mymap[(1<<j)-arr[i]];
		   //      	if(mymap[(1<<j)-arr[i]]   >=1 ){
		   //      		cout<< arr[i] spcend;
					// }
		        }
		        mymap[arr[i]]++;
	        }
		// cndl;
		cout<< ans;
	    return;
	}
	
	/******************************************************************************************
	
	******************************************************************************************/
	
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
	
	    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
	}
	
	// void SieveOfEratosthenes(bool Sieve[],ll SieveCount){
	//     
	//     memset(Sieve, true, SieveCount);
	//     for (ll p = 2; p * p <= SieveCount; p++){
	//         if (Sieve[p] == true){
	//             for (ll i = p * p; i <= SieveCount; i += p)
	//                 Sieve[i] = false;
	//         }
	//     }
	// }
	
	bool isPrime(ll n){
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
	
	ll power(ll x,  ll y){
	    if (y == 0)
	        return 1;
	    else if (y % 2 == 0)
	        return ((power(x, y / 2)%mod) * (power(x, y / 2)%mod))%mod;
	    else
	        return ((((x  %mod) * ((power(x, y / 2)%mod)))%mod * (power(x, y / 2)%mod))%mod)%mod;
	}
	
	ll gcd(ll a,ll b){
	    if(b==0)
	        return a;
	
	    return gcd(b, a % b);
	}