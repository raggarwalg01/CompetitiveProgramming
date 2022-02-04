/*****     raggarwalg01     *****/

#include<bits/stdc++.h>
using namespace std;

#define ll                  long long 
#define rep(i,a,b)          for(ll i = a;i<b;i++)
#define repn(i,a,b)         for(ll i=a;i>=b;i--)
#define seti                set<ll>
#define useti               unordered_set<ll>
#define mapii               map<ll, ll>
#define umapii              unordered_map<ll, ll>
#define vpi                 vector <pair<ll, ll>>
#define vi                  vector<ll>
#define pi                  pair<ll , ll>
#define vvi                 vector<vector<ll>>
#define pb                  push_back 
#define sz                  size()
#define all(var)            var.begin(), var.end()
#define spc                 <<" "<<
#define spcend              <<" "
#define imin                INT_MIN
#define imax                INT_MAX
#define fi                  first
#define se                  second
#define ndl                 <<"\n"
#define cndl                cout<<"\n";

bool isPrime(ll n);
ll power(ll x,  ll y);
ll gcd(ll a,ll b);

long long int mod = 1000000007;
/******************************************************************************************
1
10 11
100 101 110 111
1000 1001 1010 1011 1100 1101 1110 1111
******************************************************************************************/

void solve(){    
        
        ll n{};
        cin>>n;
        ll temp = n;
        if(n<=9){
            cout<<1 ndl;
            return;
        }
        ll sum{};
        while(n>0){
            sum++;
            ll digit = floor(log10(n) + 1);
            
            if(n>=2*(power(10,digit-1))){
                n = 2*power(10,digit-1) -1;
            }
            rep(i,0,digit-1){
                sum+= power(2,i);
            }
            // cout<<n spc sum ndl;
            n = n - power(10,digit-1);
            if(n<=9 && n>=1){
                sum+=1;
                break;
            }
            // if(n%10>0)
            //     sum++;
            
            
        }
        // cout<<temp spc sum ndl;
        cout<< sum ndl;

    return;
}

/******************************************************************************************

******************************************************************************************/
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll testcase = 1;
     // cin>>testcase;
    while(testcase--)
        solve();

    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
}

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
        return ((power(x, y / 2)%mod) * (power(x, y / 2)%mod))%mod;
    else
        return ((((x  %mod) * ((power(x, y / 2)%mod)))%mod * (power(x, y / 2)%mod))%mod)%mod;
}

ll gcd(ll a,ll b){
    if(b==0)
        return a;

    return gcd(b, a % b);
}