#include <bits/stdc++.h>
using namespace std ;

#define inf 0x3f3f3f3f
#define mod 1000000007
#define endl '\n'
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define all(cc) (cc).begin(),(cc).end()
using pii = pair<int, int> ;
using vi = vector<int> ;
using vb = vector<bool> ;
using vvi = vector<vector<int>> ;
using vlli = vector<long long int> ;
using vpii = vector<pair<int, int>> ;

int main()
  {
    ios_base::sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0) ;
    int n, m, l, r, x, y ;
    cin>> n >> m ;
    vi p(n), b(n) ;
    for(int i=0 ; i<n ; i++)
      {
        cin>> p[i] ;
        b[i]=p[i] ;
      }
    for(int i=0 ; i<m ; i++)
      {
        y=0 ;
        cin>> l >> r >> x ;
        l-- ; r-- ; x-- ;
        for(int i=l ; i<=r ; i++)
          if(p[i]<p[x]) y++ ;
        if(y==x-l) cout<< "Yes" << endl ;
        else cout<< "No" << endl ;
      }
  }
