//==============================     raggarwalg01     ==============================//

#include<bits/stdc++.h>
using namespace std;

#define int                 long long
#define ll                  long long
#define ull                 unsigned long long 
#define ld                  long double

#define rep(i,a,b)          for(int i = a; i <  b ; i++)
#define Rep(i,b)            for(int i = 0; i <  b ; i++)
#define repn(i,a,b)         for(int i = a; i >= b ; i--)
#define trav(a,x)           for (auto& a : x)

#define seti                set<int>
#define useti               unordered_set<int>
#define mapii               map<int, int>
#define umapii              unordered_map<int, int>
#define vpi                 vector <pair<int, int>>
#define vi                  vector<int>
#define pi                  pair<int , int>
#define vvi                 vector<vector<int>>

#define pb                  push_back
#define ins                 insert
#define sz                  size()
#define all(var)            var.begin(), var.end()
#define present(c, x)       (c.find(x) != c.end())
#define desc                greater<int>()

#define imin                INT_MIN
#define imax                INT_MAX
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
#define minus1              cout << "-1\n";

#define precision(n)        cout<< fixed << setprecision(n);

//=====================================================================================================//

//int Mod = 1000000007;
int M = 1e9+7;
int Mod = 1e9+7;

// void SieveOfEratosthenes(bool Sieve[],int SieveCount){
//     
//     memset(Sieve, true, SieveCount);
//     for (int p = 2; p * p <= SieveCount; p++){
//         if (Sieve[p] == true){
//             for (int i = p * p; i <= SieveCount; i += p)
//                 Sieve[i] = false;
//         }
//     }
// }

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

int power(int x,  int y){
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return ((power(x, y / 2)) * (power(x, y / 2)));
    else
        return ((((x  ) * ((power(x, y / 2)))) * (power(x, y / 2))));
}

int powermod(int x,  int y,int Mod){
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return ((power(x, y / 2)%Mod) * (power(x, y / 2)%Mod))%Mod;
    else
        return ((((x  %Mod) * ((power(x, y / 2)%Mod)))%Mod * (power(x, y / 2)%Mod))%Mod)%Mod;
}

int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b, a % b);
}

int lcm (int a , int b ){
    return (a*b)/gcd(a,b);
}

int nCr(int n, int r){
    int p = 1, k = 1;
    if (n - r < r)
        r = n - r;

    if (r != 0){
        while (r){
            p *= n;
            k *= r;
            int m = gcd(p, k);
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

int64_t ceil_div(int64_t a, int64_t b) {
    return a / b + ((a ^ b) > 0 && a % b != 0);
}

int minv(int a){ return power(a , M-2 ); }
int mod(int n) { return (n % M + M) % M; }
int modM(int n, int m) { return ((n % M * m % M) + M) % M; }
int modA(int n, int m) { return ((n % M + m % M) + M) % M; }
int modS(int n, int m) { return ((n % M - m % M) + M) % M; }
int modD(int n, int m) { return ((n % M * minv(m) % M) + M) % M; }

//=====================================================================================================//

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
// void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ", "; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? ", " : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

#ifndef ONLINE_JUDGE
#define dbg(x...) cerr <<__func__<<" : "<<__LINE__<<" [" << #x << "] = ["; _print(x) ; cerr<< endl;
#else
#define dbg(x...)
#endif

//=====================================================================================================//

void solve();
void presolve();

int32_t  main(){
    #ifndef ONLINE_JUDGE
        freopen("D:\\Programming\\CompetitiveProgramming\\input.txt","r",stdin);
        freopen("D:\\Programming\\CompetitiveProgramming\\output.txt","w",stdout);
        //freopen("D:\\Programming\\CompetitiveProgramming\\error.txt","w",stderr);


    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    presolve();


    int testcase = 1;
    cin>>testcase;
    
    int i = 1;
    while(testcase--){
        //cout << "Case #" << i++ << ": ";
        solve();
    }

    cerr<<"Time Taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs     " ;
}

void presolve(){    
        
        

    return;
}
void solve(){
    ll n;
   cin>>n;
   unordered_map<ll,ll> mp;
   rep(i,1,n+1)
       mp[i]++;
 
 
   vector<pair<ll,ll>> res;
   if(n==3){
    cout<<2<<endl;
      cout<<3<<" "<<2<<endl;
       cout<<3<<" "<<2<<endl;
       return;
 
   }
   if(n==4){
      cout<<3<<endl;
      cout<<3<<" "<<4<<endl;
      cout<<4<<" "<<2<<endl;
      cout<<4<<" "<<2<<endl;
      return;
   }
    ll sq=sqrt(n);
    if(sq*sq<n)
         sq++;
 
    rep(i,3,n){
        if(i==sq||i==4)
               continue;
        res.pb({i,n});
    }
    res.pb({n,sq});
    res.pb({n,sq});
    if(sq!=2){
        ll tmp=sq;
        if(tmp!=4){
            while(sq!=1){
                res.pb({tmp,4});
                sq=(sq+3)/4.0;  // ceil
            }
        }
        res.pb({4,2});
        res.pb({4,2});
    }
 
 
 
   cout<<res.size()<<endl;
   trav(x,res)
      cout<<x.fi<<" "<<x.se<<endl;
}
/*
void solve(){    
        
        int n,k ;
        cin>>k;
        vi v(k);
        rep(i,0,k){
        	v[i] = i+1;
        }

        vpi ans ;
        if(k ==3){
         cout<< 2 << "\n" << 3 spc 2 <<"\n" << 3 spc 2 ndl;
         return;
        }
         if(k==4){
      cout<<3<<endl;
      cout<<3<<" "<<4<<endl;
      cout<<4<<" "<<2<<endl;
      cout<<4<<" "<<2<<endl;
      return;
   }

        n = 3;
        int root = sqrt(k) -1 ;
        rep(i,2,k-1){
        	if(i==root || i == 3 ) continue;
        	ans.pb( {i+1 , k});
        }

        dbg(root);
        trav(i,ans){
        	v[i.fi-1] = ceil_div(v[i.fi-1],v[i.se-1]);
        }
        
        dbg(v);
        

        v[k-1] = ceil_div(v[k-1], v[root]);
        ans.pb({k,root+1});
        // v[]
        
        while(v[k-1]!=1){
        	ans.pb({k,4});
        	v[k-1] = ceil_div(v[k-1],v[3]);
        }

        while(v[root]!=1 and root !=1){
        	ans.pb({root+1,4});
        	v[root] = ceil_div(v[root],v[3]);
        }

        // ans.pb({n,(n+1)/2});
        // ans.pb({(n+1)/2 , n});
        // ans.pb({n,(n+1)/2});

        
        dbg(v);

        cout<< ans.sz ndl;
        trav(i,ans){
        	cout<< i.fi spc i.se ndl;
        }

        cerr<< endl;



    return;
}
*/