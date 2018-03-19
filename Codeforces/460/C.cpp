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
    lli n, m, k, ans=0 ;
    cin>> n >> m >> k ;
    char grid[n+1][m+1] ;
    for(int i=1 ; i<=n ; i++)
      for(int j=1 ; j<=m ; j++)
        cin>> grid[i][j] ;
    for(int i=1 ; i<=n ; i++)
      {
        lli x=0 ;
        for(int j=1 ; j<=m ; j++)
          if(grid[i][j]=='.') x++ ;
          else
            {
              if(x>=k) ans+=((x-k)+1) ;
              x=0 ;
            }
        if(x>=k) ans+=((x-k)+1) ;
      }
    if(k!=1)
      for(int i=1 ; i<=m ; i++)
        {
          lli x=0 ;
          for(int j=1 ; j<=n ; j++)
            if(grid[j][i]=='.') x++ ;
            else
              {
                if(x>=k) ans+=((x-k)+1) ;
                x=0 ;
              }
          if(x>=k) ans+=((x-k)+1) ;
        }
    cout<< ans ;
  }
