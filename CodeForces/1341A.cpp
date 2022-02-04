		/*****     raggarwalg01     *****/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
#define pb(x)   push_back(x);
bool isPrime(int n);

int solve(){    
        ll n{},a{},b{},c{},d{};
        cin>>n>>a>>b>>c>>d;
        ll mid{};
        ll lowl=c-d;
        ll highl=c+d;
        ll low=a-b;
        ll high = a+b;
        //....... binary will only work if we have to make all grains of same size

        // while(low<=high){
        // 	ll mid = (low+high)/2;
        // 	if(mid*n>=lowl && mid*n<=highl){
        // 		cout<<"YES"<<endl;
        // 		return 0;
        // 	}else if(mid*n<lowl){
        // 		low = mid+1;
        // 	}else if(mid*n>highl){
        // 		high = mid-1;
        // 	}
        // }
        // cout<<"NO"<<endl;

		int check = 1;
        if ((a - b) * n > (c + d))
            check=0;
        if ((a + b) * n < (c - d))
            check=0;
        if (check == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;

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