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
        for (ll i = 0; i < n; ++i){
            ll x{};
            cin>>x;
            v.pb(x);
        }
        std::vector<ll> ans{};
        sort(v.begin(), v.end());
        ll data1{};
        ll dataend{};
        ll mindiff{INT_MAX};
        ll dataindex{};
        for (ll i = 0; i < n-1; ++i){
            if(abs(v[i]-v[i+1]) <mindiff){
                data1=v[i];
                dataend=v[i+1];
                dataindex=i;
                mindiff= abs(v[i]-v[i+1]);
            }
        }
        ans.pb(data1);


        // cout<<data1<< "   "<<dataend<<"   \n";//   t
        // v.erase(v.begin()+dataindex);   
        // v.erase(v.begin()+dataindex);

        // for (ll i = 0; i < (n-2); ++i){
        //  if(i%2==1){
        //         ans.pb(v[0]);
        //         v.erase(v.begin());
        //     }else{
        //     ans.pb(*(v.end()-1));
        //        // v.erase(v.end()-1);
        //        v.pop_back();
        //     }
        // }
        for (int i = dataindex+2; i < n; ++i)
        {
            ans.pb(v[i]);
        }
        for (int i = 0; i < dataindex; ++i)
        {
            ans.pb(v[i]);
        }
        ans.pb(dataend);

        for (ll i = 0; i < n; ++i){
            cout<<ans[i]<<" ";
        }
        cout<<endl;


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