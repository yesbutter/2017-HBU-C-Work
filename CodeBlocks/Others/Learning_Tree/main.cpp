#include<iostream>
#include<vector>
#include<map>

using namespace std;

//int v[100000][1000];

int main()
{
	int n, t,cnt=0,tmp;
	map<int, int> m;
	vector<vector<int>> v2;
	while (cin >> n >> t)
	{
		cnt = 0, m.clear(),v2.clear();
		for (int i = 1; i <= n; i++)
		{
			cin >> tmp;
			if (m[tmp] == 0)
			{
				vector<int> v;
				m.insert(tmp,cnt);
				v.push_back(i);
				v2.push_back(v);
			}
			else
			{
				int position = m[tmp];
				v2[position].push_back(i);
			}
		}

		for (int i = 1,a,b; i <= t; i++)
		{
			cin >> a >> b;
			if (m[a] != 0)
			{
				int position = m[a];
				if (v2[position].size() <= b)
				{
					cout << v2[position][b] << endl;
				}
				else
				{
					cout << 0 << endl;
				}
			}
			else
			{
				cout << 0 << endl;
			}
		}
	}
	return 0;
}
