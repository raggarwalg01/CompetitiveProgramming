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
        
        int n ;
        cin>>n;
        vi a(n),b(n), diff(n);
        trav(i,a){
        	cin>>i;
        }
        trav(i,b){
        	cin>>i;
        }
        rep(i,0,n){
        	diff[i] = b[i] - a[i];
        	// if(diff[i] <0 ){
        		// minus1 ; return;
        	// }
        }

        dbg(diff);
        int cnt0 = 0;

        // trav(i,diff){
        // 	if(i==0){
        // 		if(cnt0 ==1){
        // 			minus1 ; return;
        // 		}
        // 		cnt0++;
        // 	}
        // }

        int ans1 = diff[0] , ans2 = 0;
        int val1 = 0, val2 = 0;

        rep(i,0,n){
            if (ans1 + ans2 < diff[i] ){
                ans2 += ((diff[i] ) - ans1 - ans2);
            }
            else if (ans1 + ans2 > diff[i] ){
                ans1 -= (ans1 + ans2 - (diff[i] ));
            }
            

            if (ans1 < 0 || ans2 > (diff[n - 1])){
                val1 = -1;
                val2 = 0;
                break;
            }

            val1 = max(val1, ans1);
            val2 = max(val2, ans2);
        }

        cout << val1 + val2  ndl;
        return;


        deque<int> dq1;

        rep(i,0,n){
            dq1.pb(diff[i]);
        }

        deque<int> start , end;

        while(!dq1.empty()){
            if(start.empty()){
                start.pb(dq1.front());
                dq1.pop_front();
            }else if(start.back()>=dq1.front()){
                // cout<< dq1.front() spcend;
                start.pb(dq1.front());
                dq1.pop_front();                
            }else break;
        }

        while(!dq1.empty() and dq1.front() ==0){
            dq1.pop_front();
        }
        reverse(all(dq1));

        while(!dq1.empty()){
            if(end.empty()){
                end.pb(dq1.front());
                dq1.pop_front();
            }else if(end.back()>=dq1.front()){
                // cout<< dq1.front() spcend;
                end.pb(dq1.front());
                dq1.pop_front();                
            }else break;
        }

        // int ans1 = 0;
        // int ans2 = 0;

        if(!start.empty()){
            ans1 = start.back();
        }
        if(!end.empty()){
            ans2 = end.back();
        }


        return;

        cout<< ans2+ ans1 ndl;

        // while()


        // cndl;


        dbg(dq1,start);


        return;


        int ans = diff[0];
        int mark = 0;


        rep(i,1,n){
        	if(diff[i]>diff[i-1]){
        		break;
        	}else{
        		mark = i;
        		ans = max(ans , diff[i]);
        	}
        }

        // dbg(mark);

        rep(i,0,mark+1){
        	diff[i] = 0;
        }
        // dbg(diff);

        reverse(all(diff));
        // dbg( n , diff);

        // int ans2 = diff[0];
        // cout<< ans2;
        mark = 0;

        rep(i,1,n){
        	if(diff[i]>diff[i-1]){
        		break;
        	}else{
        		mark = i;
        		ans2 = max(ans2 , diff[i]);
        		// cout<< ans2 spcend;
        	}
        }
        // cout<< mark spcend;
        // rep(i,0,mark+1){
        // 	diff[i] = 110;
        // }

        // dbg(diff);

        // cerr<< endl;
        // dbg(ans , ans2);

        cout<< ans + ans2 ndl;

        // YES;


    return;
}
