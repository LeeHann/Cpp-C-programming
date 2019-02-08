#include <bits/stdc++.h>

using namespace std;

int menu[6];

int main()
{
	for(int i=0; i<5; i++) scanf("%d", &menu[i]);
	int burger = 2001;
	for(int i=0; i<3; i++)
	{
		if(burger>=menu[i]) burger=menu[i];
	}
	int drink = 2001;
	for(int i=3; i<5; i++)
	{
		if(drink>=menu[i]) drink=menu[i]; 
	}
	printf("%d", burger+drink-50);
	return 0;
} 
