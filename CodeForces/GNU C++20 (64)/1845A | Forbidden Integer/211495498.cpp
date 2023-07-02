#include <iostream>
#include <algorithm>
#define ll long long
#define nline endl
using namespace std;
void solve()
{
ll n, k, x;
cin >> n >> k >> x;
if (x != 1)
{
cout << "YES" << nline;
cout << n << nline;
for (int i = 1; i < n + 1; i++)
{
cout << 1 << " ";
}
cout << nline;
return;
}
if (n == 1 || k <= 1)
{
cout << "NO" << nline;
return;
}
if (n % 2 == 0)
{
cout << "YES" << nline;
cout << n / 2 << nline;
for (int i = 1; i <= n / 2; i++)
{
cout << 2 << " ";
}
cout << nline;
return;
 
}
if (k > 2)
{
cout << "YES" << nline;
cout << (n - 3) / 2 + 1 << nline;
for (int i = 1; i <= (n - 3) / 2; i++)
{
cout << 2 << " ";
}
cout << 3;
cout << nline;
return;
 
}
cout << "NO" << nline;
}
 
 
int main()
{
    ll t; cin >> t;
    while(t--){
    solve();
    }
 
 
  return 0;
  }
 