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
int powermod(int x,  int y,int Mod);
int gcd(int a,int b);
int lcm (int a , int b );
int nCr(int n, int r);
int minv(int a){ return power(a , M-2 ); }
int mod(int n) { return (n % M + M) % M; }
int modM(int n, int m) { return ((n % M * m % M) + M) % M; }
int modA(int n, int m) { return ((n % M + m % M) + M) % M; }
int modS(int n, int m) { return ((n % M - m % M) + M) % M; }
int modD(int n, int m) { return ((n % M * minv(m) % M) + M) % M; }

void presolve(){    
        
        

    return;
}

/******************************************************************************************

******************************************************************************************/

void solve(){

		vector<int> p = {4, 8, 15, 16, 23, 42};
		int ans[4];

		for(int i = 0; i < 4; i++)
	{
		cout << "? " << i + 1 << " " << i + 2 << endl;
		cout.flush();
		cin >> ans[i];
	}
	do
	{
		bool good = true;
		for(int i = 0; i < 4; i++)
			good &= (p[i] * p[i + 1] == ans[i]);
		if(good) break;
	}
	while(next_permutation(p.begin(), p.end()));
	cout << "!";
	for(int i = 0; i < 6; i++)
		cout << " " << p[i];
	cout << endl;
	cout.flush();

        
        // mapii hash;
        // hash[4] =1; hash[8] =1; hash[15] =1; hash[16] =1; hash[23] =1; hash[42] =1;

        // vi ans(6);
        // cout<<"?" spc 1 spc 1 ndl;
        // cout.flush();
        // int first ;
        // cin>>first;
        // first = sqrt(first);
        // ans[0] = first;
        // hash[first] =0;

        // cout<<"?" spc 2 spc 2 ndl;
        // cout.flush();
        // int second ;
        // cin>>second;
        // second = sqrt(second);
        // ans[1] = second;
        // hash[second] =0;

        // cout<<"?" spc 3 spc 4 ndl;
        // cout.flush();
        // int prod34;
        // cin>>prod34;
        
        // cout<<"?" spc 4 spc 5 ndl;
        // cout.flush();
        // int prod45;
        // cin>>prod45;

        // int prod3445 = prod34*prod45;
        // int fourth ;
        // trav(i,hash){
        // 	if(i.se ==1 && prod3445%(i.fi*i.fi) ==0){
        // 		fourth = i.fi ;

        // 		break;
        // 	}
        // } 
        // hash[fourth] = 0;
        // ans[3] = fourth;

        // ans[2] = prod34/fourth;
        // hash[ans[2]] = 0;

        // ans[4] = prod45/fourth;
        // hash[ans[4]] = 0;

        // trav(i,hash){
        // 	if(i.se ==1){
        // 		ans[5] = i.fi ;
        // 		break;
        // 	}
        // }
        // cout<<"!" spcend;
        // trav(i,ans) cout<<i spcend;
        






    return;
}

/******************************************************************************************

******************************************************************************************/
int32_t  main(){
    #ifndef ONLINE_JUDGE
        freopen("D:\\Programming\\CompetitiveProgramming\\input.txt","r",stdin);
        freopen("D:\\Programming\\CompetitiveProgramming\\output.txt","w",stdout);
        //freopen("D:\\Programming\\CompetitiveProgramming\\error.txt","w",stderr);


    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    presolve();


    int testcase = 1;
    // cin>>testcase;
    

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
        return ((power(x, y / 2)) * (power(x, y / 2)));
    else
        return ((((x  ) * ((power(x, y / 2)))) * (power(x, y / 2))));
}
int powermod(int x,  int y,int Mod){
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

