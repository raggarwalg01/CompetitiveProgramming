//==============================     raggarwalg01     ==============================//

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
#define present(c, x)       (c.find(x) != c.end())
#define desc                greater<int>()
#define spc                 <<" "<<
#define spcend              <<" "
#define imin                INT_MIN
#define imax                INT_MAX
#define fi                  first
#define se                  second
#define lb                  lower_bound
#define ub                  upper_bound 
#define ndl                 <<"\n"
#define cndl                cout<<"\n";

ll mod = 1000000007;

// void SieveOfEratosthenes(bool Sieve[],ll SieveCount);
bool isPrime(ll n);
ll power(ll x,  ll y);
ll gcd(ll a,ll b);
ll lcm (ll a , ll b );
ll nCr(ll n, ll r);

/******************************************************************************************

******************************************************************************************/
ll moves = 0;

ll sumofdig( ll n){
	ll sum = 0;
	while(n>0){
		sum+=n%10;
		n = n/10;
	}
	return sum ;
}

ll help (ll i , ll n , ll k){

	if( sumofdig(n) <= k){
		return moves;
	}
	if( n%10 != 0){
		moves += power(10,i)*( 10 - n%10);
		// n = n/10 + 1;
		n = n + ( 10 - n%10);
		// n = n/10;
	}

	help(i+1 , n/10, k);
	return moves;
}

void solve(){    
        
        ll n,k;
        cin>>n>>k;
        moves = 0;
        ll ans = help(0 ,n , k);
        cout<< ans ndl;

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
     cin>>testcase;
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
        return ((power(x, y / 2)) * (power(x, y / 2)));
    else
        return ((((x  ) * ((power(x, y / 2)))) * (power(x, y / 2))));
}

ll gcd(ll a,ll b){
    if(b==0)
        return a;
    return gcd(b, a % b);
}

ll lcm (ll a , ll b ){
    return (a*b)/gcd(a,b) ;
}

ll nCr(ll n, ll r){
    ll p = 1, k = 1;
    if (n - r < r)
        r = n - r;

    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
            ll m = __gcd(p, k);
            p /= m;
            k /= m;
            n--;
            r--;
        }
    }
    else
        p = 1;

    return p ;
}