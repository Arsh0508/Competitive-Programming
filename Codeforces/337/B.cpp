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
    lli n, mi=inf, ans=0, curr, idx, extra=0 ;
    cin>> n ;
    vlli a(n) ;
    for(int i=0 ; i<n ; i++) cin>> a[i], mi=min(mi, a[i]) ;
    for(int i=0 ; i<n ; i++) a[i]-=mi ;
    ans+=mi*n ;
    curr=0 ;
    for(int i=0 ; i<n ; i++)
      if(a[i]) curr++ ;
      else extra=max(extra, curr), curr=0 ;
    curr=0 ;
    idx=n ;
    for(int i=0 ; i<n ; i++)
      if(a[i]) curr++ ;
      else
        {
          idx=i ;
          break ;
        }
    for(int i=n-1 ; i>=idx ; i--)
      if(a[i]) curr++ ;
      else break ;
    extra=max(extra, curr) ;
    cout<< ans+extra ;
  }
