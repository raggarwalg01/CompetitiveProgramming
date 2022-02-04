		/*****     raggarwalg01     *****/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
bool isPrime(int n);

int solve(){    
        
    ll a{},b{};
    cin>>a>>b;
    ll count{1},temp =a;
    if(a==b){
    	cout<<1<<endl;
    	return 0;
    }
    if(b==1){
    	cout<<1<<endl;
    	return 0;
    }
    ll tempb{};
    tempb=b;
    // while(a>b){
    // 	b+=tempb;
    // }								//TLE
    if(a>b){
    	b = ((a+b-1)/b)*b;
    }
    // cout<<b<<"    "<<endl;
    // while(a<b){
    // 	a+=temp;
    // 	count++;
    // }								// TLE
    count = (b+a-1)/a;//+ 1
    cout<<count<<endl;

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