        /*****     raggarwalg01     *****/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
#define pb(x)   push_back(x);
#define rep(i,a,b) for(ll i = a;i<b;i++)

void rvereseArray(ll arr[], ll start, ll end);
bool isPrime(ll n);
ll power(ll x,  ll y);

long long int mod = 1000000007;

int solve(){    
        
            ////*********** height pattern can be observed as (2) , 2 + (2+3), 2 + (2+3 )+ (2 + 3 + 3)
    // sum can be cal by ap as 2*n + n(n-1)*3/2     ->>>> if n is height of pyramid
    ll n{};
    cin>>n;

    ll cardnow{};
    ll cardprev{};
    ll count{};
    for (ll i = 1;; ++i)
    {
        cardnow = 2*i + (i*(i-1)*3)/2;
        // if(i>1)
            cardprev = max(2*(i-1) + ((i-1)*(i-2)*3)/2, 0ll);
        // else cardprev=0;
        // if(cardnow==2){
            // cardprev=2;
        // }
        if(n<=1){
            break;
        }
        if(cardnow>n){
            n = n-cardprev;
            count++;
            i=1;
            // cout<<n<<endl<<endl;
        }
        if(n<=1){
            break;
        }
    }
    cout<<count<<endl;
    

    return 0;
}
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
bool isPrime(int n){
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

void rvereseArray(ll arr[], ll start, ll end){
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

ll power(ll x,  ll y){
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return ((power(x, y / 2)%mod) * (power(x, y / 2)%mod))%mod;
    else
        return ((((x  %mod) * ((power(x, y / 2)%mod)))%mod * (power(x, y / 2)%mod))%mod)%mod;
}