#include <algorithm>
#include <climits>
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

void solve() {
  int n, k, x;
  cin >> n >> k >> x;

  // Case 1: 1 is allowed
  if (x != 1) {
    cout << "YES\n";
    cout << n << "\n";
    for (int i = 0; i < n; i++) {
      cout << 1 << " ";
    }
    cout << "\n";
    return;
  }

  // Case 2: 1 is forbidden
  if (k == 1) {
    cout << "NO\n";
    return;
  }

  // Only 2 is usable
  if (k == 2) {
    if (n % 2 == 1) {
      cout << "NO\n";
      return;
    }
    cout << "YES\n";
    cout << n / 2 << "\n";
    for (int i = 0; i < n / 2; i++) {
      cout << 2 << " ";
    }
    cout << "\n";
    return;
  }

  // k >= 3 and x == 1 → use 2 and 3
  cout << "YES\n";

  if (n % 2 == 0) {
    cout << n / 2 << "\n";
    for (int i = 0; i < n / 2; i++) {
      cout << 2 << " ";
    }
  } else {
    cout << (n - 3) / 2 + 1 << "\n";
    cout << 3 << " ";
    for (int i = 0; i < (n - 3) / 2; i++) {
      cout << 2 << " ";
    }
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
