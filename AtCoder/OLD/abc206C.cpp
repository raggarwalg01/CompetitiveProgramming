		/*****     raggarwalg01     *****/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
#define pb(x)   push_back(x);
bool isPrime(int n);

int solve(){    
        
        ll n{},m{};
        cin>>n;
        ll arr[n]{};
        for (int i = 0; i < n; ++i){
        	cin>>arr[i];
        }
        // set <int> temp{};
        // ll suffix[n]{};
        ll sum{};
        // for(int i=n-1;i>=0;i--){
        // 	temp.insert(arr[i]);
        // 	suffix[i]= temp.size();
        // 	sum+=suffix[i];
        // }
        // cout<<sum;

        for (int i = 0; i < n; ++i)
        {
        	for (int j = i+1; j < n; ++j)
        	{
        		if(arr[i]==arr[j]){
        			sum++;
        			// cout<<arr[i]<<" "<<arr[j]<<" "<<endl;
        		}
        	}
        	// cout<<endl;
        }
        cout<<n*(n-1)/2   -sum;




        // for (int i = 0; i < n; ++i)
        // {
        // 	cout<<suffix[i]<<" ";
        // }
        // for (int i = 0; i < m; ++i)
        // {
        // 	ll x{};
        // 	cin>>x;
        // 	cout<<suffix[x-1]<<endl;
        // }

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