		/*****     raggarwalg01     *****/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
#define pb(x)   push_back(x);
#define rep(i,a,b) for(ll i = a;i<b;i++)
#define repn(i,a,b) for(ll i=a;i>=b;i--)

void rvereseArray(ll arr[], ll start, ll end);
bool isPrime(ll n);
ll power(ll x,  ll y);

long long int mod = 1000000007;

int solve(){    
        
        ll n{};
        cin>>n;
        char arr[n][n]{};
        rep(i,0,n){
        	rep(j,0,n){
        		cin>>arr[i][j];
        	}
        }

        ll counter{};
        rep(i,0,n){
        	rep(j,0,n){
        		counter=0;
        		if(arr[i+1][j]=='o' && i+1<=n-1){
        			counter++;
        		}
                // cout<<endl<<counter<<endl;
        		if(arr[i-1][j]=='o' && i-1>=0){
        			counter++;
        		}
                // cout<<endl<<counter<<endl;
        		if(arr[i][j+1] =='o'&& j+1<=n-1){
        			counter++;
        		}
                // cout<<endl<<counter<<endl;
        		if(arr[i][j-1]=='o' && j-1>=0){
        			counter++;
        		}
                // cout<<endl<<counter<<endl;
                // cout<<i<<j;
                // cout<<"?????????????????????????***********";
        		if(counter==1 || counter==3){
        			cout<<"NO";
                    // cout<<endl<<counter<<endl;
                    // cout<<i<<" "<<j;
        			return 0;
        		}
        	}
        }

        cout<<"YES";

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