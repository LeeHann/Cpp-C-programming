#include <bits/stdc++.h>
using namespace std;
struct pnt
{
	int x;
	int y;
};
struct pnt xy[100001];
bool comp (const pnt&a, const pnt&b)
{
	if (a.y == b.y)
	{
		return a.x < b.x;
	}
	return a.y < b.y;
}
int main()
{
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++) scanf("%d%d", &xy[i].x, &xy[i].y);
	sort(xy, xy+n, comp);
	for (int i=0; i<n; i++) printf("%d %d\n", xy[i].x, xy[i].y);
	return 0;
}
