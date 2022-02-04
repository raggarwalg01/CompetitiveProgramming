		/*****     raggarwalg01     *****/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
#define pb(x)   push_back(x);
bool isPrime(int n);

ll answer1(ll a,ll b,ll x,ll y,ll n){
    ll count{};
    if(a-n>=x){
        count = (a-n)*b;
    }else{
        n = n - abs(a-x);
        a = x;
        b = max(b-n,y);
        count = a*b;
    }
    return count;
}
int solve(){

    ll a{},b{},x{},y{},n{};
    cin>>a>>b>>x>>y>>n;

    ll count1{},count2{};
    // ll newa{},newB{};

    count1 = answer1(a,b,x,y,n);
    count2 = answer1(b,a,y,x,n);
    cout<<min(count2,count1)<<endl;


}
// int solve(){    
        
//         ll a{},b{},x{},y{},n{};
//         cin>>a>>b>>x>>y>>n;
//         ll newb{},newa{};
//         // if(x>y){

//         // }else if(y>x){
//         // 	swap(a,b);
//         // 	swap(x,y);
//         // }else{
//         // 	if(a<b){
//         // 		swap(a,b);
//         // 	}
//         // }
//         	newa=a;
//         	newb=b;
//         	if(b-n>=y){
//         		newb = b-n;
//         	}else{
//         		newb= y;
//         		n = n - (b-y);
//         		newa = max(x,a-n);
//         	}
//         	ll temp1= newb*newa;

//         	swap(a,b); swap(x,y);
        	
//         	newa=a;
//         	newb=b;
//         	if(b-n>=y){
//         		newb = b-n;
//         	}else{
//         		newb= y;
//         		n = n - (b-y);
//         		newa = max(x,a-n);
//         	}
//         	ll temp2= newb*newa;
//        	cout<< min(temp1,temp2)<<endl;

//     return 0;
// }

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