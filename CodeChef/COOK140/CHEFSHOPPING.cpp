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
#define desc                greater()

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
#define yes                 cout << "yes\n";
#define no                  cout << "No\n";
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

int lsb(int x){
    return log2(x&(-x));
}
int msb(int x){
    return log2(x);
}

int digitsum ( int n ){
    int ans =0 ;
    while(n>0){
        ans+= n%10;
        n/=10;
    }
    return ans ;
}

int mex( vi arr){
    int n = arr.size();
    umapii mp ;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    for(int i=0; i<=n+1; i++){
        if(mp[i]==0){
            return i ;
        }
    }
    return n+1;
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
void print(T &&t)  { cout << t << "\n"; }
template <typename T, typename... Args>
void print(T &&t, Args &&... args) { cout << t << " ";  print(forward<Args>(args)...); }

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
        cerr<<"//=====================================================================================================//" ndl;
    }

    cerr<<"Time Taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs     " ;
}

void presolve(){    
        
        

    return;
}
bool leftsort(vi a , vi b){
	if(a[0]==b[0]){
		return a[1]<b[1];
	}
	return a[0]<b[0];
}
bool rightsort(vi a , vi b){
	if(a[1]==b[1]){
		return a[0]<b[0];
	}
	return a[1]<b[1];
}
bool cmp1(vi a , vi b){
    if(a[0]==b[0]){
        return a[1]<b[1];
    }
    return a[0]<b[0];
}
bool cmp2(vi a , vi b){
    if(a[0]==b[0]){
        return a[1]>b[1];
    }
    return a[0]<b[0];
}

