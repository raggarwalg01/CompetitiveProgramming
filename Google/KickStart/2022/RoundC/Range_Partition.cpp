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

void solve(int t);
void presolve();
int testcase = 1;
int iii = 1;

int32_t main()
{

#ifndef ONLINE_JUDGE
    // freopen("/home/raggarwalg01/Desktop/CompetitiveProgramming/input.txt","r",stdin);
    // freopen("/home/raggarwalg01/Desktop/CompetitiveProgramming/output.txt","w",stdout);
    freopen("/home/raggarwalg01/Desktop/CompetitiveProgramming/error.txt", "w", stderr);
#endif

    fastio();
    cout << fixed << setprecision(10);
    cerr << fixed << setprecision(10);

    presolve();

    cin >> testcase;
    int i = 1;
    while (testcase > 0)
    {
        cout << "Case #" << i++ << ": ";
        solve(iii);
        testcase--;
        // i++;
        // cerr<<"//=====================================================================================================//" ndl;
    }

    cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs     ";
}

void presolve()
{

    return;
}
bool **dp;

void display(const vector<int> &v)
{
    cout << sz(v) ndl;
    cout << v ndl;
    // fncok();
    // exit();
    // testcase--;
    // solve(iii++);
    return;
}

// A recursive function to print all subsets with the
// help of dp[][]. Vector p[] stores current subset.
void printSubsetsRec(vi arr, int i, int sum, vector<int> &p)
{
    // If we reached end and sum is non-zero. We print
    // p[] only if arr[0] is equal to sum OR dp[0][sum]
    // is true.

    if (i == 0 && sum != 0 && dp[0][sum])
    {
        p.push_back(arr[i]);
        // Display Only when Sum of elements of p is equal to sum
        if (arr[i] == sum)
        {
            display(p);
            // goto label;
        }
        return;
    }

    // If sum becomes 0
    if (i == 0 && sum == 0)
    {
        display(p);
        // goto label;
        return;
    }

    // If given sum can be achieved after ignoring
    // current element.
    if (dp[i - 1][sum])
    {
        // Create a new vector to store path
        vector<int> b = p;
        printSubsetsRec(arr, i - 1, sum, b);
    }

    // If given sum can be achieved after considering
    // current element.
    if (sum >= arr[i] && dp[i - 1][sum - arr[i]])
    {
        p.push_back(arr[i]);
        printSubsetsRec(arr, i - 1, sum - arr[i], p);
    }
    // label:
    return;
}

// Prints all subsets of arr[0..n-1] with sum 0.
void printAllSubsets(vi arr, int n, int sum)
{
    if (n == 0 || sum < 0)
        return;

    // Sum 0 can always be achieved with 0 elements
    dp = new bool *[n];
    for (int i = 0; i < n; ++i)
    {
        dp[i] = new bool[sum + 1];
        dp[i][0] = true;
    }

    // Sum arr[0] can be achieved with single element
    if (arr[0] <= sum)
        dp[0][arr[0]] = true;

    // Fill rest of the entries in dp[][]
    for (int i = 1; i < n; ++i)
        for (int j = 0; j < sum + 1; ++j)
            dp[i][j] = (arr[i] <= j) ? dp[i - 1][j] ||
                                           dp[i - 1][j - arr[i]]
                                     : dp[i - 1][j];
    if (dp[n - 1][sum] == false)
    {
        // printf("There are no subsets with sum %d\n", sum);
        return;
    }

    // Now recursively traverse dp[][] to find all
    // paths from dp[n-1][sum]
    vector<int> p;
    printSubsetsRec(arr, n - 1, sum, p);
}

void solve(int iii)
{
    int n, x1, y1;
    cin >> n >> x1 >> y1;
    seti s;
    for (int i = 1; i <= n; i++)
    {

        s.ins(i);
    }

    int sum = (n * (n + 1)) / 2;

    // for (int i = 1; i <= 1000; i++)
    rep(i, 1, 1001)
    {

        int x = x1 * i;
        int y = y1 * i;
        if ((sum * x) % (x + y) != 0)
        {
            continue;
        }
        int s1 = (sum * x) / (x + y);

        vi ans;
        while (s1 > 0)
        {

            auto it = s.lower_bound(s1);
            if (it == s.end())
            {

                it--;
            }

            ans.pb(*it);
            s1 -= *it;
            s.erase(it);
        }

        cout << "POSSIBLE" ndl;
        cout << sz(ans) ndl;
        for (auto i : ans)
        {

            cout << i << " ";
        }

        cout ndl;
        return;
    }

    cout << "IMPOSSIBLE" ndl;
    return;
    //     return;
    //     cout << "Case #" << iii++ << ": ";
    //     int n;
    //     int x, y;
    //     cin >> n >> x >> y;

    //     vi v(n, 0);
    //     rep(i, 1, n + 1)
    //     {
    //         v[i - 1] = i;
    //     }
    //     int sum = accumulate(all(v), 0ll);
    //     // cout << sum ndl;
    //     // return;
    //     // int
    //     if ((sum * x) % (x + y) != 0)
    //     {
    //         cout << "IMPOSSIBLE\n";
    //         return;
    //     }
    //     int sum1 = (sum * x) / (x + y);
    //     // int sum1 = (x * sum) / y;
    //     printAllSubsets(v, n, sum1);

    // label:

    //     // cndl;
    //     // if (n % (x + y) != 0)
    //     // {
    //     //     cout << "IMPOSSIBLE\n";
    //     //     return;
    //     // }
    //     // cout << "POSSIBLE\n";
    // return;
}
