//==============================     raggarwalg01     ==============================//

#include<bits/stdc++.h>
using namespace std;

#define ll                  long long 
#define ld                  long double

#define rep(i,a,b)          for(ll i = a; i <  b ; i++)
#define repn(i,a,b)         for(ll i = a; i >= b ; i--)
#define trav(a,x)           for (auto& a : x)

#define seti                set<ll>
#define useti               unordered_set<ll>
#define mapii               map<ll, ll>
#define umapii              unordered_map<ll, ll>
#define vpi                 vector <pair<ll, ll>>
#define vi                  vector<ll>
#define pi                  pair<ll , ll>
#define vvi                 vector<vector<ll>>

#define pb                  push_back
#define ins                 insert
#define sz                  size()
#define all(var)            var.begin(), var.end()
#define present(c, x)       (c.find(x) != c.end())
#define desc                greater<int>()

#define imin                INT_MIN
#define imax                INT_MAX
#define fi                  first
#define se                  second
#define lb                  lower_bound
#define ub                  upper_bound 

#define spc                 <<" "<<
#define spcend              <<" "
#define ndl                 <<"\n"
#define cndl                cout<<"\n";

#define precision(n)        cout<< fixed << setprecision(n);

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
        
        ll n; 
        cin>> n;
        string s ;
        cin>> s;
        char ans[n][n];
        seti canloose;
        seti dd;
        rep(i,0,n){
        	if(s[i]=='2'){
        		canloose.insert(i);
        		dd.insert(i);
        	}
        }
        if(canloose.sz ==2 || canloose.sz ==1 ){
        	cout<<"NO\n";
        	return;
        }
        rep(i,0,n){
        	rep(j,0,n){
        		// if(present(canloose))
        		ans[i][j]='=';
        		if(i==j)
        			ans[i][j]='X';
        	}
        }

        char done[n][n];
        rep(i,0,n){
        	rep(j,0,n){
        		done[i][j] = 'n';
        	}
        }

        rep(i,0,n){
        	rep(j,0,n){
        		if(i==j){
        			continue;
        		}
        		if(!present(canloose,i) || !present(canloose,j)){
        			continue;
        		}
        		if(done[i][j]=='d' || done[j][i]=='d'){
        			continue;
        		}
        	if(present(dd,i)){
        		ans[i][j]='+';
        		ans[j][i]='-';
        		dd.erase(i);
        	}else{
        		ans[i][j]='-';
        		ans[j][i]='+';
        		dd.erase(j);
        	}
        		done[i][j]='d';
        		done[j][i]='d';

        	}
        }

        cout<<"YES\n";

        rep(i,0,n){
        	rep(j,0,n){
        		cout<<ans[i][j];
        	}
        	cndl;
        }

    return;
}

/******************************************************************************************

******************************************************************************************/

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        //freopen("error.txt","w",stderr);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll testcase = 1;
     cin>>testcase;
    

    while(testcase--){
        solve();
    }

    cerr ndl <<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
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
    return (a*b)/gcd(a,b);
}

ll nCr(ll n, ll r){
    ll p = 1, k = 1;
    if (n - r < r)
        r = n - r;

    if (r != 0){
        while (r){
            p *= n;
            k *= r;
            ll m = __gcd(p, k);
            p /= m;
            k /= m;
            n--;
            r--;
        }
    }else{
        p = 1;
    }

    return p ;
}