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
    // cin>>testcase;
    
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
    vector<ll> none,al,bb;
    ll cnt=0;
    ll inf=0;
    rep(i,0,n){
        string s;
        ll x;
        cin>>s>>x;
        if(s=="11"){
            inf += x;
            cnt++;
            continue;
        }
        if(s=="00")
            none.pb(x);
        
        else if(s=="10"){
            al.pb(x);
        }
        else
           bb.pb(x);
    }
    sort(all(none),desc);
    sort(all(al),desc);
    sort(all(bb),desc);
 
    ll cmn_lg = min(al.size(),bb.size());
 
    rep(i,0,cmn_lg)
        inf += al[i]+bb[i]; 
 
    ll ttl_lg = cnt+2*cmn_lg;
    ll idx1=0,idx2=cmn_lg,idx3=cmn_lg;
    ll votes_al=cmn_lg+cnt;
    ll votes_bb=cmn_lg+cnt;
 
    rep(i,0,cnt){
        ll ctr1 = (idx2>=al.size() && votes_al>=(ttl_lg+1)/2)?0:al[idx2];
        ll ctr2 = (idx3>=bb.size() && votes_bb>=(ttl_lg+1)/2)?0:bb[idx3];
        ll ctr3 = (idx1>=none.size())?0:none[idx1];
        ll maxy = max(ctr1,max(ctr2,ctr3));
        if(maxy==ctr1){
            inf += ctr1;
            idx2++;
            votes_al++;
        }
        else if(maxy==ctr2){
            inf +=ctr2;
            idx3++;
            votes_al++;
        }
        else{
            inf += ctr3;
            idx1++;
        }
    }
    cout<<inf;
    
        // int n;
        // cin>>n;
        // unordered_map<string , deque<int>> hash;
        // rep(i,0,n){
        // 	string s; int v;
        // 	cin>>s>>v;
        // 	hash[s].pb(v);
        // }
        // int ans = 0;
        // string a = "00";
        // string b = "01";
        // string c = "10";
        // string d = "11";
        // sort(all(hash[a]),desc);
        // sort(all(hash[b]),desc);
        // sort(all(hash[c]),desc);
        // sort(all(hash[d]),desc);
        // int cntm = min(hash[b].sz , hash[c].sz);


        // // dbg(ans);
        // int cnt = 0;
        // while(!hash[d].empty()){
        // 	ans+= hash[d].front();
        // 	hash[d].pop_front();
        // 	cnt++;

        // }
        // int cnta = 0;
        // int cntb = 0;
        // while(cntm>0){
        // 	cntm--;
        // 	ans+= hash[b].front() + hash[c].front();
        // 	hash[b].pop_front(); hash[c].pop_front();
        // 	cnta++;
        // 	cntb++;
        // }

        // // while()


        // // while(hash[a].sz >0 and hash[b].sz>0 and hash[c].sz>0 and hash[d].sz>0){
        // // 	ans+= hash[a].front() + hash[b].front() + hash[c].front() + hash[d].front();
        // // 	hash[a].pop_front(); hash[b].pop_front(); hash[c].pop_front(); hash[d].pop_front();
        // // }
        // cout<< ans ;

    return;
}
