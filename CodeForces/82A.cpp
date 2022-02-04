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
        ll ans =n;
        
        	ll count{1};
        	ll temp{0};
        	ll x = 1;
        	ll last{0};

            /////******* to get how many multiples will occur 
        	while(temp<n){
        		last = last + 5*(x/2);
        		temp = temp + 5*x;
        		count++;
        		x = x*2;
        		// cout<<temp<<" "<<last<<endl;
        	}
        	// ans=n;

        	n = n-last;
        	x = x/2;
        	if(n%x==0){
        		ans = n/x;
        	}else{
        		ans = n/x +1;
        	}
            
                ///*** to print
        	if(ans==1){
        		cout<<"Sheldon";
                return 0;
        	}else if(ans ==2){
        		cout<<"Leonard";
                return 0;
        	}else if(ans ==3){
        		cout<<"Penny";
                return 0;
        	}else if(ans ==4){
        		cout<<"Rajesh";
                return 0;
        	}else if(ans ==5){
        		cout<<"Howard";
                return 0;
        	}else cout<<"sfksafs";
        	
        	

        

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