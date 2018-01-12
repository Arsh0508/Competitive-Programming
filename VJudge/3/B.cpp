#include <bits/stdc++.h>
using namespace std ;

#define inf 0x3f3f3f3f
#define INF 1000111000111000111LL
#define mod 1000000007
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

lli T, X, Y, p, q, ans=INF, l, r, m, x, y ;

int main()
  {
    ios_base::sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0) ;
    cin>> T ;
    while(T--)
      {
        cin>> X >> Y >> p >> q ;
        ans=INF ;
        l=1 ; r=1e9 ;
        while(l<=r)
          {
            m=(l+r)/2 ;
            x=p*m-X ;
            y=q*m-Y ;
            if(x>=0 && y>=0 && x<=y)
              {
                ans=min(ans, y) ;
                r=m-1 ;
              }
            else l=m+1 ;
          }
        if(ans==INF) cout<< -1 << endl ;
        else cout<< ans << endl ;
      }

  }
