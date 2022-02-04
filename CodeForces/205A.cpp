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
		ll arr[n]{},brr[n]{};
		for (int i = 0; i < n; ++i){
			cin>>arr[i];
			brr[i]=arr[i];
		}
		sort(arr,arr+n);
		if(arr[0]==arr[1]){
			cout<<"Still Rozdil";
		}else{
		for (int i = 0; i < n; ++i){
			if(brr[i]==arr[0]){
				cout<<i+1;
			}
		}

        }
        

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