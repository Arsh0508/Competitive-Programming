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
    lli n, S=0, x, m=INF, pos=0, neg=0 ;
    cin>> n ;
    vlli a(n) ;
    for(int i=0 ; i<n ; i++)
      {
        cin>> x ;
        a[i]=x ;
        x=abs(x) ;
        S+=x ;
        m=min(m, x) ;
        if(a[i]<=0) neg=1 ;
        if(a[i]>=0) pos=1 ;
      }
    if(n==1) return cout<< a[0], 0 ;
    if(neg*pos) cout<< S ;
    else cout<< S-2*m ;
  }
