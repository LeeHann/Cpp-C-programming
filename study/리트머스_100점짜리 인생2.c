#include <stdio.h>
#include <string.h>

struct word
{
	char word1[11];
	int score;
};

int main()
{
	int i, n, sum, j, temp;
	struct word _word[11];
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		scanf(" %s", _word[i].word1);
		sum=0;
		for(j=0; j<strlen(_word[i].word1); j++)
		{
			temp = (int)_word[i].word1[j];//¾ËÆÄºªÀ» ¼ýÀÚ·Î ¹Ù²Û´Ù 
			temp-=96;
			sum+=temp;
		}
		_word[i].score = sum;
	}
	scanf("%d", &i);
	printf("%d", _word[i].score);
	return 0;
}
