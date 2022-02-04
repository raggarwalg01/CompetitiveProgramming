		/*****     raggarwalg01     *****/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
#define pb(x)   push_back(x);
bool isPrime(int n);

int solve(){    
        
    ll a{},b{};
    cin>>a>>b;
    ll ans{};
    if(max(a,b)>=2*min(a,b)){
     	ans += min(a,b);

    }else{
    	// ans = min(a/3,b/3);
     // 	ans = ans*2;
     // 	a = a%3;
     // 	b = b%3;
     	ans+= (a+b)/3;
 	}
    
    cout<<ans<<endl;



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