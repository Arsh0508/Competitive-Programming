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
    int n, m, a=0, black=0, ans ;
    cin>> n >> m ;
    char cell[n+1][m+1] ;
    for(int i=0 ; i<n ; i++)
      for(int j=0 ; j<m ; j++)
        {
          cin>> cell[i][j] ;
          if(cell[i][j]=='B') black++ ;
        }
    for(int i=0 ; i<n ; i++)
      for(int j=0 ; j<m ; j++)
        if(cell[i][j]=='B')
          for(int k=0 ; k<n ; k++)
            for(int l=0 ; l<m ; l++)
              if(cell[k][l]=='B')
                a=max({a, abs(k-i), abs(l-j)}) ;
    a++ ;
    if(a>n || a>m)
      {
        cout<< -1 ;
        return 0 ;
      }
    ans=a*a-black ;
    cout<< ans ;
  }
