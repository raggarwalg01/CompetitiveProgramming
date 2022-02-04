		/*****     raggarwalg01     *****/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
#define pb(x)   push_back(x);
#define rep(i,a,b) for(ll i = a;i<b;i++)

bool isPrime(int n);

int solve(){    
        ll n{};
        cin>>n;
        ll arr[n]{};
        rep(i,0,n){
            cin>>arr[i];
        }
        ll check {};
        rep(i,0,n){
            rep(j,i+2,n){
                if(arr[i]==arr[j]){
                    check =1;
                    break;
                }
            }
            if(check==1){
                break;
            }
        }
        if(check==1){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;

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