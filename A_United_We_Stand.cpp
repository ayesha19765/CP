#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define fixed(n) fixed << setprecision(n)
#define ceil(n, m) (((n) + (m) - 1) / (m))
#define add_mod(a, b, m) (((a % m) + (b % m)) % m)
#define sub_mod(a, b, m) (((a % m) - (b % m) + m) % m)
#define mul_mod(a, b, m) (((a % m) * (b % m)) % m)
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(x) int(x.size())
#define debug(x) cout << #x << ": " << (x) << "\n";
#define fi first
#define se second
#define ll long long
#define ull unsigned long long
#define EPS 1e-9
constexpr int INF = 1 << 30, Mod = 1e9 + 7;
constexpr ll LINF = 1LL << 62;
#define PI acos(-1)
template <typename T = int> using Pair = pair<T, T>;
vector<string> RET = {"NO", "YES"};

template <typename T = int> istream &operator>>(istream &in, vector<T> &v) {
  for (auto &x : v)
    in >> x;
  return in;
}

template <typename T = int>
ostream &operator<<(ostream &out, const vector<T> &v) {
  for (const T &x : v)
    out << x << ' ';
  return out;
}

void Solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  cin >> a;
  sort(a.begin(), a.end());
  if (a[0] == a[n - 1]) {
    cout << -1 << "\n";
    return;
  }

  int cnt = 1;

  while (cnt < n && a[cnt] == a[0]) {
    cnt++;
  }
  cout << cnt << " " << n - cnt << "\n";

  for (int i = 0; i < cnt; i++) {
    cout << a[i] << " ";
  }
  cout << "\n";
  for (int i = cnt; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << "\n";
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  int test_cases;
  cin >> test_cases;
  for (int tc = 1; tc <= test_cases; tc++) {
    // cout << "Case #" << tc << ": ";
    Solve();
  }
  return 0;
}
/*
6
3
4 6 3
4 6 3 3
3
1 2 3

5
1 7 9 5 7
1
144
2
1 1
5
1 2 2 1 1
*/
