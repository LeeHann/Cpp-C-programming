#include <bits/stdc++.h>
using namespace std;

#define MAX 2005

int _queue[MAX];
int front=0, rear=-1;

void _push(int num)
{
	rear++;
	_queue[rear] = num;
}

int _pop()
{
	if(front <= rear)
	{
		int tmp = _queue[front];
		front++;
		return tmp;
	}
	return 0;
}

bool empty()
{
	if(rear >= front) return false;
	return true;
}

int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, k; cin >> n >> k;
	int cnt = 0;

	for(int i=1; i<=n; i++) _push(i);

	cout << "<";
	while(!empty())
	{
		for(int i=0; i<k-1; i++)
		{
			_push(_queue[front]);
			_pop();
		}
		cout << _pop();
		cnt++;
		if(cnt <= n-1) cout << ", ";
	}
	cout << ">";
	return 0;
}