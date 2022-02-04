		/*****     raggarwalg01     *****/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
#define pb(x)   push_back(x);
#define rep(i,a,b) for(ll i = a;i<b;i++)

void rvereseArray(ll arr[], ll start, ll end);
bool isPrime(int n);

int solve(){    
        
        
        ll n{},x{};

       	cin>>n>>x;
       	ll count{},sum{};
       	ll arr[n]{};

       	rep(i,0,n){
       	cin>>arr[i];
       	}
       	sort(arr,arr+n);
       	rvereseArray(arr,0,n-1);
       	rep(i,0,n){
       		if(sum+arr[i]>= (i+1)*x){
       			count++;
       			sum+=arr[i];
       		}
       	}

       	cout<<count<<endl;


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