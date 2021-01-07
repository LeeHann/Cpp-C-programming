#include <bits/stdc++.h>
using namespace std;
struct student
{
	char name[11];
	int lng, eng, mth;
};
student stu[100001];
bool comp1(const student&a, const student&b)
{
	
	if (a.lng == b.lng)
	{
		if (a.eng == b.eng)
		{
			if (a.mth == b.mth)
			{
				for (int j=0; j<strlen(a.name); j++)
				{
					if (a.name[j] ==b.name[j]) continue;
					return a.name[j] < b.name[j];
				}
			}
			return a.mth > b.mth;
		}
		return a.eng < b.eng;
	}
	return a.lng > b.lng;
}
int main()
{
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{
		scanf("%s %d %d %d", &stu[i].name, &stu[i].lng, &stu[i].eng, &stu[i].mth);
	}
	sort(stu, stu+n, comp1);
	for (int i=0; i<n; i++)
	{
		printf("%s\n", stu[i].name);
	}
	return 0;
}
