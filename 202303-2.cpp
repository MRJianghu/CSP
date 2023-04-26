#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

typedef struct Map{
	int ci, ti;
}Map;
Map mp[100001];
	
bool cmp(const Map& a, const Map& b) {
	return a.ti > b.ti; // 按照 ci 升序排序
}

int main()
{
	int n, m, k;
	int minTi = 99999;
	cin >> n >> m >> k;
	for(int i = 0; i < n; i++) {
		cin >> mp[i].ti >> mp[i].ci;
	}
	
	while(true) {
		//找到ti最大的 
		sort(mp, mp + n, cmp);d
		//检查k 若最大的ti已经达到了k，那么已经不能再减小了 
		if(mp[0].ti <= k) {
			break;
		}
		m -= (mp[0].ci);
		if(m < 0) {
			break;
		} else {
			mp[0].ti -= 1;
		}
	}
	cout << mp[0].ti;
	return 0;
}