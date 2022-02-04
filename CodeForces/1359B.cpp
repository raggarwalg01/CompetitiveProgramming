		/*****     raggarwalg01     *****/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
bool isPrime(int n);

int solve(){    
        
        ll n{},m{},xp{},yp{};
        cin>>n>>m>>xp>>yp;
        ll totalp{};
        int count{};
        string arr{};
        string white=".";
        for (int i = 0; i < n; ++i){
        	cin>>arr;
        	for (int j = 0; j < m; ++j){
        		if(arr[j]=='.'){
        			count++;
        		}else{
        			if(count==1){
        				totalp+= xp;
        			}else if(count%2==0){
        				totalp += min(yp*(count/2), xp*count);
        			}else{
        				totalp += min(yp*(count/2), xp*(count-1))+ xp;
        			}
        			count=0;
        		}
        	}		
        			if(count==1){
        				totalp+= xp;
        			}else if(count%2==0){
        				totalp += min(yp*(count/2), xp*count);
        			}else{
        				totalp += min(yp*(count/2), xp*(count-1))+ xp;
        			}
        			count=0;
        }
        cout<<totalp<<endl;
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