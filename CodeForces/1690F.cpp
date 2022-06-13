//==============================     raggarwalg01     ==============================//

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// order_of_key (val): returns the no. of values less than val
// find_by_order (k): returns the kth largest element.(0-based)

// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> pbds;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define int long long
#define ll long long
#define ull unsigned long long
#define ld long double

//#define rep(i, begin, end)  for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

#define rep(i, a, b) for (int i = a; i < b; i++)
#define repn(i, a, b) for (int i = a; i >= b; i--)
#define Rep(i, b) for (int i = 0; i < b; i++)
#define trav(a, x) for (auto &a : x)

#define seti set<int>
#define useti unordered_set<int>
#define mapii map<int, int>
#define umapii unordered_map<int, int>
#define vpi vector<pair<int, int>>
#define vi vector<int>
#define pi pair<int, int>
#define vvi vector<vector<int>>

#define pb push_back
#define ins insert
//#define sz                  size()
#define sz(x) ((int)(x).size())
#define all(var) var.begin(), var.end()
#define present(c, x) (c.find(x) != c.end())
#define desc greater<int>()

#define imin INT_MIN
#define imax INT_MAX
#define lmin LLONG_MIN
#define lmax LLONG_MAX

#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound

#define spc << " " <<
#define spcend << " "
#define ndl << "\n"
#define cndl cout << "\n";

#define YES cout << "YES\n";
#define NO cout << "NO\n";
#define Yes cout << "Yes\n";
#define No cout << "No\n";
#define yes cout << "yes\n";
#define no cout << "no\n";
#define minus1 cout << "-1\n";
#define zero cout << "0\n";

#define set_bits __builtin_popcountll
#define precision(n) cout << fixed << setprecision(n);

//=====================================================================================================//

int M = 1e9 + 7;
int Mod = 1e9 + 7;

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

bool isPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

ll power(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a);
        a = (a * a);
        b = b >> 1;
    }
    return res;
}

ll powermod(ll a, ll b, ll mod = Mod)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}

// int power(int x,  int y){
//     if (y == 0)
//         return 1;
//     else if (y % 2 == 0)
//         return ((power(x, y / 2)) * (power(x, y / 2)));
//     else
//         return ((((x  ) * ((power(x, y / 2)))) * (power(x, y / 2))));
// }

// int powermod(int x,  int y,int Mod){
//     if (y == 0)
//         return 1;
//     else if (y % 2 == 0)
//         return ((power(x, y / 2)%Mod) * (power(x, y / 2)%Mod))%Mod;
//     else
//         return ((((x  %Mod) * ((power(x, y / 2)%Mod)))%Mod * (power(x, y / 2)%Mod))%Mod)%Mod;
// }

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int nCr(int n, int r)
{
    int p = 1, k = 1;
    if (n - r < r)
        r = n - r;

    if (r != 0)
    {
        while (r)
        {
            p *= n;
            k *= r;
            int m = gcd(p, k);
            p /= m;
            k /= m;
            n--;
            r--;
        }
    }
    else
    {
        p = 1;
    }

    return p;
}

int64_t ceil_div(int64_t a, int64_t b)
{
    return a / b + ((a ^ b) > 0 && a % b != 0);
}

int lsb(int x)
{
    return log2(x & (-x));
}

int msb(int x)
{
    return log2(x);
}

