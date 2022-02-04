#include<bits/stdc++.h>
#define ll long long
#define db double
#define pb push_back
#define pp pop_back()
#define ft front()
#define bk back()
#define bl <<"\n";
#define mod 1000000007
#define lb lower_bound
#define ub upper_bound
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
ll gcd(ll a,ll b)
{
  if(a==0)
    return b;
  return gcd(b%a,a);
}
bool isSquare(ll x)
{
  ll y=sqrt(x);
  return y*y==x;
}
void solve()
{
  string s;
  cin>>s;
  int n=s.length();
  for(int i=1;i<n;i++)
  {
    if(s[i]!='?' && s[i]==s[i-1])
    {
      cout<<-1;
      return;
    }
  }
  for(int i=0;i<n;i++)
  {
    if(i==0 && s[i]=='?')
    {
      if(s[i+1]=='a')
        s[i]='b';
      else
        s[i]='a';
    }
    else if(i==n-1 && s[i]=='?')
    {
      if(s[i-1]=='a')
        s[i]='c';
      else
        s[i]='a';
    }
    else if(s[i]=='?')
    {
      if(s[i-1]=='a')
      {
        if(s[i+1]=='b')
          s[i]='c';
        else
          s[i]='b';
      }
      if(s[i-1]=='b')
      {
        if(s[i+1]=='c')
          s[i]='a';
        else
          s[i]='c';
      }
      if(s[i-1]=='c')
      {
        if(s[i+1]=='a')
          s[i]='b';
        else
          s[i]='a';
      }
    }
  }
  cout<<s;
}
int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--)
  {
    solve();
    cout<<"\n";
  }
  return 0;
}