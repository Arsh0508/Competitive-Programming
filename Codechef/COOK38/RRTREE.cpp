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

const int N=200000+100 ;

int n, q, u, v, r, x, v1, v2, dia, par[N], depth[N], dp[N][30] ;
vvi adj(N) ;

void init()
  {
    memset(depth, 0, sizeof depth) ;
    memset(par, 0, sizeof par) ;
    memset(dp, 0, sizeof dp) ;
    for(int i=1 ; i<=n ; i++) adj[i].clear() ;
    v1=v2=1 ;
    dia=0 ;
  }

void dfs(int u, int p=1, int d=0)
  {
    depth[u]=d ;
    par[u]=p ;
    for(auto v:adj[u]) if(v!=p) dfs(v, u, d+1) ;
  }

void process()
  {
    for(int i=1 ; i<=n ; i++) dp[i][0]=par[i] ;
    for(int j=1 ; (1<<j)<n ; j++)
      for(int i=1 ; i<=n ; i++)
        if(dp[i][j-1])
          dp[i][j]=dp[dp[i][j-1]][j-1] ;
  }

void add(int u, int p)
  {
    par[u]=p ;
    depth[u]=depth[par[u]]+1 ;
    dp[u][0]=par[u] ;
    for(int j=1 ; (1<<j)<n ; j++)
      if(dp[u][j-1])
        dp[u][j]=dp[dp[u][j-1]][j-1] ;
  }

int lca(int u, int v)
  {
    int L=1 ;
    if(depth[u]<depth[v]) swap(u, v) ;
    while((1<<L)<=depth[u]) L++ ;
    L-- ;
    for(int i=L ; i>=0 ; i--)
      if(depth[u]-(1<<i)>=depth[v])
        u=dp[u][i] ;
    if(u==v) return u ;
    for(int i=L ; i>=0 ; i--)
      if(dp[u][i] && dp[u][i]!=dp[v][i])
        u=dp[u][i], v=dp[v][i] ;
    return par[u] ;

  }

int dist(int u, int v)
  {
    int x=lca(u, v) ;
    int d=depth[u]+depth[v]-2*depth[x] ;
    return d ;
  }

void update(int u, int p)
  {
    add(u, p) ;
    int d1=dist(u, v1) ;
    int d2=dist(u, v2) ;
    if(d1>dia) dia=d1, v2=u ;
    else if(d2>dia) dia=d2, v1=u ;
  }

int main()
  {
    ios_base::sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0) ;
    int T ;
    cin>> T ;
    for(int tc=1 ; tc<=T ; tc++)
      {
        cin>> n ;
        init() ;
        par[1]=0 ;
        for(int i=2 ; i<=n ; i++)
          {
            cin>> x ;
            update(i, x) ;
            cout<< dia << endl ;
          }
      }
  }
