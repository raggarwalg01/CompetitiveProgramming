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

void solve(){    
        
        ll n,m;
        cin>>n>>m;
        unordered_map< ll , unordered_set<ll>> mp;
        unordered_map< ll ,unordered_set<ll>> abcd;

        rep(i,0,m){
        	ll a , b;
        	cin>>a>>b;
        	if(a>b){swap(a,b);}
        	mp[a].insert(b);
        }

        for(auto it : mp){
        	// cout<< it.fi spcend;
        	for( auto i : it.se){
        		// cout<< i spcend;
        		abcd[it.fi].insert(i);
        	}
        	// cout ndl;
        }
        // cout ndl;

        vvi qry ;
        ll qc;
        cin>>qc;

        // rep(i,0,qc){
        	
        // 	vi temp;
        	
        // 	if(a==3){
        // 		temp.pb(3);
        // 		qry.pb(temp);
        // 	}else{
        		
        // 		temp.pb(a);
        // 		temp.pb(x);
        // 		temp.pb(y);
        // 		qry.pb(temp);
        // 	}
        // }
        // cout<<abcd.sz;
        // return;
vpi rmv;
vpi add;
ll aprv= 1;
        rep(i,0,qc){
            ll a;
            cin>>a;

        	if(a==3){

        		cout<< n - abcd.sz ndl;
        		if(aprv!=3){
                    for(auto it : add){
                        abcd[it.fi].insert(it.se);
                    }

                    for( auto it: rmv){
                        abcd[it.fi].erase(it.se);
                        if(abcd[it.fi].empty()){
                            abcd.erase(it.fi);
                        }
                    }
                rmv.clear();
                add.clear();
        		}
                
        		
        	}else if( a==1){
                ll x , y;
                cin>>x>>y;
                
                if( x>y)
                    swap(x,y);

                add.pb({x,y});

        		abcd[x].insert(y);
        	
            }else if(a==2){
        		ll x , y;
                cin>>x>>y;
                
                if( x>y)
                    swap(x,y);


                rmv.pb({x,y});

                abcd[x].erase(y);
        		
                if(abcd[x].empty()){
        			abcd.erase(x);
        			
        		}
        	}
            aprv= a;
        }
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