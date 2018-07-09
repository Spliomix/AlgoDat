
#include<iostream>
#include<string>
#include <math.h>
using namespace std;
int main() {
	int in;
	int test_cases = 0;
	std::string out;
	bool flag = true;
	cin >> test_cases;
	while (test_cases-- >0) {
		cin >> in;


		for (int elem = 2; elem < sqrt(in); ++elem) {
			if (!(((in * 10000) / elem) % 10000))
			{
				out = out + "no";
				flag = false;
				break;
			}
		}
		if (flag)
			out = out + "yes";
		flag = true;

		out = out + "\n";
	}


	cout << out;
	while (1);
	return 0;
}
