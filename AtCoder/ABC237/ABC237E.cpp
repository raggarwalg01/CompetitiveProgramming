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

	// const int INF = 1000000000;
	// vector<vector<pair<int, int>> adj[];

	// void dijkstra(int s, vector<int> & d, vector<int> & p) {
	//     int n = adj.size();
	//     d.assign(n, INF);
	//     p.assign(n, -1);
	//     vector<bool> u(n, false);

	//     d[s] = 0;
	//     for (int i = 0; i < n; i++) {
	//         int v = -1;
	//         for (int j = 0; j < n; j++) {
	//             if (!u[j] && (v == -1 || d[j] < d[v]))
	//                 v = j;
	//         }

	//         if (d[v] == INF)
	//             break;

	//         u[v] = true;
	//         for (auto edge : adj[v]) {
	//             int to = edge.first;
	//             int len = edge.second;

	//             if (d[v] + len < d[to]) {
	//                 d[to] = d[v] + len;
	//                 p[to] = v;
	//             }
	//         }
	//     }
	// }
	// class DSU
	// {
	//     int *parent;
	//     int *rank;
	 
	// public:
	//     DSU(int n)
	//     {
	//         parent = new int[n];
	//         rank = new int[n];
	 
	//         for (int i = 0; i < n; i++)
	//         {
	//             parent[i] = -1;
	//             rank[i] = 1;
	//         }
	//     }
	 
	//     // Find function
	//     int find(int i)
	//     {
	//         if (parent[i] == -1)
	//             return i;
	 
	//         return parent[i] = find(parent[i]);
	//     }
	//     // union function
	//     void unite(int x, int y)
	//     {
	//         int s1 = find(x);
	//         int s2 = find(y);
	 
	//         if (s1 != s2)
	//         {
	//             if (rank[s1] < rank[s2])
	//             {
	//                 parent[s1] = s2;
	//                 rank[s2] += rank[s1];
	//             }
	//             else
	//             {
	//                 parent[s2] = s1;
	//                 rank[s1] += rank[s2];
	//             }
	//         }
	//     }
	// };
	 
	// class Graph
	// {
	//     vector<vector<int>> edgelist;
	//     int V;
	 
	// public:
	//     Graph(int V)
	//     {
	//         this->V = V;
	//     }
	 
	//     void addEdge(int x, int y, int w)
	//     {
	//         edgelist.push_back({w, x, y});
	//     }
	 
	//     int kruskals_mst()
	//     {
	//         // 1. Sort all edges
	//         sort(edgelist.begin(), edgelist.end());
	 
	//         // Initialize the DSU
	//         DSU s(V);
	//         int ans = 0;
	//         for (auto edge : edgelist)
	//         {
	//             int w = edge[0];
	//             int x = edge[1];
	//             int y = edge[2];
	 
	//             // take that edge in MST if it does form a cycle
	//             if (s.find(x) != s.find(y))
	//             {
	//                 s.unite(x, y);
	//                 ans += w;
	//             }
	//         }
	//         return ans;
	//     }
	// };
	   // int lmax = INT_MAX;
	    static const int ln = 1e5+9;
	    int dijkstra(int source, vector<pair<int,int>> g[ln] , int N){
		vector<int> vis(N+10,0);
		vector<int> dis(N+10,lmax);
		set<pair<int,int>> st;
		st.insert({0,source});
		dis[source] = 0;

		while(st.size() > 0){
			auto node = *st.begin();
			int curr = node.second;
			int disv = node.first;
			
			st.erase(st.begin());

			if(vis[curr]==1) continue;
			vis[curr] = 1;

			for(auto child : g[curr]){
				int child_v = child.first;
				int wt = child.second;

				int newdis = dis[curr] + wt;
				if(newdis < dis[child_v]){
					dis[child_v] = newdis;
					st.insert({dis[child_v],child_v});

				}
	        }
		}
			int ans = 0;
			for(int i = 1 ; i<=N ; i++){
				// if(dis[i]==lmax){
				// 	// return -1;
				// }
				ans= max(ans,dis[i]);
			}
			return ans;

	}
	void solve(){
		ll n,m ;
	    cin>>n>>m;
	    vector<pair<ll,ll>> graph[n+1];
	    vector<ll> dist(n+1,1e18);
	    vector<ll> par(n+1, -1);
	    vector<ll> vis(n+1,0);
	    vector<ll> v(n+1);
	    
	    rep(i,1,n+1)
	      cin>>v[i];

	    rep(i,0,m){
	            ll x,y;
	            cin>>x>>y;
	            if(v[x]==v[y]){
	                graph[x].pb({y,0});
	                graph[y].pb({x,0});

	            }
	            else if(v[x]>v[y]){
	                graph[x].pb({y,-1*((v[x]-v[y]))});
	                graph[y].pb({x,2*((v[x]-v[y]))});
	            }
	            else{
	                graph[x].pb({y,2*((v[y]-v[x]))});
	                graph[y].pb({x,-1*((v[y]-v[x]))});
	            }
	    }
	    
	    ll src = 1;
	    dist[src]=0;
	    par[src]=0;
	   // priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
	    multiset<pair<ll,ll>> pq;
	    pq.insert({0, src});
	    
	    while(!pq.empty()){
	        auto node = *pq.begin();
	        ll curr=node.se;
	        pq.erase(pq.begin());
	        // if(vis[curr])
	              // continue;

	         vis[curr]=1;
	        trav(child,graph[curr]){
	            ll nxt = child.fi;
	            ll wt = child.se;
	            
	            if(dist[curr] + wt < dist[nxt]){
	                dist[nxt] = dist[curr] + wt ;
	                pq.insert({dist[nxt], nxt});
	                par[nxt]=curr ;
	            }
	        }
	    }
	    
	    ll mini=lmax;
	    trav(x,dist)
	       mini=min(mini,x);

	    cout<<-(mini);
	}

	// void solve(){    

	//         int n,m;
	//         cin>>n>>m;
	//         vector<pair<int,int>> g[n+10];

	//         vi height(n);
	//         rep(i,0,n){
	//         	cin>>height[i];
	//         }
	//         // Graph g(n+1);

	//         rep(i,0,m){
	//         	int x,y;
	//         	cin>>x>>y;
	//         	x--;y--;
	//         	if(height[x] >= height[y]){
	//         		swap(x,y);
	//         	}

	//         	// if(height[x]==height[y]){
	//         		// g[x].addEdge({y,0});
	//         	// }else{
	// 	        	// g.addEdge(x,y,2*((height[y]-height[x])));
	// 	        	// g.addEdge(y,x,-((height[x]-height[y])));
	// 	        	g[x].pb({y,2*((height[y]-height[x]))});
	// 	        	g[y].pb({x,-((height[x]-height[y]))});
	// 	        // }
	//         }

	//         // cout << g.kruskals_mst();


		

	// 	// for(auto it : times){
	// 	// 	g[it[0]].push_back({it[1],it[2]});
	// 	// }

	// 	// dbg(g);
	// 	// return;

	// 	cout<< dijkstra(0, g,n);


	//     return;
	// }
