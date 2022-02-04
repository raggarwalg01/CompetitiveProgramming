		/*****     raggarwalg01     *****/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
#define pb(x)   push_back(x);
bool isPrime(int n);

int solve(){    
        
    ll n{},m{};
    cin>>n>>m;
    ll arr[m]{},arr1[m+1]{};
    for (int i = 0; i < m; ++i){
    	cin>>arr[i];
    	arr1[i]=arr[i];
    }

    ll mn{};
    ll mx{};
    ll temp =n;
    ll i =0;
    sort(arr,arr+m);
    while(temp>0){
    	if(arr[i]>0){
    		mn += arr[i];
    		arr[i]--;
    	}else{
    		i++;
    		temp++;
    	}
    	temp--;
    }
    temp =n;
    i=0;
    sort(arr1,arr1+m+1);
    reverse(arr1,arr1+m+1);
    while(temp>0){
    	if(arr1[i]>0){
    		mx+=arr1[i];
    		arr1[i]--;
    		// if(arr1[i]<arr1[i+1]){
    		// 	i++;
    		// }
    		sort(arr1,arr1+m+1);
    reverse(arr1,arr1+m+1);
    i=0;
    	}else{
    		i++;
    		temp++;
    	}
    	temp--;
    	if(i==m){
    		i=0;
    	}
    }

    cout<<mx<<" "<<mn;



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