		/*****     raggarwalg01     *****/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
bool isPrime(int n);

int solve(){    
        
        ll n{},m{};
        cin>>n;
        vector<string> ques{};
        for (int i = 0; i < n; ++i){
        	string x{};
        	cin>>x;
        	ques.push_back(x);
        }
        cin>>m;
        vector<ll > ans{};
        for (int i = 0; i < m; ++i){
        	string x{};
        	cin>>x;
        	ll count{};
        	for (int i = 0; i < n; ++i){
        		if(ques[i]==x){
        			count++;
        		}
        	}
        	ans.push_back(count);
        }
        for (int i = 0; i < m; ++i)
        {
        	cout<<ans[i]<<endl;
        }

    return 0;
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    long long int testcase = 1;
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