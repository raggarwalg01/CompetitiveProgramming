		/*****     raggarwalg01     *****/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
#define pb(x)   push_back(x);
bool isPrime(int n);

int solve(){    
        
        ll n{};
        cin>>n;
        ll c1{},c2{},c3{},c4{};
        for (int i = 0; i < n; ++i){
        	ll x{};
        	cin>>x;
        	if(x==1){
        		c1++;
        	}else if(x==2){
        		c2++;
        	}else if(x==3){
        		c3++;
        	}else c4++;
        }
        ll ans{};
        ans+= c4;
        if(c3>=c1){
        	ans+=c3;
        	c1=0;
        }else {
        	ans +=c3;
        	c1 = c1-c3;
        }
        ans += c2/2;
        c2= c2 - (c2/2)*2;
        if(c2==1){
        	ans +=1;
        	c1 = c1 - min((ll)2,c1);
        }
        ll count{};
        if(c1>0){
        	count = (c1+3)/4; 
        }
        ans+=count;

        cout<<ans;

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
}
bool isPrime(int n){
    if(n==1)
        return false;
    if(n==2 || n==3)
        return true;
    if(n%2==0 || n%3==0)
        return false;
    for(int i=5; i*i<=n; i=i+6){
        if(n % i == 0 || n % (i + 2) == 0)
            return false; 
    }
    return true;
}