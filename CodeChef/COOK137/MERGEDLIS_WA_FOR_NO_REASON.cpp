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

// int lis(vi arr, int n)
// {
//     vector<int> b;
//     set<int> s;
    
//     // setting iterator for set
//     set<int>::iterator it;
    
//     // storing unique elements
//     for (int i = 0; i < n; i++) {
//         s.insert(arr[i]);
//     }
    
//     // creating sorted vector
//     for (it = s.begin(); it != s.end(); it++) {
//         b.push_back(*it);
//     }
//     int m = b.size(), i, j;
//     int dp[m + 1][n + 1];
    
//     // storing -1 in dp multidimentional array
//     for (i = 0; i < m + 1; i++) {
//         for (j = 0; j < n + 1; j++) {
//             dp[i][j] = -1;
//         }
//     }
//     // Finding Longest common Subsequence of the two
//     // arrays
//     for (i = 0; i < m + 1; i++) {
//         for (j = 0; j < n + 1; j++) {
//             if (i == 0 || j == 0) {
//                 dp[i][j] = 0;
//             }
//             else if (arr[i - 1] == b[j - 1]) {
//                 dp[i][j] = 1 + dp[i - 1][j - 1];
//             }
//             else {
//                 dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//             }
//         }
//     }
//     return dp[m][n];
// }

// // int lis(vector<int>& v, int n){
// //     int lis[n];
// //     lis[0] = 1;
// //     for (int i = 1; i < n; i++) {
// //         lis[i] = 1;
// //         for (int j = 0; j < i; j++)
// //             if (v[i] >= v[j] && lis[i] < lis[j] + 1)
// //                 lis[i] = lis[j] + 1;
// //     }
// //     return *max_element(lis, lis + n);
// // }

// int LongestIncreasingSubsequenceLength(std::vector<int>& v)
// {
//     if (v.size() == 0) // boundary case
//         return 0;
 
//     std::vector<int> tail(v.size(), 0);
//     int length = 1; // always points empty slot in tail
 
//     tail[0] = v[0];
 
//     for (int i = 1; i < v.size(); i++) {
 
//         // Do binary search for the element in
//         // the range from begin to begin + length
//         auto b = tail.begin(), e = tail.begin() + length;
//         auto it = lower_bound(b, e, v[i]);
 
//         // If not present change the tail element to v[i]
//         if (it == tail.begin() + length)
//             tail[length++] = v[i];
//         else
//             *it = v[i];
//     }
 
//     return length;
// // }

// int height[100000];
// int s[100000];

// int binary_search(int first, int last, int x) {

//     int mid;

//     while (first < last) {

//         mid = (first + last) / 2;

//         if (height[s[mid]] == x)
//             return mid;

//         else if (height[s[mid]] >= x)
//             last =  mid;

//         else
//             first = mid + 1;
//     }
//     return first; /* or last */
// }

// int longest_increasing_subsequence_nlgn(int n) {

//     int i, k, index;

//     memset(s, 0, sizeof(s));

//     index = 1;
//     s[1] = 0; /* s[i] = 0 is the index of the element that ends an increasing sequence of length  i = 1 */

//     for (i = 1; i < n; i++) {

//         if (height[i] >= height[s[index]]) { /* larger element, extend the sequence */

//             index++; /* increase the length of my subsequence */
//             s[index] = i; /* the current doll ends my subsequence */

//         }
//         /* else find the smallest element in s >= a[i], basically insert a[i] in s such that s stays sorted */
//         else {
//             k = binary_search(1, index, height[i]);

//             if (height[s[k]] >= height[i]) { /* if truly >= greater */
//                 s[k] = i;
//             }
//         }
//     }
//     return index;
// }



int LongestIncreasingSubsequenceLength(std::vector<int>& v)
{
    if (v.size() == 0) // boundary case
        return 0;
 
    std::vector<int> tail(v.size(), 0);
    int length = 1; // always points empty slot in tail
 
    tail[0] = v[0];
 
    for (int i = 1; i < v.size(); i++) {
 
        // Do binary search for the element in
        // the range from begin to begin + length
        auto b = tail.begin(), e = tail.begin() + length;
        auto it = upper_bound(b, e, v[i]);
        // it--;
        // if(*it)
 
        // If not present change the tail element to v[i]
        if (it == tail.begin() + length)
            tail[length++] = v[i];
        else
            *it = v[i];
    }
 
    return length;
}


void longestSequence(vi arr, int N)
{
  // Base case
  if (N == 0) {
    cout << 0;
    return;
  }
 
  // Sort the array in ascending order
  // sort(arr, arr+N);
 
  // Stores the maximum length
  int maxLen = 1;
 
  int len = 1;
 
  // Traverse the array
  for (int i = 1; i < N; i++) {
 
    // If difference between current
    // pair of adjacent elements is 1 or 0
    // if (arr[i] == arr[i - 1]
    //     || arr[i] == arr[i - 1] + 1) {
    //   len++;
    if(arr[i] >=arr[i-1]){
        len++;
    // }
 
      // Extend the current sequence
      // Update len and max_len
      maxLen = max(maxLen, len);
    }
    else {
 
      // Otherwise, start a new subsequence
      len = 1;
    }
  }
 
  // Print the maximum length
  cout << maxLen;
}






ll help(vector<ll> &v){
        vector<ll> k;
        ll res = 0;
        rep(i,0,v.size()){
            if (k.empty() or k.back() <= v[i]){
                k.push_back(v[i]);
            }
            else{
                ll p = upper_bound(all(k), v[i]) - k.begin();

                k[p] = v[i];
            }
        }

        return k.size();
    }

void solve(){    
        
        int n , m;
        cin>>n>>m;

        deque<int > a ,b;
        rep(i,0,n){
        	int x; cin>>x;
        	a.pb(x);
        }
        rep(i,0,m){
        	int x ; cin>>x;
        	b.pb(x);
        }

        // dbg(a,b);
        // return;

        vi v;
        rep(i,0,n+m){
        	if(!a.empty() && !b.empty()){
        		if(a.front()<b.front()){
        			v.pb(a.front());
        			a.pop_front();
        		}else{
        			v.pb(b.front());
        			b.pop_front();
        		}
        	}else if(!a.empty()){
	        		v.pb(a.front());
        			a.pop_front();
			}else if(!b.empty()){
					v.pb(b.front());
        			b.pop_front();
        	}else break;
        }

        dbg(v);

cout<<help(v) ndl;;

// longestSequence(v,n+m) ;
// cndl;
// cout<<lis(v,n+m) ndl;
        // cout<<LongestIncreasingSubsequenceLength(v) ndl;
        // cout<<longest_increasing_subsequence_nlgn(n) ndl;



        

    return;
}
