#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
double fact(int c)
{
	if (c == 1)
		return 1;
	else return c*fact(c - 1);
}
int main() {
	string s;
getline(cin,s);
	int len = s.length();
	vector<char>v;
	for (int i = 0; i < len; i++)
	{
		v.push_back(s[i]);

	}
	//v.push_back(s);
	//sort(s, s+len);
sort(v.begin(), v.end());
int c = 1;
long int res = fact(len);
for (int i = 0; i < len-1; i++)
{
	if (v[i] == v[i + 1])
	{
		c++;

	}
	else res /= fact(c), c = 1;
	

}
res /= fact(c);
cout << res << endl;
	system("pause");
	return 0;
}