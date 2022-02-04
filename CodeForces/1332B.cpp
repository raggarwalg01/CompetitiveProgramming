//==============================     raggarwalg01     ==============================//

#include<bits/stdc++.h>
using namespace std;

#define int                 long long
#define ll                  long long
#define ull                 unsigned long long 
#define ld                  long double

#define rep(i,a,b)          for(int i = a; i <  b ; i++)
#define repn(i,a,b)         for(int i = a; i >= b ; i--)
#define trav(a,x)           for (auto& a : x)

#define seti                set<int>
#define useti               unordered_set<int>
#define mapii               map<int, int>
#define umapii              unordered_map<int, int>
#define vpi                 vector <pair<int, int>>
#define vi                  vector<int>
#define pi                  pair<int , int>
#define vvi                 vector<vector<int>>

#define pb                  push_back
#define ins                 insert
#define sz                  size()
#define all(var)            var.begin(), var.end()
#define present(c, x)       (c.find(x) != c.end())
#define desc                greater<int>()

#define imin                INT_MIN
#define imax                INT_MAX
#define lmin                LLONG_MIN
#define lmax                LLONG_MAX

#define fi                  first
#define se                  second
#define lb                  lower_bound
#define ub                  upper_bound 

#define spc                 <<" "<<
#define spcend              <<" "
#define ndl                 <<"\n"
#define cndl                cout<<"\n";

#define YES                 cout << "YES\n";
#define NO                  cout << "NO\n";
#define Yes                 cout << "Yes\n";
#define No                  cout << "No\n";
#define minus1              cout << "-1\n";

#define precision(n)        cout<< fixed << setprecision(n);

//int Mod = 1000000007;
int M = 1e9+7;
int Mod = 1e9+7;

// void SieveOfEratosthenes(bool Sieve[],int SieveCount);
bool isPrime(int n);
int power(int x,  int y);
int gcd(int a,int b);
int lcm (int a , int b );
int nCr(int n, int r);
int minv(int a){ return power(a , M-2 ); }
int mod(int n) { return (n % M + M) % M; }
int modM(int n, int m) { return ((n % M * m % M) + M) % M; }
int modA(int n, int m) { return ((n % M + m % M) + M) % M; }
int modS(int n, int m) { return ((n % M - m % M) + M) % M; }
int modD(int n, int m) { return ((n % M * minv(m) % M) + M) % M; }

/******************************************************************************************

******************************************************************************************/


bool cmp(pi a , pi b){
	if(a.se!=b.se){
		return a.se<b.se;
	}
	return a.fi<b.se;
}
void solve(){    
        
        int n; cin>>n;
        vi v(n);
        vpi ans;
        // int m = 1;
        mapii hash;
        hash[2]=1;
        hash[3]=2;
        hash[5]=3;
        hash[7]=4;
        hash[11]=5;
        hash[13]=6;
        hash[17]=7;
        hash[19]=8;
        hash[23]=9;
        hash[29]=10;
        hash[31]=11;

        rep(i,0,n){
        	cin>>v[i];
        	trav(ij,hash){
        		if(v[i]%ij.fi==0){
        			ans.pb({i,ij.se});
        			break;
        		}
        	}
        }
        sort(all(ans),cmp);
        int m = 0;
        // ans[0]
        vi answer(n);
        answer[ans[0].fi]=1;
        m++;
        rep(i,1,n){
        	if(ans[i].se==ans[i-1].se){
        		answer[ans[i].fi]=m;
        	}else{
        		m++;
        		answer[ans[i].fi]=m;
        	}
        }
        cout<< m ndl;
        trav(i,answer){
        	cout<< i spcend;
        }
        cndl


    return;
}

/******************************************************************************************

******************************************************************************************/
int32_t  main(){
    #ifndef ONLINE_JUDGE
        freopen("D:\\Programming\\CP\\input.txt","r",stdin);
        freopen("D:\\Programming\\CP\\output.txt","w",stdout);
        //freopen("D:\\Programming\\CP\\error.txt","w",stderr);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int testcase = 1;
    cin>>testcase;
    

    while(testcase--){
        solve();
    }

    cerr<<"Time Taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs     " ;
}

// void SieveOfEratosthenes(bool Sieve[],int SieveCount){
//     
//     memset(Sieve, true, SieveCount);
//     for (int p = 2; p * p <= SieveCount; p++){
//         if (Sieve[p] == true){
//             for (int i = p * p; i <= SieveCount; i += p)
//                 Sieve[i] = false;
//         }
//     }
// }

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

int power(int x,  int y){
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return ((power(x, y / 2)%Mod) * (power(x, y / 2)%Mod))%Mod;
    else
        return ((((x  %Mod) * ((power(x, y / 2)%Mod)))%Mod * (power(x, y / 2)%Mod))%Mod)%Mod;
}

int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b, a % b);
}

int lcm (int a , int b ){
    return (a*b)/gcd(a,b);
}

int nCr(int n, int r){
    int p = 1, k = 1;
    if (n - r < r)
        r = n - r;

    if (r != 0){
        while (r){
            p *= n;
            k *= r;
            int m = gcd(p, k);
            p /= m;
            k /= m;
            n--;
            r--;
        }
    }else{
        p = 1;
    }

    return p ;
}

