#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, grade;
	char name[10];
	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{
		scanf("%s ", name);
		scanf(" %d", &grade);
		if (grade>=97) cout<<name<<" A+"<<endl;
		else if (grade>=90 && grade<97) cout<<name<<" A"<<endl;
		else if (grade>=87 && grade<90) cout<<name<<" B+"<<endl;
		else if (grade>=80 && grade<87) cout<<name<<" B"<<endl;
		else if (grade>=77 && grade<80) cout<<name<<" C+"<<endl;
		else if (grade>=70 && grade<77) cout<<name<<" C"<<endl;
		else if (grade>=67 && grade<70) cout<<name<<" D+"<<endl;
		else if (grade>=60 && grade<67) cout<<name<<" D"<<endl;
		else cout<<name<<" F"<<endl;
	}
	return 0;
}
