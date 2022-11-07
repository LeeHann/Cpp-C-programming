#include <stdio.h>
#include <string.h>
int _queue[10001];
int f = 0, r = -1;

void _push(int item){
	r++;
	_queue[r] = item;
}
int _pop(){
	int tmp = f;
	if(r-f>=0){
		f++;
		return _queue[tmp];
	}
	else return -1;
}
int _size(){
	return r-f+1;
}
int _empty(){
	if(r-f>=0) return 0;
	else return 1;
}
int _front(){
	if(r-f>=0) return _queue[f];
	else return -1;
}
int _back(){
	if(r-f>=0) return _queue[r];
	else return -1;
}

int main(){
	int n, num;
	char com[6];
	scanf(" %d", &n);
	
	while(n--){
		scanf(" %s", com);
		if(!strcmp(com, "push")){
			scanf(" %d", &num);
			_push(num);
		}
		else if(!strcmp(com, "pop")){
			printf("%d\n", _pop());
		}
		else if(!strcmp(com, "size")){
			printf("%d\n", _size());
		}
		else if(!strcmp(com, "empty")){
			printf("%d\n", _empty());
		}
		else if(!strcmp(com, "front")){
			printf("%d\n", _front());
		}
		else if(!strcmp(com, "back")){
			printf("%d\n", _back());
		}
	}
	return 0;
}
