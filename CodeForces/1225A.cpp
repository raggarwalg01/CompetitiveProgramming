		/*****     raggarwalg01     *****/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
bool isPrime(int n);

int solve(){    
        
        ll x{},y{};
        cin>>x>>y;
        
        if(x==y){
        	cout<<10*x<<" "<<10*x+1;
        	return 0;
        }else if(x+1==y){
        	cout<<10*x+9<<" "<<10*y;
        }else if(x==9 && y==1){
        	cout<<9<<" "<<10;
        }
        else cout<<-1<<endl;
        return 0;


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