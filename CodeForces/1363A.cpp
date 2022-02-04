		/*****     raggarwalg01     *****/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ndl "\n"
#define pb   push_back
#define rep(i,a,b) for(ll i = a;i<b;i++)
#define repn(i,a,b) for(ll i=a;i>=b;i--)

bool isPrime(ll n);
ll power(ll x,  ll y);
ll gcd(ll a,ll b);

long long int mod = 1000000007;
/******************************************************************************************
int solve(){    
        
        ll n{},x{};
        cin>>n>>x;
        
        ll oddcount{},evencount{};
        
        rep(i,0,n){
            ll temp;
            cin>>temp;
            if(temp%2==0) evencount++;
            else oddcount++;
        }
        if(x%2==1){
            if(oddcount>=1 &&((oddcount-1)%2==0 || evencount>=x-1 || (((oddcount-1)/2)*2)+ evencount >=x-1)){
                cout<<"YES";
            }else cout<<"NO";
        }else{
            if(oddcount>=1 && ( evencount>=x-1 || (oddcount-1)%2==0)){
                cout<<"YES";
            }else cout<<"NO";
        }
        cout<<ndl;
    return 0;
}
******************************************************************************************/
int solve(){    
   int n,x;
   cin>>n>>x;
   int co=0;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]%2==1)
      co++;
   } 
   if(co==0)
    cout<<"No"<<endl;
   else if(co==n && x%2==0)
    cout<<"No"<<endl;
   else if(x==n && co%2==0)
    cout<<"No"<<endl;
   else
    cout<<"Yes"<<endl;    
        
 
    return 0;
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
     cin>>testcase;
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