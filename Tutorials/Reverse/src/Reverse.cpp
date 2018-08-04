#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

int main()
{
	std::vector<double> v;

	double d;

	std::cout << "Enter a sequence of numbers:" << std::endl;
	while (std::cin >> d)
	{
		v.push_back(d);
	}
	if (!std::cin.eof()) {
		std::cin.clear();
		std::string s;
		std::cin >> s;
		if (s != "end") {
					std::cerr << "format error!" << std::endl;
		return 1;
		}
	}

	std::cout << "Read " << v.size() << " elements." << std::endl;

	std::reverse(v.begin(), v.end());
	std::cout << "Elements in reverse order:" << std::endl;
	for (int i = 0; i < v.size(); ++i) {
		std::cout << v[i] << std::endl;
	}

	return 0;
}