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

n= 3 k = 7;
1 2 4 5 7 8 10 11 13 14 16 

(7/3*3 =6) - ((7/3) ) => (6 - 2 )= 4 )))) + (7%3) -> 5 means 7 is the 5th divisor  
******************************************************************************************/

int solve(){    
        
        ll n{},k{};
        cin>>n>>k;

        // ll divisornumberofk = (k/n)*n + - k/n + k%n;
        // cout<<divisornumberofk<<ndl;
        
        // return 0;
        // ll temp = k;
// linear tle
        // while(divisornumberofk!=k){
        // 	temp++;
        // 	if(temp%n!=0){
        // 		divisornumberofk++;
        // 	}
        // }

// binary
        ll low = k, high = k*2;

        ll answer{};
        while(low<=high){
        	answer= (low+high)/2;
        	if(answer%n ==0){
        		answer++;
        	}
        	// cout<<answer;
        	ll divNumberOfAnswer = (answer/n)*n - answer/n + answer%n;
        	if(divNumberOfAnswer==k){
        		cout<<answer<<ndl;
        		return 0;
        	}else if(divNumberOfAnswer<k){
        		low= answer+1;
        	}else high = answer-1;
        }
        // cout<<temp<<ndl<<ndl;


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