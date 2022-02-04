		/*****     raggarwalg01     *****/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
#define pb(x)   push_back(x);
bool isPrime(int n);

ll min(ll a,ll b,ll c){
	return min(min(a,b),c);
}
int solve(){    
        
        ll arrsize{};
        cin>>arrsize;
        ll arr[arrsize]{};
        for (int i = 0; i < arrsize; ++i){
        	cin>>arr[i];
        }

        if(arrsize==1){
        	cout<<0<<endl;
        	return 0;
        }
        if(arrsize==2 ){
        	cout<<1<<endl;
        	return 0;
        }

        
        sort(arr,arr+arrsize);
        ll count{1};
        ll count2{1};
        ll maxcount{1};
        for (int i = 1; i < arrsize; ++i){
        	if(arr[i]==arr[i-1]){
        		count++;
        		maxcount= max(maxcount,count);
        	}else {
        		// if(count==1)
        			count2++;
        		count =1;
        		}
        }

        // cout<<maxcount<<endl;
        // ll ans = min(maxcount,arrsize/2);
        ll ans = min(maxcount, ( (maxcount-count2)/2 + count2 ),(arrsize/2));
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