int digitsum(int n)
{
    int ans = 0;
    while (n > 0)
    {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

int mex(vi arr)
{
    int n = arr.size();
    umapii mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (int i = 0; i <= n + 1; i++)
    {
        if (mp[i] == 0)
        {
            return i;
        }
    }
    return n + 1;
}

bool is_palindrome(vector<int> &s)
{
    int n = s.size();
    int lo = 0;
    int hi = n - 1;
    while (lo < hi)
    {
        if (s[lo] != s[hi])
        {
            return false;
        }
        lo++;
        hi--;
    }
    return true;
}

bool is_palindrome(string &s)
{
    int n = s.length();
    int lo = 0;
    int hi = n - 1;
    while (lo < hi)
    {
        if (s[lo] != s[hi])
        {
            return false;
        }
        lo++;
        hi--;
    }
    return true;
}

bool is_palindrome(int n)
{
    // int n = s.length();
    vi v;
    while (n > 0)
    {
        v.pb(n % 10);
        n = n / 10;
    }
    reverse(all(v));
    // dbg(v);
    return is_palindrome(v);
}

int minv(int a) { return power(a, M - 2); }
int mod(int n) { return (n % M + M) % M; }
int modM(int n, int m) { return ((n % M * m % M) + M) % M; }
int modA(int n, int m) { return ((n % M + m % M) + M) % M; }
int modS(int n, int m) { return ((n % M - m % M) + M) % M; }
int modD(int n, int m) { return ((n % M * minv(m) % M) + M) % M; }

//=====================================================================================================//

void __print(int x) { cerr << x; }
void __print(long x) { cerr << x; }
// void __print(long long x) {cerr << x;}
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }

template <typename T, typename V>
void __print(const pair<T, V> &x)
{
    cerr << '{';
    __print(x.first);
    cerr << ", ";
    __print(x.second);
    cerr << '}';
}
template <typename T>
void __print(const T &x)
{
    int f = 0;
    cerr << '{';
    for (auto &i : x)
        cerr << (f++ ? ", " : ""), __print(i);
    cerr << "}";
}
void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}

#ifndef ONLINE_JUDGE
#define dbg(x...)                                                   \
    cerr << __func__ << " : " << __LINE__ << " [" << #x << "] = ["; \
    _print(x);                                                      \
    cerr << endl;
#else
#define dbg(x...)
#endif

//=====================================================================================================//

// Operator overloads
template <typename T1, typename T2> // cin >> pair<T1, T2>
istream &operator>>(istream &istream, pair<T1, T2> &p)
{
    return (istream >> p.first >> p.second);
}
template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v)
{
    for (auto &it : v)
        cin >> it;
    return istream;
}

template <typename T1, typename T2> // cout << pair<T1, T2>
ostream &operator<<(ostream &ostream, const pair<T1, T2> &p)
{
    return (ostream << p.first << " " << p.second);
}
template <typename T> // cout << vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
    for (auto &it : c)
        cout << it << " ";
    return ostream;
}

// Utility functions
template <typename T>
void print(T &&t) { cout << t << "\n"; }
template <typename T, typename... Args>
void print(T &&t, Args &&...args)
{
    cout << t << " ";
    print(forward<Args>(args)...);
}

//=====================================================================================================//

void solve();
void presolve();

int32_t main()
{

#ifndef ONLINE_JUDGE
    // freopen("/home/raggarwalg01/Desktop/CompetitiveProgramming/input.txt","r",stdin);
    // freopen("/home/raggarwalg01/Desktop/CompetitiveProgramming/output.txt","w",stdout);
    // freopen("/home/raggarwalg01/Desktop/CompetitiveProgramming/error.txt", "w", stderr);
#endif

    fastio();
    cout << fixed << setprecision(10);
    cerr << fixed << setprecision(10);

    presolve();

    int testcase = 1;
    cin >> testcase;

    int i = 1;
    while (testcase--)
    {
        // cout << "Case #" << i++ << ": ";
        solve();
        // cerr<<"//=====================================================================================================//" ndl;
    }

    cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs     ";
}

void presolve()
{

    return;
}
const int MAXN = 210;
vector<int> lst[MAXN];
int parent[MAXN];

void make_set(int v)
{
    lst[v] = vector<int>(1, v);
    parent[v] = v;
}

int find_set(int v)
{
    return parent[v];
}

