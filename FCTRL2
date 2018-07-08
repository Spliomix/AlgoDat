
#include<iostream>
#include<vector>

using namespace std;
int main() {
	int in = 0;
	int test_cases = 0;
	int sum = 1;
	int tmp = 0;
	vector<vector<int>>res_v;
	vector<int>v_ptr{ 1 };

	cin >> test_cases;
	while (test_cases >0) {
		cin >> in;
		while(in>=++sum){//Berechnung
			int val = 0;
			for (size_t i = 0; i < v_ptr.size(); ++i) {
				if ((v_ptr.at(i)*sum + tmp) > 9) {
					val = (v_ptr.at(i)*sum + tmp) / 10;
					if (i == v_ptr.size() - 1) {
						v_ptr.push_back(0);
						if ((v_ptr.at(i)*sum + tmp) > 99)
							v_ptr.push_back(0);
					}
				}
				else
					val = 0;
					v_ptr.at(i) = (v_ptr.at(i)*sum+tmp)%10;
					tmp = val;
			}
			tmp = 0;
		}
		
		res_v.push_back(v_ptr);
		v_ptr.clear();
		v_ptr.push_back(1);
		sum = 0;
		--test_cases;
	}
	if(!v_ptr.empty() && !res_v.empty())
		for (auto &el : res_v) {
			for (auto it=--(el.end());it!=el.begin();--it)
				cout << *it;
			cout << *el.begin()<<"\n";
		}
	while (1);
	return 0;
}
