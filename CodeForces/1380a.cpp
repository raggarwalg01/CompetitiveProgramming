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
		std::vector<ll> v{};
		ll prelower[n][2]{};
		ll postlower[n][2]{};
		for(ll i{};i<n;i++){
			ll x{};
			cin>>x;
			v.pb(x);
		}
		ll temp{v[0]};
		prelower[0][0]=v[0];
		prelower[0][1]=0;
		for (int i = 1; i < n; ++i){
			temp=min(v[i-1],temp);
			prelower[i][0]=temp;
			if(temp==v[i-1])
				prelower[i][1]=i-1;
			else prelower[i][1]=prelower[i-1][1];
		}
		temp = v[n-1];
		postlower[n-1][0] = v[n-1];
		postlower[n-1][1] = n-1;

		for (int i = n-2; i>=0; i--){
			temp=min(v[i+1],temp);
			postlower[i][0]=temp;
			if(temp==v[i+1])
				postlower[i][1]=i+1;
			else postlower[i][1]=postlower[i+1][1]; 

		}
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout<<prelower[i][0]<<" "<<prelower[i][1]<<endl;
		// 	cout<<postlower[i][0]<<" "<<postlower[i][1]<<endl;
		// 	cout<<endl;
		// }
		
		for (int i = 1; i <n-1; ++i){
			if(v[i]>prelower[i][0] && v[i]>postlower[i][0]){
				cout<<"YES\n";
				cout<<prelower[i][1]+1<<" "<<i+1<<" "<<postlower[i][1]+1<<endl;
				return 0;
			}
		}
		cout<<"NO"<<endl;

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