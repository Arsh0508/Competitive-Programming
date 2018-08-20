#include <bits/stdc++.h>
using namespace std ;

#define inf 0x3f3f3f3f
#define INF 1000111000111000111LL
#define mod 1000000007
#define pi acos(-1.0)
#define eps 1e-8
#define endl '\n'
#define mp make_pair
#define mt make_tuple
#define pb push_back
#define fi first
#define se second
#define all(cc) (cc).begin(),(cc).end()
using lli = long long int ;
using pii = pair<int, int> ;
using vi = vector<int> ;
using vb = vector<bool> ;
using vvi = vector<vector<int>> ;
using vlli = vector<long long int> ;
using vpii = vector<pair<int, int>> ;

int main()
  {
    ios_base::sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0) ;
    string s ;
    cin>> s ;
    int n=s.length(), dpL[300000], dpR[300000], l, r, mx, curr, ans=1 ;
    memset(dpL, 0, sizeof dpL) ;
    memset(dpR, 0, sizeof dpR) ;
    s=s+s ;
    s='#'+s ;
    dpL[1]=1 ; dpL[2*n]=1 ;
    for(int i=2 ; i<=2*n ; i++)
      if(s[i]!=s[i-1]) dpL[i]=1+dpL[i-1] ;
      else dpL[i]=1 ;
    for(int i=2*n-1 ; i>=1 ; i--)
      if(s[i]!=s[i+1]) dpR[i]=1+dpR[i+1] ;
      else dpR[i]=1 ;
    for(int i=1 ; i<2*n ; i++)
      {
        l=min(dpL[i], n) ; r=min(dpR[i+1], n) ;
        if(s[i]!=s[i+1]) ans=max(ans, min(l+r, n)) ;
        ans=max({ans, l, r}) ;
      }
    cout<< ans ;
  }
