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
        ll sum1{},sum2{},x{};
        for (int i = 0; i < n; ++i){
        	cin>>x;
        	sum1+=x;
        }
        sum2=sum1;
        // cout<<sum1<<sum2<<endl<<endl;
        for (int i = 0; i < n-1; ++i){
        	cin>>x;
        	sum1 = sum1-x;
        }
        cout<<sum1<<endl;
        sum2=sum2-sum1;
        for (int i = 0; i < n-2; ++i){
        	cin>>x;
        	sum2 = sum2-x;
        }
        cout<<sum2<<endl;


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