#include<bits/stdc++.h>
using namespace std;
 
int main(){
	#ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long int x,y,n;
        cin>>x>>y>>n;
        int t=(n-y)/x;
        cout<<(t*x)+y<<endl;
    }
    return 0;
}