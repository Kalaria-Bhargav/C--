/*
@authors ${1:MAGNETO}
@date    ${date}
*/

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
//#include <ext/pb_ds/assoc_container.hpp> // Common file
//#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update

//using namespace __gnu_pbds;
//template<class T> using ordered_set = tree<T, null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update>;

using namespace std; 

#define FAST ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define endl                '\n'
#define ll                  long long
#define pb                  push_back
#define ppb                 pop_back
#define pf                  push_front
#define ppf                 pop_front
#define all(x)              (x).begin(),(x).end()
#define uniq(v)             (v).erase(unique(all(v)),(v).end())
#define sz(x)               (int)((x).size())
#define F                  first
#define S                  second
#define pii                 pair<int,int>
#define pll                 pair<long long, long long>
#define rep(i,a,b)          for(auto i=a;i<b;i++)
#define rev(i,a,b)          for(auto i=a;i>=b;i--)
#define mem1(a)             memset(a,-1,sizeof(a))
#define mem0(a)             memset(a,0,sizeof(a))
#define debug(x)            cerr << #x << " = " << x << endl;
#define debug2(x, y)        {cerr <<#x<<" = " <<x<<", "<<#y <<" = " <<y <<"\n";}
#define debug3(x, y, z)     {cerr <<#x<<" = " <<x<<", "<<#y <<" = " <<y <<", "<<#z<<" = "<<z<<"\n";}
#define debug4(x, y, z, w)  {cerr <<#x<<" = " <<x<<", "<<#y <<" = " <<y <<", "<<#z<<" = "<<z<<", "<<#w << " = " <<w <<"\n";}
#define ppc                 __builtin_popcount
#define ppcll               __builtin_popcountll
#define lcm(a,b)            a*b/__gcd(a,b)

//__builtin_popcount = int
//__builtin_popcountl = long int
//__builtin_popcountll = long long

template<typename T ,typename T2>
auto _min ( T a , T2 b ) { return a > b ? b : a ; }
template < typename T ,  typename... Ts >
 auto _min( T first , Ts... last ){ return  _min(first, _min(last...)); }

template<typename T, typename T2 >
auto _max ( T a , T2 b ) { return a < b ? b : a ; }
template < typename T ,  typename... Ts > 
auto _max( T first , Ts... last ){ return  _max(first, _max(last...)); }

template<class T,typename T1>void amax(T &a,T1 b){if(b>a)a=b;}
template<typename T,typename T1>void amin(T &a,T1 b){if(b<a)a=b;}

template<class T, class S> std::ostream& operator<<(std::ostream &os, const std::pair<T, S> &t) {
  os<<"("<<t.first<<",   "<<t.second<<")";
  return os;
}
template<typename T> ostream& operator<< (ostream& out, const vector<T>& v) {
	out << "["; size_t last = v.size() - 1; for(size_t i = 0; i < v.size(); ++i) {
	out << v[i]; if (i != last) out << ", "; } out << "]"; return out;
}

void solve()
{

}

int32_t main()
{
FAST
int T=1;
cin>>T;
/*
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r+", stdin);
#endif
*/
while(T--)
{
solve();
}
// cout << "\n\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " Sec\n";
}
