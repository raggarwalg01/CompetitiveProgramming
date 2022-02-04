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
n%7==0       7-> n/7      4->0
n%7==1       7-> n/7 -1   4->2   n>=8
n%7==2       7-> n/7 -2   4->4   n>=16
n%7==3       7-> n/7 -3	  4->0   n>=24
n%7==4       7-> n/7      4->0   n>=4
n%7==5       7-> n/7 -1   4->0   n>=12
n%7==6       7-> n/7 -2   4->0   n>=20
        // int n;
        // cin>> n;
        // rep(i,0,n){
        // 	int x; cin>>x;
        // 	x+=6;
        // 	if(x%4==0){
        // 		cout<<x ;
        // 		break;
        // 	}
        // }
******************************************************************************************/

void solve(){    
        
        int n ;
        cin>>n;
        int md = n%7;
        int dv =n/7;
        if(md==0){
        	rep(i,0,dv){
        		cout<<"7";
        	}
        }else if(md==1){
        	if(n>=8){
        		dv--;
        		cout<<"44";
        		rep(i,0,dv){
        			cout<<"7";
        		}
        	}else{
        		cout<<"-1";
        	}
        }else if(md==2){
        	if(n>=16){
        		dv-=2;
        		cout<<"4444";
        		rep(i,0,dv){
        			cout<<"7";
        		}
        	}else{
        		cout<<"-1";
        	}
        }else if(md==3){
        	if(n>=24){
        		dv-=3;
        		cout<<"444444";
        		rep(i,0,dv){
        			cout<<"7";
        		}
        	}else{
        		cout<<"-1";
        	}
        }else if(md==4){
        	if(n>=4){
        		cout<<"4";
        		rep(i,0,dv){
        			cout<<"7";
        		}
        	}else{
        		cout<<"-1";
        	}
        }else if(md==5){
        	if(n>=12){
        		dv-=1;
        		cout<<"444";
        		rep(i,0,dv){
        			cout<<"7";
        		}
        	}else{
        		cout<<"-1";
        	}
        }else if(md ==6){
        	if(n>=16){
        		dv-=2;
        		cout<<"44444";
        		rep(i,0,dv){
        			cout<<"7";
        		}
        	}else{
        		cout<<"-1";
        	}
        }
    return;
}

/******************************************************************************************
4
8
12

n%4 == 0    4-> n/4     	7-> 0
n%4 == 1    4-> n/4 -5  	7-> 3
n%4 == 2    4-> n/4 -3   	7-> 2
n%4 == 3    4-> n/4 -1  	7-> 1
******************************************************************************************/
int32_t  main(){
    #ifndef ONLINE_JUDGE
        freopen("D:\\Programming\\CompetitiveProgramming\\input.txt","r",stdin);
        freopen("D:\\Programming\\CompetitiveProgramming\\output.txt","w",stdout);
        //freopen("D:\\Programming\\CompetitiveProgramming\\error.txt","w",stderr);


    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
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

