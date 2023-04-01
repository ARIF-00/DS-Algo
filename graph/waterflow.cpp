#include<bits/stdc++.h>
using namespace std;

int Solution::solve(vector<vector<int> > &A) {
    int row=A.size();
    int column=A[0].size();
    

    vector<vector<bool>> red(row , vector<bool>(column,false));
    vector<vector<bool>> blue(row , vector<bool>(column,false));


    // insert the location of visited element in matrix from blue river as well as red river and then the common i,j elements are the answer
    queue<pair<int,int>> qblue,qred;

    for(int i=0 ; i<row ; i++){

        for(int j=0;i<column;j++){
            if(i==0 || j==0){
                qblue.push({i,j});
                blue[i][j]=true;
            }
            if(i==row-1 || j==column-1){
                qred.push({i,j});
                red[i][j]=true;
            }

        }
    }

    int dx[4]={1,-1,0,0}; //to explore in x direction i.e left or right
    int dy[4]={0,0,-1,1};// to exlplore up or down

    bfs(queue<pair<int,int>> &q, vector<vector<bool>> &vis,int &row, int &column,vector<vector<int>> &matrix){
        while(!q.empty()){
                
                // store the i and j value 
                int x=q.front().first;
                int y=q.front().second;
                q.pop();

                // we have to explore all the four sides of that element and store the new side in new x and y location
                
                for(int i=0;i<4;i++){
                    int newx=x+dx[i];
                    int newy=y+dy[i];

                    if(newx < 0 || newy < 0 || newx >= row || newy >= column || vis[newx][newy]==true)
                    continue;

                    if(matrix[x][y] <= matrix[newx][newy]){
                        vis[newx][newy]=true;
                        q.push({newx,newy});
                    }
                }
        }

     }

     bfs(qblue,blue,row,column,A);
     bfs(qred,red,row,column,A);

     int count=0;
     for(int i=0;i<row;i++){
         for(int j=0;j<coumn;j++){
             if(red[i][j]==true && blue[i][j]==true)
             count++;
         }
     }
     
    return count;
     
}


