#include <iostream>
#include <map>
#include <unordered_map>
#include <queue>
#include <algorithm>

bool canItemBeSold(std::unordered_map<char, int>& stock, char key) {
	if (key == 'A' && stock.find('E')->second >= 2) {
		stock['E'] -= 2;
		return true;
	} else if (key == 'B' && stock.find('H')->second >= 3) {
		stock['H'] -= 3;
		return true;
	} else if (key == 'C' && (stock.find('E')->second >= 1 && stock.find('H')->second >= 1)) {
		stock['E'] -= 1;
		stock['H'] -= 1;
		return true;
	} else {
		return false;
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int T;
	std::cin >> T;

	while (T--) {
		int N, E, H, A, B, C, N_CPY;
		std::cin >> N >> E >> H >> A >> B >> C;
		N_CPY = N;

		using Item = std::pair<char, int>;
		std::vector<Item> items{
			{'A', A},
			{'B', B},
			{'C', C}
		};

		std::unordered_map<char, int> stock{
			{'E', E},
			{'H', H}
		};

		std::sort(items.begin(), items.end(), [](Item a, Item b) {
			return a.second < b.second;
		});

		int total = 0;
		int count = 0;
		while (N--) {
			for (int i = 0; i < (int)items.size(); ++i) {
				if (canItemBeSold(stock, items[i].first)) {
					total += items[i].second;
					count += 1;
					break;
				}
			}
		}

		if (total == 0 || count != N_CPY) {
			std::cout << -1 << '\n';
		} else {
			std::cout << total << '\n';
		}
	}

	return 0;
}