//=========================     raggarwalg01     =========================//

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

/******************************************************************************************

******************************************************************************************/

void solve(){    
        
        ll r{},c{};
        cin>>r>>c;
        ll tempr = r;
        ll tempc = c;
        int arr[r][c];
        rep(i,0,tempr){
        	rep(j,0,tempc){
        		// cout<<arr[i][j];
        		arr[i][j]=0;
        	}
        }


        rep(i,0,r){
        	ll j =0;
        	if(i==0){
        		rep(j,0,c){
        			if(j%2==0){
        				arr[i][j]=1;
        			}
        		}
        	}else if(i>0 && i<r-1){
        		if(i%2==1){
        			continue;
        		}else{
        			if(arr[i-1][0]==0){
        				arr[i][0]=1;
        			}
        			if(arr[i-1][c-1]==0){
        				arr[i][c-1]=1;
        			}
        		}
        	}
        	else if(i==r-1){
        		ll j = 0;
        		if(arr[i-1][j]==1){
        			for(j=2;j<c;j+=2){
        				// if(j%2==0){
        					arr[i][j]=1;
        				// }
        			}
        		}else{
        			for(j=0;j<c;j+=2){
        				// if(j%2==0){
        					arr[i][j]=1;
        				// }
        			}
        		}

        		
        	}
        }
        if(arr[r-2][c-1]==1){
        			arr[r-1][c-1]=0;
        			arr[r-1][c-2]=0;
        }

        rep(i,0,tempr){
        	rep(j,0,tempc){
        		cout<<arr[i][j];
        	}
        	cndl;
        }
        cndl;

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