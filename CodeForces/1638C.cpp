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

// Function to return the count
// of unique pairs in the array
vpi pairss;
int getPairs(int a[], int n)
{
    set<int> visited1;
 
    // un[i] stores number of unique elements
    // from un[i + 1] to un[n - 1]
    int un[n] ;
 
    // Last element will have no unique elements
    // after it
    un[n - 1] = 0;
 
    // To count unique elements after every a[i]
    int count = 0;
     // auto pos = s.find(3);
 
     // prints the set elements
     // cout << "The set elements after 3 are: ";
     // for (auto it = pos; it != s.end(); it++)
    // cout << *it << " "
    for (int i = n - 1; i > 0; i--)
    {
 
        // If current element has already been used
        // i.e. not unique
        auto pos = visited1.find(a[i]);
        if (pos != visited1.end())
            un[i - 1] = count;
        else
            un[i - 1] = ++count;
 
        // Set to true if a[i] is visited
        visited1.insert(a[i]);
    }
 
    set<int>visited2;
 
    // To know which a[i] is already visited
    int answer = 0;
    for (int i = 0; i < n - 1; i++)
    {
 
        // If visited, then the pair would
        // not be unique
        auto pos = visited2.find(a[i]);
        if (pos != visited2.end())
            continue;
 
        // Calculating total unique pairs
        // if()

        answer += un[i];
 
        // Set to true if a[i] is visited
        visited2.insert(a[i]);
    }
    return answer;
}

vector<vector<int>> lst(110);
vi parent(110);

void make_set(int v) {
    lst[v] = vector<int>(1, v);
    parent[v] = v;
}

int find_set(int v) {
    return parent[v];
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (lst[a].size() < lst[b].size())
            swap(a, b);
        while (!lst[b].empty()) {
            int v = lst[b].back();
            lst[b].pop_back();
            parent[v] = a;
            lst[a].push_back (v);
        }
    }


}

const int N = 1e5+10;
vector<vector<int>> g(N , vector<int> (0, 0));
bool visited[N] ;


void dfs(int vertex){

	visited[vertex] = true;
	for(int child: g[vertex]){
		if(visited[child]==true) continue;
		dfs(child);

	}

	return;
}

void solve(){    
        
      int n;
cin>>n;
  vi v(n+1);
  rep(i,1,n+1)
      cin>>v[i];
  
  int cntans=0;
  int maxval=-1;
  for(int i=1;i<=n;){
      maxval=max(v[i],maxval);
      for(int j=i;j<=n && j<=maxval;j++)
         maxval=max(maxval,v[j]);
      
      i=maxval+1;
      cntans++;
  }
  cout<<cntans ndl;
  
  return;



        vi vis(n+1);
        vpi vec;
        set<pair<int,int>> settt;
        rep(i,0,n){
        	if(vis[v[i]]==0){
        		vis[v[i]]=1;
        		repn(j,v[i]-1,1){
        			if(vis[j]==0) settt.ins({v[j], i});
        		}
        	}
        }
        trav(i,settt){
        	vec.pb({i.fi , i.se});
        }
        rep(i,1,n+1){
        	vec.pb({i,i});
        }
        // dbg(vec);

        int numberOfVertex,numberOfEdge;
        int v1,v2;

        // cin>>numberOfVertex>>numberOfEdge;
        numberOfVertex = n;
        numberOfEdge = vec.sz;

        rep(i,0,n+2){
        	g[i].clear();
        	visited[i] = false;
        }


        for(int i = 0 ; i < numberOfEdge ; i++){
        	// cin>>v1>>v2;
        	v1 = vec[i].fi ;
        	v2 = vec[i].se;
        	g[v1].push_back(v2);
        	g[v2].push_back(v1);
        }

        // dbg(g);
        // dfs(1);
        rep(i,0,numberOfVertex+1){
        	visited[i] = false;
        }
        rep(i,1,n+1){
        	trav(ii,g[i]) cout<<ii spcend;
        	cndl;
        }
        cndl;

        int cnt = 0;
        rep(i,1,1+numberOfVertex){

        	if(visited[i]) continue;
        	dfs(i);
        	
        	cnt++;
        }
        cout<< cnt ndl;



    return;
}
