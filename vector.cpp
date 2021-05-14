/*
	vector<int>v(10,6);
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int>v2;
	v2.push_back(12);
	v2.push_back(15);
	v2.push_back(16);
	v2.push_back(30);
	cout << v2[0]<<endl;
	v2.erase(v2.begin());
	cout << v2[0];
	return 0;
}

