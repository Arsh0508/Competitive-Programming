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
    int T ;
    lli n, dp[1000010] ;
    memset(dp, 0, sizeof dp) ;
    dp[0]=1 ;
    for(int i=3 ; i<=1000000 ; i++)
      for(int j=1 ; j<=8 ; j++)
        if(i-j*3>=0)
          dp[i]=(dp[i]+dp[i-j*3])%mod ;
    cin>> T ;
    while(T--)
      {
        cin>> n ;
        cout<< dp[n] << endl ;
      }
  }
