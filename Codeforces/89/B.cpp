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
    int n, x, r, c ;
    cin>> n ;
    r=2*n+1 ;
    for(int i=1 ; i<=r ; i++)
      {
        c=n+min(r-i+1, i) ;
        for(int j=1 ; j<=c ; j++)
          {
            x=min(i, r-i+1)+min(j, r-j+1)-n-2 ;
            if(x<0) cout<< " " ;
            else cout<< x ;
            if(j!=c) cout<< " " ;
          }
        cout<< endl ;
      }
  }
