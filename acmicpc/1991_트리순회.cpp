#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > tree(27);

void preorder(int i){
	printf("%c", i+'A');
	if(tree[i][0] != -1) preorder(tree[i][0]);
	if(tree[i][1] != -1) preorder(tree[i][1]);
}
void inorder(int i){
	if(tree[i][0] != -1) inorder(tree[i][0]);
	printf("%c", i+'A');
	if(tree[i][1] != -1) inorder(tree[i][1]);
}
void postorder(int i){
	if(tree[i][0] != -1) postorder(tree[i][0]);
	if(tree[i][1] != -1) postorder(tree[i][1]);
	printf("%c", i+'A');
}
int main(){
	int n; cin >> n;
	for(int i=0; i<n; i++){
		char n1, n2, n3;
		scanf(" %c %c %c", &n1, &n2, &n3);
		if(n2 == '.'){
			tree[n1-'A'].push_back(-1);
		}
		else tree[n1-'A'].push_back(n2-'A');
		if(n3 == '.'){
			tree[n1-'A'].push_back(-1);
		}
		else tree[n1-'A'].push_back(n3-'A');
	}
	//전위순회
	int i=0;
	preorder(i);
	printf("\n"); 
	//중위순회 
	i=0;
	inorder(i);
	printf("\n");
	//후위순회
	i=0;
	postorder(i);
	 
	
	
	
	return 0;
}