void union_sets(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {
        if (lst[a].size() < lst[b].size())
            swap(a, b);
        while (!lst[b].empty())
        {
            int v = lst[b].back();
            lst[b].pop_back();
            parent[v] = a;
            lst[a].push_back(v);
        }
    }
}
void computeLPSArray(string str, int M, int lps[])
{
    // length of the previous longest prefix suffix
    int len = 0;
    int i;

    lps[0] = 0; // lps[0] is always 0
    i = 1;

    // the loop calculates lps[i] for i = 1 to M-1
    while (i < M)
    {
        if (str[i] == str[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else // (pat[i] != pat[len])
        {
            if (len != 0)
            {
                // This is tricky. Consider the example
                // AAACAAAA and i = 7.
                len = lps[len - 1];

                // Also, note that we do not increment i
                // here
            }
            else // if (len == 0)
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}
bool isRepeat(string str)
{
    // Find length of string and create an array to
    // store lps values used in KMP
    // int n = strlen(str);
    int n = str.length();
    int lps[n];

    // Preprocess the pattern (calculate lps[] array)
    computeLPSArray(str, n, lps);

    // Find length of longest suffix which is also
    // prefix of str.
    int len = lps[n - 1];

    // If there exist a suffix which is also prefix AND
    // Length of the remaining substring divides total
    // length, then str[0..n-len-1] is the substring that
    // repeats n/(n-len) times (Readers can print substring
    // and value of n/(n-len) for more clarity.
    return (len > 0 && n % (n - len) == 0) ? len : -1;
}
int findPeriod(string A)
{
    string s = A;
    int n = s.length();
    rep(i, 1, n / 2 + 1)
    {
        if (n % i != 0)
            continue;
        bool ch = true;
        rep(j, i, n)
        {
            if (s[j - i] != s[j])
            {
                ch = false;
                break;
            }
        }
        if (ch)
        {
            return i;
        }
    }
    return n;
    // int length = A.size();

    // // Initially consider there is no period for given
    // // String
    // int period = -1;

    // /*set two pointers one(i) at
    // index 0 and other(j) at index 1. increment j till
    // first character is obtained in the string*/
    // int i = 0;
    // for (int j = 1; j < length; j++)
    // {
    //     int currChar = A[j];
    //     int comparator = A[i];

    //     /*If current character matches with first
    //      *character
    //      *update period as the difference of j and i*/
    //     if (currChar == comparator)
    //     {
    //         period = (j - i);
    //         i++;
    //     }

    //     /* if any mismatch occurs in between set i to
    //      * zero also check if current character again
    //      * matches
    //      * with starting character. If matches, update
    //      * period*/
    //     else
    //     {
    //         if (currChar == A[0])
    //         {
    //             i = 1;
    //             period = j;
    //         }
    //         else
    //         {
    //             i = 0;
    //             period = -1;
    //         }
    //     }
    // }

    // /*check if the period is exactly dividing
    //  * string if not reset the period to -1
    //  * this eliminates partial substrings like
    //  * e.g string -"GEEKSFORGEEKS" */

    // period = (length % period != 0) ? -1 : period;
    // return period;
}

void dfs(int vertex, vi &visited, vvi &g, vector<string> &strs, int root, string s)
{

    // take action on vertex after entering vertex

    visited[vertex] = 1;
    // cout << s[vertex - 1];
    strs[root].pb(s[vertex - 1]);

    for (int child : g[vertex])
    {

        // take action on child before entering child node

        if (visited[child] == 1)
            continue;

        dfs(child, visited, g, strs, root, s);

        // take action on child after exiting child node
    }

    // take action on vertex before exiting vertex

    return;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vi v(n);
    cin >> v;

    vvi graph(n + 1, vi());

    rep(i, 0, n)
    {
        graph[v[i]].pb(i + 1);
    }
    // dbg(graph);
    vector<string> stringgggs(n + 1);
    vi vis(n + 1, -1);

    rep(i, 1, n + 1)
    {

        if (vis[i] == -1)
        {
            dfs(i, vis, graph, stringgggs, i, s);
        }
    }
    int lcd = 1;
    trav(i, stringgggs)
    {
        int len = findPeriod(i);
        // cout << len spcend;
        // cerr << i spcend;
        if (len == -1)
        {
            len = sz(i);
        }
        if (len > 0)
            lcd = lcm(lcd, len);
    }
    cout << lcd ndl;

    // rep(i, 1, n + 1)
    // {
    //     make_set(i);
    // }
    // rep(i, 0, n)
    // {
    //     union_sets(i + 1, v[i]);
    // }
    // // vvi graph(n + 1, vi());
    // umapii graph;
    // map<int, string> hassss;
    // rep(i, 0, n)
    // {
    //     int ele = find_set(i + 1);
    //     graph[ele]++;
    //     hassss[ele].pb(s[i]);
    // }

    // trav(i, graph)
    // {
    // int lennn = findPeriod(hassss[i.fi]);
    // cout << hassss[i.fi] spc lennn << "    " spcend;
    // if (lennn != -1)
    // {
    // i.se = lennn;
    // }
    // }

    // int lm = 1;
    // trav(i, graph)
    // {
    //     lm = lcm(lm, i.se);
    // }
    // cout << lm ndl;

    return;
}