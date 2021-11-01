/*
    Some General Advice
    REMEMBER CLEAR GLOBAL STATE
    REMEMBER READ THE PROBLEM STATEMENT AND DON'T SOLVE A DIFFERENT PROBLEM
    remember hidden T factor of 1e2
    read the bounds for stupid cases
    did you restart your editor
    pushing back vectors is garbage, pre-initialize them
    function calls are not free
*/


// GCC Optimizations
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("inline")

#include "bits/stdc++.h"
using namespace std;
using namespace chrono;



// Some basic typedef's for comfort
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;

// #defines for bounds comfort
#define double long double

// #defines for comfort
#define f first
#define s second
#define mp make_pair
#define pb push_back
#define eb emplace_back

// Binary Search comforts
#define lb lower_bound
#define ub upper_bound

// Debugging related comforts
#define debug(x) cout << #x << " is " << x << endl
#define  mset(a,x)      memset(a,x,sizeof(a))
#define  debv(a)        for(auto it: a)cout<<it<<" ";newl;
#define  deb1(a)        cout<<a<<"\n";
#define  deb2(a,b)      cout<<a<<" "<<b<<"\n";
#define  deb3(a,b,c)    cout<<a<<" "<<b<<" "<<c<<"\n";
#define  deb4(a,b,c,d)  cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";

// GODSPEED
#define ENABLEFASTIO() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

// MIN-MAX Customizations
#define min(x,y) ({ __typeof__(x) __var0 = x; __typeof__(y) __var1 = y; __var0 < __var1 ? __var0 : __var1; })
#define max(x,y) ({ __typeof__(x) __var0 = x; __typeof__(y) __var1 = y; __var0 < __var1 ? __var1 : __var0; })

// Traversal related Comforts
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define  uniq(a)  a.resize(unique(a.begin(), a.end()) - a.begin());

// Other Customizations
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(all(container), element) != container.end())

// Templates
template < typename T1, typename T2 > struct pair {
    T1 first;
    T2 second;
};

/**********************************************************************************************************************/
/*********************************************FREQUENTLY USED SUBROUTINES *********************************************/
vector<int> sieve(int n)
{
    int*arr = new int[n + 1]();
    vector<int> vect;
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.push_back(i);
            for (int j = 2 * i; j <= n; j += i)arr[j] = 1;
        }
    return vect;
}
ll gcd(ll a, ll b) {
    if (b > a) {
        return gcd(b, a);
    }
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
ll expo(ll a, ll b, ll mod) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}
void extendgcd(ll a, ll b, ll*v) {
    if (b == 0) {
        v[0] = 1;    //pass an arry of size 3
        v[1] = 0;
        v[2] = a;
        return ;
    }
    extendgcd(b, a % b, v);
    ll x = v[1];
    v[1] = v[0] - v[1] * (a / b);
    v[0] = x;
    return;
}
ll mminv(ll a, ll b) {
    ll arr[3];    //for non prime b
    extendgcd(a, b, arr);
    return arr[0];
}
ll mminvprime(ll a, ll b) {
    return expo(a, b - 2, b);
}
bool revsort(ll a, ll b) {
    return a > b;
}
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}
ll combination(ll n, ll r, ll m, ll* fact) {
    ll val1 = fact[n];
    ll val2 = mminvprime(fact[r], m);
    ll val3 = mminvprime(fact[n - r], m);
    return ((val1 * val2) % m * val3) % m;
}

bool sortBySecond(const std::pair<int,int> &a, const std::pair<int,int> &b)
{
    return (a.second < b.second);
}

/********************************************END OF CUSTOMIZATIONS*****************************************************/
/**********************************************************************************************************************/

#define ONLINE_JUDGE   /* IF not ONLINE_JUDGE Comment this line*/

#ifndef ONLINE_JUDGE
ifstream  i_data("../io/data.in");
ofstream  o_data("../io/data.out");
#define cin  i_data
#define cout o_data
#else
#endif

void solve()
{

}

int main()
{
    ENABLEFASTIO();
    auto start1 = high_resolution_clock::now();
    int T;
    cin>>T;
    while(T--) solve();
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifndef ONLINE_JUDGE
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC <<" secs"<<endl;
#endif
    return 0;
}
