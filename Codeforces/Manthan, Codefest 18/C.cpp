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
    int n, ans=0 ;
    string a, b ;
    cin>> n >> a >> b ;
    for(int i=0 ; i<n-1 ; i++)
      if((a[i]=='0' && a[i+1]=='1' && b[i]=='1' && b[i+1]=='0') || (a[i]=='1' && a[i+1]=='0' && b[i]=='0' && b[i+1]=='1'))
        swap(b[i], b[i+1]), ans++ ;
    for(int i=0 ; i<n ; i++) if(a[i]!=b[i]) ans++ ;
    cout<< ans ;
  }