void solve(){    
        
        int n;
        cin>>n;

        vector<vector<int>> v(n,vi(3));
        trav(i,v) cin>>i[0];
        trav(i,v) cin>>i[1];
//         int ct = 0;
//         trav(i,v) i[2] = ct++;
//         vvi vn = v;
        vvi vvv = v;

//         //dbg(v)
//         //dbg(vn);

//         mapii used1,used2,used3,used4;
//         rep(i,0,n){
//             used1[i]= -1;
//             used2[i]= -1;
//             used3[i]= -1;
//             used4[i]= -1;
//         }

        
//         seti st;
//         rep(i,0,n){
//             st.insert(i);
//         }
//         int ans1 = 0;
//         sort(all(v),leftsort);
//         rep(i,0,n){
//             if(st.sz ==1) break;
//             if(used1[v[i][2]]==-1){
//                 int k = 1;
//                 while(v[i][2] - k >=0 and used1[v[i][2]-k] == 1){
//                     // used1[v[i][2]-1] = 1;
//                     // ans1+=v[i][0];
//                     k--;
//                 }
//                 if(v[i][2] - k < 0) continue;
//                 used1[v[i][2]-k] = 1;
//                 ans1+=v[i][0];
//                 st.erase(v[i][2]-k);
//             }
            
//         }
//         sort(all(v),rightsort);
//         rep(i,0,n){
//             if(st.sz==1) break;
//             if(used1[v[i][2]]==-1){
//                 int k = 0;
//                 if(v[i][2]+ k <n and used1[v[i][2]+k] ==1){
//                     // used1[v[i][2]+1] = 1;
//                     // ans1+=v[i][1];
//                     k++;
//                 }
//                 if(v[i][2]+ k >= n) continue;
//                 used1[v[i][2]+k] = 1;
//                 ans1+=v[i][1];
//                 st.erase(v[i][2]+k);
//             }
//         }
//         //// dbg(ans1);
        

//         int ans2 = 0;
//         v = vn;
//         rep(i,0,n){
//             st.insert(i);
//         }
//         sort(all(v),rightsort);
//         rep(i,0,n){
//             if(st.sz==1) break;
//             if(used2[v[i][2]]==-1){
//                 int k = 0;
//                 if(v[i][2]+ k <n and used2[v[i][2]+k] ==1){
//                     // used2[v[i][2]+1] = 1;
//                     // ans2+=v[i][1];
//                     k++;
//                 }
//                 if(v[i][2]+ k >= n) continue;

//                 used2[v[i][2]+k] = 1;
//                 ans2+=v[i][1];
//                 st.erase(v[i][2]+k);
//             }
//         }
//         sort(all(v),leftsort);
//         rep(i,0,n){
//             if(st.sz ==1) break;
//             if(used2[v[i][2]]==-1){
//                 int k = 1;
//                 while(v[i][2] - k >=0 and used2[v[i][2]-k] == 1){
//                     // used2[v[i][2]-1] = 1;
//                     // ans2+=v[i][0];
//                     k--;
//                 }
//                 if(v[i][2] - k < 0) continue;
//                 used2[v[i][2]-k] = 1;
//                 ans2+=v[i][0];
//                 st.erase(v[i][2]-k);
//             }
            
//         }
//         //// dbg(ans2);



//         int ans3 = 0;
//         v = vn;
//         rep(i,0,n){
//             st.insert(i);
//         }

//         vector<vector<int>> vnew(n+n,vi(3));
//         //0 val
//         //1 side
//         //2 index

//         rep(i,0,n){
//             vnew[i][0] = v[i][0];
//             vnew[i][1] = 1;
//             vnew[i][2] = i;
//         }
//         rep(i,0,n){
//             vnew[i+n][0] = v[i][1];
//             vnew[i+n][1] = 2;
//             vnew[i+n][2] = i;
//         }

//         sort(all(vnew),cmp1);
//         vvi vttt = vnew;
//         sort(all(vttt),cmp2);
//         //// dbg(vnew);

//         trav(i,vnew){
//             int val = i[0];
//             int side = i[1];
//             int idx = i[2];
//             if(st.sz==1) break;
//             if(used3[idx]==-1){
//                 if(side == 1){
//                     int k = 1;
//                     while(idx - k >=0 and used3[idx-k] == 1){
//                         // used3[idx-1] = 1;
//                         // ans2+=val;
//                         k--;
//                     }
//                     if(idx - k < 0) continue;
//                     used3[idx-k] = 1;
//                     ans3+=val;
//                     st.erase(idx-k);        
//                 }else{
//                     int k = 1;
//                     if(idx+ k <n and used3[idx+k] ==1){
//                         // used3[idx+1] = 1;
//                         // ans3+=val;
//                         k++;
//                     }
//                     if(idx+ k >= n) continue;
//                     used3[idx+k] = 1;
//                     ans3+=val;
//                     st.erase(idx+k);
//                 }
//                 dbg(val,side,idx);
//             }
//         }

//         //dbg(used1); dbg(used2);
//         dbg(vnew);
//         dbg(ans3);
//         dbg(used3);

// int ans4 = 0;
//         v = vn;
//         rep(i,0,n){
//             st.insert(i);
//         }



//         trav(i,vttt){
//             int val = i[0];
//             int side = i[1];
//             int idx = i[2];
//             if(st.sz==1) break;
//             if(used4[idx]==-1){
//                 if(side == 1){
//                     int k = 1;
//                     while(idx - k >=0 and used4[idx-k] == 1){
//                         // used4[idx-1] = 1;
//                         // ans2+=val;
//                         k--;
//                     }
//                     if(idx - k < 0) continue;
//                     used4[idx-k] = 1;
//                     ans4+=val;
//                     st.erase(idx-k);        
//                 }else{
//                     int k = 1;
//                     if(idx+ k <n and used4[idx+k] ==1){
//                         // used4[idx+1] = 1;
//                         // ans4+=val;
//                         k++;
//                     }
//                     if(idx+ k >= n) continue;
//                     used4[idx+k] = 1;
//                     ans4+=val;
//                     st.erase(idx+k);
//                 }
//                 dbg(val,side,idx);
//             }
//         }     
    
//     if (n == 1) {
//     cout << 0 ndl;
//     return;
//     }
  
  int x = 0;
  rep(i,1,n){
    x += min(vvv[i][0], vvv[i - 1][1]);
  }
  cout << x ndl;
  return;  


// cout<<ans4 spcend;


        // cout<< min(ans1,min(ans2,min(ans3,ans4))) ndl;
        
    return;
}
