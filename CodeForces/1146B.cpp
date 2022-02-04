		/*****     raggarwalg01     *****/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ndl "\n"
#define pb   push_back
#define rep(i,a,b) for(ll i = a;i<b;i++)
#define repn(i,a,b) for(ll i=a;i>=b;i--)

void rvereseArray(ll arr[], ll start, ll end);
bool isPrime(ll n);
ll power(ll x,  ll y);
ll gcd(ll a,ll b);

long long int mod = 1000000007;
/******************************************************************************************

******************************************************************************************/

int solve(){    
        
        string t{};
        cin>>t;
        string temp = t;
        ll counter{};
        ll i=0;
        for(;i<t.length();i++){
        	if(t[i]=='a'){
        		// t.erase(t.begin()+i);
        		// i--;
        		counter++;
        	}
        }
        
        if((t.length()-counter)%2==1){
        	cout<<":(";
        }else{
        	string sub1 = t.substr(0,(t.length()-counter)/2 + counter);
        	string sub2 = t.substr((t.length()-counter)/2 + counter,t.length());

        	for(i=0;i<sub1.length();i++){
        		if(sub1[i]=='a'){
        			sub1.erase(sub1.begin()+i);
        			i--;
        		// counter++;
        		}
        	}
        	if(sub1==sub2){
        		rep(i,0,(t.length()-counter)/2 + counter){
        			cout<<t[i];
        		}
        	}else cout<<":(";
        }

    return 0;
}

/******************************************************************************************/
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

ll gcd(ll a,ll b){
    if(b==0)
        return a;

    return gcd(b, a % b);
}