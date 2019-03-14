#include <bits/stdc++.h>
using namespace std;
struct member
{
	int age;
	char name[101];
	int ord;
};
struct member mem[100001];
bool comp1(const member&lhs, const member&rhs)
{
	if (lhs.age == rhs.age)
	{
		return lhs.ord < rhs.ord;
	}
	return lhs.age < rhs.age;
}
int main()
{
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{
		scanf("%d %s", &mem[i].age, mem[i].name);
		mem[i].ord=i;
	}
	sort(mem, mem+n, comp1);
	for (int i=0; i<n; i++)
	{
		printf("%d %s\n", mem[i].age, mem[i].name);
	}
	return 0;
}
