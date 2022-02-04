		/*****     raggarwalg01     *****/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
#define pb   push_back
#define rep(i,a,b) for(ll i = a;i<b;i++)
#define repn(i,a,b) for(ll i=a;i>=b;i--)

void rvereseArray(ll arr[], ll start, ll end);
bool isPrime(ll n);
ll power(ll x,  ll y);

long long int mod = 1000000007;

int solve(){    
        
        ll n{},k{};
        cin>>n>>k;
        ll goodnumber{};

        while(n--){
        	string s{};
        	cin>>s;
        	// cout<<s;
        	ll arr[10]{};
        	for (int i = 0; i < s.length(); ++i){
        		arr[s[i]-48]=1;
        	}
        	int check =1;
        	for (int i = 0; i <=9; ++i){
        		if((arr[i]!=1 &&i<=k) ){
        			check =0;
        			break;
        		}
        	}
        	if(check==1){
        		goodnumber++;
        	}
        	// cout<<endl;
        }
        cout<<goodnumber;

    return 0;
}
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