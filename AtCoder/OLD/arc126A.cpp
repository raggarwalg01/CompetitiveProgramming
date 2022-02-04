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
// umapii mp;
ll ans = 0;
ll n2,n3,n4;

void fnc1() {
	
	int x =0;
	if(n4>0 & n2>0){
		x =  min(n4/2 , n2);
		n4 = n4 - x - x;
		n2 = n2 - x;
	}
	// return x;
	// cerr<<x ndl;
	ans+=x;
}

void fnc2(){

	ll t = 0;
	if(n4>0 && n3>0){
		t = min(n3/2 , n4);
		n3 = n3 - t - t;
		n4 = n4 - t;
	}
	ans+=t;
}

void fnc3(){
	ll s = 0;
	if(n3>0 && n2>0){
		s = min(n3/2 ,n2/2);
		n3 = n3 - s - s;
		n2 = n2 - s - s;
	}
	// return s;
	ans+=s;
}

void fnc4(){
	ll z = 0;
	if(n4>0 && n2>0){
		z = min(n4 , n2/3);
		n4 = n4 -z;
		n2 = n2 - z - z -z;
	}
	// return z;
	ans+=z;
}

void fnc5(){
	ll y = 0;
	if(n2>0){
		y = n2/5;
	}
	n2 = n2 - 5*(n2/5);
	// return y;
	ans+=y;
}


// ll ans = imin;
vector<string > vec;
void solve(){    
        cin>>n2>>n3>>n4;
		string s = "12345";

		ll anst = 0;
		ll nc2 =n2 , nc3 = n3,nc4 = n4;

		do{
			vec.pb(s);
		}while(next_permutation(all(s)));


		rep(j,0,vec.sz){
			n2 = nc2 ;
			n3 = nc3;
			n4 = nc4;
			ans = 0;
			for(int i = 0 ; i <5 ; i++){
				ll ctr = vec[j][i]-'0';
				// cout << ctr;
				if(ctr==1){
					fnc1();
				}else if(ctr==2){
					fnc2();
				}else if(ctr==3){
					fnc3();
				}else if(ctr==4){
					fnc4();
				}else{
					fnc5();
				}
			}
			anst = max(anst,ans);
		}
        cout<<anst ndl;

    return;
}

/******************************************************************************************

******************************************************************************************/
int32_t  main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int testcase = 1;
    cin>>testcase;
    

    while(testcase--){
        solve();
    }

    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
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

