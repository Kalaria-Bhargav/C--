/*
@authors __BHARAV__
@date    2021-03-02 09:19:17
*/
#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
#define l long int
#define f(i, a, b) for(int i=a; i<b; i++)
#define fr(i, a, b) for(int i=a; i>=b; i--)
#define endl '\n'
#define pb push_back
#define pf pop.front()
#define all(x) x.begin(),x.end()
#define debug(x)           cerr << #x << " = " << x << endl;
#define debug2(x, y)       {cerr <<#x<<" = " <<x<<", "<<#y <<" = " <<y <<"\n";}
#define debug3(x, y, z)    {cerr <<#x<<" = " <<x<<", "<<#y <<" = " <<y <<", "<<#z<<" = "<<z<<"\n";}
#define debug4(x, y, z, w) {cerr <<#x<<" = " <<x<<", "<<#y <<" = " <<y <<", "<<#z<<" = "<<z<<", "<<#w << " = " <<w <<"\n";}
#define lcm(a,b) a*b/__gcd(a,b)
//__builtin_popcount = int
//__builtin_popcountl = long int
//__builtin_popcountll = long long
using namespace std;

template<typename T >T min_ ( T a , T b ) { return a > b ? b : a ; }
template < typename T ,  typename... Ts > T min_( T first , Ts... last ){ return  min_(first, min_(last...)); }


template<class T, class S> std::ostream& operator<<(std::ostream &os, const std::pair<T, S> &t) {
  os<<"("<<t.first<<", "<<t.second<<")";
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
l T=1;
cin>>T;
while(T--)
{
solve();
}
}








