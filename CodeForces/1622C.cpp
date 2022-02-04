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
int n,k;
int counterr=0;
int minans=lmax;
void solve(){


        cin>>n>>k;
        counterr = 0;
        minans = lmax;

        vi v(n);
        int sum_arr = 0;
        rep(i,0,n){
            cin>>v[i];
            sum_arr+=v[i];
        }
        sort(all(v));
        // trav(i,v){ cout << i spcend;
        // }
        stack<int> s;
        rep(i,1,n){
            s.push(v[i]-v[0]);
        }

        while(!s.empty()){
            if(sum_arr<=k) 
                break;
            int temp = counterr+(sum_arr-k+counterr)/(counterr+1);
            minans=min(minans,temp);
            sum_arr-=s.top();
            s.pop();
            counterr++;
        }

        if(sum_arr>k){
            counterr+=(sum_arr - k + counterr)/(counterr+1);
        }
        cout<<min(minans,counterr) ndl;

    return;
}
// // int moves =0;

// // bool fnc(vi v , int sum , int k, int sub , int n){
// // 	moves = 0 ;
// // 	moves+= max(0ll,sub);
// // 	// if(sub<v[0]) return false;

// // 	sum = sum - sub;
// // 	v[0] = v[0]-sub;

// // 	// cout<< v[0] ndl;
// // 	// cout<< sum ndl;
// // 	for(int i = n-1;i>=0;i++){
// //         		if(sum<=k){
// //         			break;
// //         		}
// //         		sum = sum - ( v[i] ) + v[0];
// //         		moves++;
// // 	}
// //         	// cout<< moves ndl;
// // 	if(sum<=k)
// // 		return true;

// // 	return false;
// // }

// void solve(){    
        
//         int n,k;
//         cin>>n>>k;
//         vi v(n);
//         int sum = 0;
//         rep(i,0,n){
//         	cin>>v[i];
//         	sum+=v[i];
//         }
//         moves = 0;
//         if(sum<=k){
//         	cout<<0 ndl;
//         	return;
//         }

//         int need = k/n;
//         int other = k%n;
//         sort(all(v));
//         // int ans = v[0]
//         if(v[0] <= need){
//         	// cout<< fnc()
//         	for(int i = n-1;i>=0;i++){
//         		if(sum<=k){
//         			break;
//         		}
//         		sum = sum - ( v[i] ) + v[0];
//         		moves++;
//         	}
//         	cout<< moves ndl;
//         }else{
//         	moves = 0;
//         	int lo = 0;
//         	int hi = need+1;
//         	int mid = (lo+hi)/2;
//         	int ans = lmax;
//         	int xxxxxxx = 0;
//         	// while(lo<hi){	
//         	// 	xxxxxxx++;
//         	// 	if(xxxxxxx==25){
//         	// 		break;
//         	// 	}
//         	// 	if(fnc(v,sum , k , mid,n ) ){
//         	// 		ans = min(ans,moves);
//         	// 		moves = 0;
//         	// 		// lo = mid -1;
//         	// 		hi = mid;
//         	// 		cout<< lo spc hi  ndl;

//         	// 	}else{
//         	// 		lo = mid +1;
//         	// 	}

//         	// }
//         	rep(i,0,30){
//         		moves = 0;
//         		if(fnc(v,sum , k ,i,n) == true){
//         			cout<< i spc moves ndl;
//         		}
//         		// }else cout<<"dfasdfsd" ndl;
//         	}
//         	// cout<< lo spc ans ndl;

//         }


//     return;
// }

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

