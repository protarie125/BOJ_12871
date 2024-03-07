#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

string s, t;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> s >> t;

  auto pos = ostringstream{};
  for (auto i = 0; i < t.length(); ++i) {
    pos << s;
  }
  const auto& p1 = static_cast<string>(pos.str());

  auto qos = ostringstream{};
  for (auto i = 0; i < s.length(); ++i) {
    qos << t;
  }
  const auto& q1 = static_cast<string>(qos.str());

  cout << (p1 == q1 ? 1 : 0);

  return 0;
}