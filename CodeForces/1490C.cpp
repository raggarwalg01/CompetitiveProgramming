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

bool func(ll n){

	ll low = 1;
	ll high = cbrt(n);
	high++;

	while(low<=high){
		ll sumofcube=low*low*low + high*high*high;
		if(sumofcube== n){
			return true;
		}
		else if(sumofcube<n){
			low++;
		}else{
			high--;
		}
	}
	return false;
}

int solve(){    
        
        ll n{};
        cin>>n;
        

        /************ time O(n)*****/
        // for(ll i=1;i*i*i<=n;i++){
        // 	if(n==1){
        // 		cout<<"NO"<<endl;
        // 		return 0;
        // 	}
        // 	ll x =cbrt(n-i*i*i);
        // 	if(x*x*x == (n-i*i*i) && x!=0){
        // 		cout<<"YES"<<endl;
        // 		return 0;
        // 	}
        // }
        // cout<<"NO"<<endl;

        ///////************ O(logn)  maybe less two pointer
        bool check =  func(n);
        if(check==true){
        	cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;

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