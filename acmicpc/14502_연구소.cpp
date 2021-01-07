#include <bits/stdc++.h>
using namespace std;
int n, m, wall=0, ans=0;
int num[9][9], ck[9][9];
int dy[4] = {0, 0, 1, -1};
int dx[4] = {1, -1, 0, 0};
vector<pair<int, int> > v;

void bfs(){
   int cnt = 0;
   queue<pair<int, int> > q;
   for(int i=0; i<v.size(); i++){
      q.push({v[i].first, v[i].second});
   }
   
   memset(ck, 0, sizeof(ck));
   
   while(!q.empty()){
      int y = q.front().first, x = q.front().second;
      q.pop();
      ck[y][x] = 1;
      for(int i=0; i<4; i++){
         int nx = x+dx[i], ny = y+dy[i];
         if(nx >= m || nx < 0 || ny >= n || ny < 0) continue;
         if(num[ny][nx] || ck[ny][nx]) continue;
         ck[ny][nx] = 1;
         q.push({ny, nx});
      }
      cnt++;
   }
   ans = max(ans, n*m - cnt - wall);
}

void f(int pos, int y, int x){
   if(pos==3){//벽을 3개 쳤다면 
      bfs(); return;
   }
   
   for(int i=y; i<n; i++){
      for(int j=x; j<m; j++){
         if(!num[i][j]){
            num[i][j] = 1;
            f(pos+1, i, j+1);
            num[i][j] = 0;
         }
      }
      x = 0;
   }
}

int main(){
   ios_base::sync_with_stdio(NULL);
   cin.tie(NULL);
   cout.tie(NULL);
   
   cin >> n >> m;
   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         cin >> num[i][j];
         if(num[i][j] == 2)
            v.push_back({i, j});
         if(num[i][j] == 1)
            wall++;
      }
   }
   wall+=3;
   f(0, 0, 0);
   cout << ans << "\n";
   return 0;
}
