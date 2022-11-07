#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *file;
	char ch;
	char filename[10];
	gets(filename);
	file = fopen(filename, "r+");
	while(fread(&ch, 1, 1, file)!=0)
		fwrite(&ch, 1, stdout);
	fclose(file);
	return 0;
} 
