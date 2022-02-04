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

******************************************************************************************/

int solve(){    
        
		queue<ll> vectA{},vectB{},answer{};
        ll codebefore{},maxmovea{},maxmoveb{};
        ll count0{};
        cin>>codebefore>>maxmovea>>maxmoveb;
        for(ll i=0;i<maxmovea;i++){
        	ll temp{};
        	cin>>temp;
        	vectA.push(temp);
        }
        for(ll i=0;i<maxmoveb;i++){
        	ll temp{};
        	cin>>temp;
        	vectB.push(temp);
        }
        for(ll i=0;i<maxmoveb+maxmovea; i++){

        	if(vectB.front()<=vectA.front() && !vectB.empty() && !vectA.empty()){
        		if(vectB.front()==0){
        			codebefore++;
        		}else if(vectB.front()>codebefore){
        			cout<<"-1\n";
        			return 0;
        		}
        		answer.push(vectB.front());
        		vectB.pop();
        	}else if(vectB.front()>=vectA.front() && !vectB.empty() && !vectA.empty()){
        		if(vectA.front()==0){
        			codebefore++;
        		}else if(vectA.front()>codebefore){
        			cout<<"-1\n";
        			return 0;
        		}
        		answer.push(vectA.front());
        		vectA.pop();
        	}else if(vectA.empty()){

        		if(vectB.front()==0){
                    codebefore++;
                }else if(vectB.front()>codebefore){
        			cout<<"-1\n";
        			return 0;
        		}
        		answer.push(vectB.front());
        		vectB.pop();
        	}else if(vectB.empty()){

        		if(vectA.front()==0){
                    codebefore++;
                }else if(vectA.front()>codebefore){
        			cout<<"-1\n";
        			return 0;
        		}
        		answer.push(vectA.front());
        		vectA.pop();
        	}else {
        		cout<<"-1\n"; return 0;break;
        	}
        }
        while(!answer.empty()){
        	cout<<answer.front()<<" ";
        	answer.pop();
        }
        cout<<ndl;
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