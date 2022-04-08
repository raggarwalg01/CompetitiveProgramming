//==============================     raggarwalg01     ==============================//

#include<bits/stdc++.h>
using namespace std;

#define ll                 long long
#define ll                  long long
#define ull                 unsigned long long 
#define ld                  long double

#define rep(i,a,b)          for(ll i = a; i <  b ; i++)
#define Rep(i,b)            for(ll i = 0; i <  b ; i++)
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
#define desc                greater()

#define imin                ll_MIN
#define imax                ll_MAX
#define lmin                LLONG_MIN
#define lmax                LLONG_MAX

#define fi                  first
#define se                  second
#define lb                  lower_bound
#define ub                  upper_bound 

#define spc                 <<" "<<
#define spcend              <<" "
#define ndl                 <<"\n"
#define cndl                cout<<"\n";

#define YES                 cout << "YES\n";
#define NO                  cout << "NO\n";
#define Yes                 cout << "Yes\n";
#define No                  cout << "No\n";
#define yes                 cout << "yes\n";
#define no                  cout << "No\n";
#define minus1              cout << "-1\n";

#define precision(n)        cout<< fixed << setprecision(n);

//=====================================================================================================//

//ll Mod = 1000000007;
ll M = 1e9+7;
ll Mod = 1e9+7;

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

ll powermod(ll x,  ll y,ll Mod){
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return ((power(x, y / 2)%Mod) * (power(x, y / 2)%Mod))%Mod;
    else
        return ((((x  %Mod) * ((power(x, y / 2)%Mod)))%Mod * (power(x, y / 2)%Mod))%Mod)%Mod;
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
            ll m = gcd(p, k);
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

int ceil_div(int a, int b) {
    return a / b + ((a ^ b) > 0 && a % b != 0);
}

ll lsb(ll x){
    return log2(x&(-x));
}
ll msb(ll x){
    return log2(x);
}

ll digitsum ( ll n ){
    ll ans =0 ;
    while(n>0){
        ans+= n%10;
        n/=10;
    }
    return ans ;
}

ll mex( vi arr){
    ll n = arr.size();
    umapii mp ;
    for(ll i=0; i<n; i++){
        mp[arr[i]]++;
    }
    for(ll i=0; i<=n+1; i++){
        if(mp[i]==0){
            return i ;
        }
    }
    return n+1;
}

ll minv(ll a){ return power(a , M-2 ); }
ll mod(ll n) { return (n % M + M) % M; }
ll modM(ll n, ll m) { return ((n % M * m % M) + M) % M; }
ll modA(ll n, ll m) { return ((n % M + m % M) + M) % M; }
ll modS(ll n, ll m) { return ((n % M - m % M) + M) % M; }
ll modD(ll n, ll m) { return ((n % M * minv(m) % M) + M) % M; }

//=====================================================================================================//

void __prll(ll x) {cerr << x;}
void __prll(long x) {cerr << x;}
// void __prll(long long x) {cerr << x;}
void __prll(unsigned x) {cerr << x;}
void __prll(unsigned long x) {cerr << x;}
void __prll(unsigned long long x) {cerr << x;}
void __prll(float x) {cerr << x;}
void __prll(double x) {cerr << x;}
void __prll(long double x) {cerr << x;}
void __prll(char x) {cerr << '\'' << x << '\'';}
void __prll(const char *x) {cerr << '\"' << x << '\"';}
void __prll(const string &x) {cerr << '\"' << x << '\"';}
void __prll(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __prll(const pair<T, V> &x) {cerr << '{'; __prll(x.first); cerr << ", "; __prll(x.second); cerr << '}';}
template<typename T>
void __prll(const T &x) {ll f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? ", " : ""), __prll(i); cerr << "}";}
void _prll() {cerr << "]\n";}
template <typename T, typename... V>
void _prll(T t, V... v) {__prll(t); if (sizeof...(v)) cerr << ", "; _prll(v...);}

#ifndef ONLINE_JUDGE
#define dbg(x...) cerr <<__func__<<" : "<<__LINE__<<" [" << #x << "] = ["; _prll(x) ; cerr<< endl;
#else
#define dbg(x...)
#endif

//=====================================================================================================//

// Operator overloads 
template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){ for (auto &it : v)  cin >> it;  return istream; }
 
template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }
 
// Utility functions
template <typename T>
void prll(T &&t)  { cout << t << "\n"; }
template <typename T, typename... Args>
void prll(T &&t, Args &&... args) { cout << t << " ";  prll(forward<Args>(args)...); }

//=====================================================================================================//

void solve();
void presolve();
int  main(){
    #ifndef ONLINE_JUDGE
        freopen("D:\\Programming\\CompetitiveProgramming\\input.txt","r",stdin);
        freopen("D:\\Programming\\CompetitiveProgramming\\output.txt","w",stdout);
        //freopen("D:\\Programming\\CompetitiveProgramming\\error.txt","w",stderr);


    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    presolve();


    ll testcase = 1;
    // cin>>testcase;
    
    ll i = 1;
    while(testcase--){
        //cout << "Case #" << i++ << ": ";
        solve();
        cerr<<"//=====================================================================================================//" ndl;
    }

    cerr<<"Time Taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs     " ;
}

void presolve(){    
        
        

    return;
}

const unsigned ll N = (1ll<<31) + 56;
vector<bool> vecc(N);
ll mmmm = power(2,32);

void solve(){    
        // cout<<log(1e9) ndl;
        ll q,s,a,b;
        cin>>q>>s>>a>>b;
        ll pv = 0;
        // vecc[b] = 1;
        ll sum = 0;
        rep(i,0,q){
            if(s&1==1){
                if(vecc[s/2]==0){
                    sum+= s/2;
                    vecc[s/2] = 1;
                }
            }else{
                if(vecc[s/2]==1){
                    sum-= s/2;
                    vecc[s/2] = 0;
                }
            }
            pv = s;
            s = (a*pv + b)%(mmmm);
        }
        cout<< sum ndl;



        // cout<<vecc;
        // dbg(vecc);


    return;
}
