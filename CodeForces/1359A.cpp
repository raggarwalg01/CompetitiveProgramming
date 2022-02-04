		/*****     raggarwalg01     *****/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
bool isPrime(int n);

int solve(){    
        
        ll n{},m{},k{};
        cin>>n>>m>>k;
        ll x = min(n/k,m);
        ll cardother = max((ll)0,m - x);
        k--; 		// now card will be distributed to otheres
        ll y = cardother/k + ceil(float(cardother%k)/k);
        cout<<x-y<<endl;

        

    return 0;
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    long long int testcase = 1;
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