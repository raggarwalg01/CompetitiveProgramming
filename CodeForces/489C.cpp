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
void mingen( string &sm, ll m , ll s ){

        ll i = 0;
        while(s>0){
        	sm[i] = char( min(s,9ll) + '0' );
        	s = s - min(9ll,s);
        	i++;
        }

        sort(all(sm));
        if(sm[0]=='0'){
        	rep(i,0,sm.length()){
        		if(sm[i]!='0'){
        			// swap(sm[0],sm[i]);
        			sm[0]= '1';
        			sm[i] = sm[i] - 1;
        			break;
        		}
        	}
        }
}

void maxgen( string &smx, ll m , ll s){
	ll i =0 ;
	while(s>=9){
		smx[i] = char( min(9ll , s) + '0');
		i++;
		s = s - min(9ll, s);
	}
	smx[i] = s + '0';
	i++;
	while(i<m){
		smx[i]='0';
		i++;
	}
	sort(all(smx));
	reverse(all(smx));
}

void solve(){    
        
        ll m,s;
        cin>>m>>s;
        
        if(s> m*9 || (m>1 && s<1 ) ){
        	cout<< "-1" spcend "-1" ndl;
        	return ;
        }

        string sm(m,'0');
        mingen(sm, m, s);
        cout<<sm spcend;

        string smx(m,'0');
        maxgen(smx,m,s);
        cout<<smx;



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