/**
 * File              : check_file_op.cpp
 * Author            : cppygod
 * Date              : 07.07.2022
 * Last Modified Date: 09.07.2022
 * Last Modified By  : cppygod
 */
/*
    செயல் பேசும் ஆழம் இங்கே சொற்கள் பேசுமா?
    Focus, Determination and Sheer-Will
    The woods are lovely, dark and deep,
    But I have promises to keep,
    And miles to go before I sleep,
    And miles to go before I sleep.

    -------------------------------------------------------------------------
    REMEMBER CLEAR GLOBAL STATE
    REMEMBER READ THE PROBLEM STATEMENT AND DON'T SOLVE A DIFFERENT PROBLEM
    remember hidden T factor of 1e2
    Read the bounds for stupid cases
    Pushing back vectors is garbage, pre-initialize them
    Function calls are not free
*/



#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif


#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <sys/stat.h>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif

using namespace std;
#define ENABLEFASTIO() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

/**********************************************************************************************************************/
// Type related comforts

#define endl "\n"
#define int long long
#define double long double

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;


/**********************************************************************************************************************/
// Some short-hands

#define f first
#define s second
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define lb lower_bound
#define ub upper_bound

/**********************************************************************************************************************/
// Frequently used for debugging

inline bool fileExists (const std::string& name)
{
    struct stat buffer;
    return (stat (name.c_str(), &buffer) == 0);
}

template<typename T>
void print(std::vector<T> const &v)
{
    if(fileExists("data.in"))
    {
        for (auto i: v) {
            cout << i << ' ';
        }
        cout << endl;
    }
}

template<typename T>
void debug(const T& msg)
{
    if(fileExists("data.in"))
    {
        cout << msg << endl;
    }
}

void debug2()
{
    if(fileExists("data.in"))
    {
        cout << "---------------------------------" << endl;
    }
}

void debug3()
{
    if(fileExists("data.in"))
    {
        cout << "*********************************" << endl;
    }
}

#define  mset(a,x)      memset(a,x,sizeof(a))
#define  debv(a)        for(auto it: a)cout<<it<<" ";newl;
#define  deb1(a)        cout<<a<<"\n";
#define  deb2(a,b)      cout<<a<<" "<<b<<"\n";
#define  deb3(a,b,c)    cout<<a<<" "<<b<<" "<<c<<"\n";
#define  deb4(a,b,c,d)  cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";


/**********************************************************************************************************************/

// Sub-routine comforts

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define  uniq(a)  a.resize(unique(a.begin(), a.end()) - a.begin());
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(all(container), element) != container.end())


/**********************************************************************************************************************/
// Template Sections

template < typename T1, typename T2 > struct pair {
    T1 first;
    T2 second;
};

template<typename T>
std::vector<T> slices(std::vector<T> const &v, int m, int n)
{
    auto first = v.cbegin() + m;
    auto last = v.cbegin() + n + 1;
    std::vector<T> vec(first, last);
    return vec;
}

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

ll gcd(ll a, ll b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

ll expo(ll a, ll b, ll mod)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}

void extendgcd(ll a, ll b, ll*v)
{
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

bool revsort(ll a, ll b)
{
    return a > b;
}

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

bool sortBySecond(const std::pair<int,int> &a, const std::pair<int,int> &b)
{
    return (a.second < b.second);
}

/********************************************END OF CUSTOMIZATIONS*****************************************************/

#define ONLINE_JUDGE   /* IF not ONLINE_JUDGE Comment this line*/

#ifndef ONLINE_JUDGE
ifstream  i_data("data.in");
ofstream  o_data("data.out");
#define cin  i_data
#define cout o_data
#else
#endif


void solve()
{
    debug("In Solve function");

}

void main2()
{
    solve();
    debug2();
}

int32_t main()
{
    ENABLEFASTIO();
    int T = 1;
    while(T--) main2();
    return 0;
}
