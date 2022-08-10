#include <iostream>
#include <vector>
#include <string>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto n = int{ 1 };
	auto ans = vi{};
	while (cin.good() && !cin.eof()) {
		auto s = string{};
		cin >> s;

		if (s.npos != s.find("FBI")) {
			ans.push_back(n);
		}

		++n;
	}

	if (0 == ans.size()) {
		cout << "HE GOT AWAY!";
	}
	else {
		for (const auto& x : ans) {
			cout << x << ' ';
		}
	}

	return 0;
}