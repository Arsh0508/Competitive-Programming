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

int main()
  {
    ios_base::sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0) ;
    lli q, n, l, r, m, bridges, edges, ans ;
    cin>> q ;
    for(int i=0 ; i<q ; i++)
      {
        cin>> n ;
        if(n==1)
          {
            cout<< 0 << endl ;
            continue ;
          }
        l=n-1 ; r=2*n ;
        ans=-1 ;
        while(l<=r)
          {
            m=(l+r)/2 ;
            bridges=ceil(m/2.0) ;
            edges=m-bridges ;
            if(edges<=(n-bridges)*(n-bridges-1)/2)
              {
                ans=max(ans, m) ;
                l=m+1 ;
              }
            else r=m-1 ;
          }
        cout<< ans << endl ;
      }
  }
