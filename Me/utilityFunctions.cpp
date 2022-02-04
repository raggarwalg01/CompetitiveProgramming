
#include<bits/stdc++.h>
using namespace std;

#define M   1000000007
#define int long long
int mod(int n) {return (n % M + M) % M; }
int modM(int n, int m) { return ((n % M * m % M) + M) % M; }
int modA(int n, int m) { return ((n % M + m % M) + M) % M; }
int modS(int n, int m) { return ((n % M - m % M) + M) % M; }


//(1)=================MATHEMATIC UTILITY FUNCTIONS=====================//

//(A)  MODPOWER

int power(int a , int n){
    int result = 1;
    while(n){
        if(n & 1) result = (result * a) % M;
        n >>= 1;
        a = (a * a) % M;
    }
    return result;
}


//(B) SIEVE
vector<long long> primvec;
void sieve ( long long n){   
    bool *arr= new bool [n+1];

    for(int i=2;i*i<=n;i++) {
        if(arr[i]==false) {  
            for(int j=i*i;j<=n;j+=i) {
                arr[j] = true; 
            }
        }
    }
    for(long long i=2; i<=n; i++){
        if(arr[i]==0){
            primvec.push_back(i);
        }
    }
    delete[] arr;
} // maxcall sieve(1e8) and generates more than 5e6 prime numbers


// SEGEMNTED SIEVE GENERATES PRIME IN RANGE L TO R 

vector<int> segsieve( int l , int r ){
    if(l==1) l++;

    vector<int> primes ;

    vi arr(r-l+1 , 1) ;
    
    for( auto p : primvec ){
        if(p*p<=r){
            int i = (l / p) * p;
            if(i < l) i += p;
 
            for(;i<=r;i+=p)
            {
                if(i != p)
                arr[i-l] = 0;
            }
        }
    }
    for( int i=0; i<r-l+1; i++){
        if(arr[i]==1)
            primes.pb(l+i);
    }
    return primes ;
} // CALL -> sieve(1000000); vi pri = segsieve(l,r) ;



//(C) PRIME NUMBER
bool isprime( int n){
    if( n==0 or n==1 )  return false;
    
    for(int i=2; i*i<=n; i++){
        if(n%i==0)  return false ;
    }
    return true;
}
//(D) ALL THE DIVISORS / FACTORS 

    vector<int> divisors ;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){

            divisors.pb(i);
            if(n/i!=i) divisors.pb(n/i);
        }
    }
//(E) FACTORISATION

vi v1 = sieve(1000000);
int prime factorize ( int n){
    int count =0;
    for( auto x : v1){
        if( x> n)
            break;
        while(n%x==0){
            //cout<<x<<"*";
            count++;
            n/=x;
        }
    }
    if(n>1) count++;
    return count ;
}

// PRIME FACTORISATION IN LOG(N) COMPLEXITY USING SIEVE 

vi spf ;

// PRE-COMPUTE SPF 
void pspf( int n ){
    spf.assign(n+1 , 0) ;

    for(int i=1 ; i<=n; i++)  spf[i] = i ;

    for(int i=2; i*i<=n;i++){
        if(spf[i]==i){
            for( int j = i; j<=n; j+=i){
                if(spf[j] ==j)
                    spf[j] =i;
            }
        }
    }
} // call : factorise(10000000) ;

// factorise in log(n) 
void factorise( int num ){
    while(1){
        cout<<spf[num] <<" * ";
        num = num/spf[num] ;

        if(num==1)  break;  
    }
}



//(F) Extended Euclidean algorithm ( TO FIND MODULAR INVERSE WHEN M IS NOT PRIME )

int Gcd, x, y;
void extendedEuclid(int A, int B) {
    if(B == 0) {
        Gcd = A;
        x = 1;
        y = 0;
    }
    else {
        extendedEuclid(B, A%B);
        int temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
} // x gives A inverse mod B


//(G) FERMAT'S LITTLE THEOREM 

// where N is a very very big number 
(a^N) mod M = (a^(N mod M-1)) mod M 
// big power is modded by (M-1) not M










//==========================COMMON UTILITY FUNCTIONS=====================//

//Factorial generation for nCr
vi fact ;
void fc( int n ){
    fact.pb(1) ;
    for(int i=1; i<=n; i++){
        fact.pb(modM(fact[i-1] , i) ) ;
    }
}

// Function to calculare npr 
int npr( int n ,int r){
    return modM (fact[n] , minv(fact[n-r]) ) ;
}

// Function to calculate nCr
int ncr( int n ,int r){
    return modM (fact[n] , minv( modM( fact[r] , fact[n-r] ) ) ) ;
}

// LSB
int lsb(x)= log2(x&(-x));
int msb(x)= log2(x) ;



//(A)
bool issqr( int n){
    int x = sqrt(n);
    if(x*x==n) return true;
    else return false;
}


//(B)
bool ispalin ( string s){
    
    int n = s.length();
    for(int i=0; i<n; i++){
        if( s[i]!=s[n-i+1]){
            return false ;
        }
    }
    return true ;
}
//(C)
int digitsum ( int n ){
    int ans =0 ;
    while(n>0){
        ans+= n%10;
        n/=10;
    }
    return ans ;
}
//(D) MEX 
int mex( int arr[] , int n){
    umapii mp ;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    for(int i=0; i<=n+1; i++){
        if(mp[i]==0){
            return i ;
        }
    }
}






//================MAIN FUNCTION====(BUT AVOID RUNNING IN THIS FILE)=======//
int32_t main(){
    
    
    
    return 0;
}

