#include <bits/stdc++.h> 
using namespace std; 
  
int ROW ;
int COL ;
  
// A function to check if a given 
// cell (row, col) can be included in DFS 
int isSafe(vector<int> M[], int row, int col, 
           vector<bool> visited[]) 
{ 
    // row number is in range, column 
    // number is in range and value is 1 
    // and not yet visited 
    return (row >= 0) && (row < ROW) && (col >= 0) && (col < COL) && (M[row][col] && !visited[row][col]); 
} 
  
// A utility function to do DFS for a 
// 2D boolean matrix. It only considers 
// the 8 neighbours as adjacent vertices 
void DFS(vector<int> M[], int row, int col, 
         vector<bool> visited[]) 
{ 
    // These arrays are used to get 
    // row and column numbers of 8 
    // neighbours of a given cell 
    static int rowNbr[] = { -1, -1, -1, 0, 0, 1, 1, 1 }; 
    static int colNbr[] = { -1, 0, 1, -1, 1, -1, 0, 1 }; 
  
    // Mark this cell as visited 
    visited[row][col] = true; 
  
    // Recur for all connected neighbours 
    for (int k = 0; k < 8; ++k) 
        if (isSafe(M, row + rowNbr[k], col + colNbr[k], visited)) 
            DFS(M, row + rowNbr[k], col + colNbr[k], visited); 
} 
  
// The main function that returns 
// count of islands in a given boolean 
// 2D matrix 
int countIslands(vector<int> M[]) 
{ 
    // Make a bool array to mark visited cells. 
    // Initially all cells are unvisited 
    vector<bool> visited[ROW]; 
    // memset(visited, 0, sizeof(visited)); 
    for(int i=0;i<ROW;i++)  visited[i].resize(COL);
  
    // Initialize count as 0 and 
    // travese through the all cells of 
    // given matrix 
    int count = 0; 
    for (int i = 0; i < ROW; ++i) 
        for (int j = 0; j < COL; ++j) 
  
            // If a cell with value 1 is not 
            if (M[i][j] && !visited[i][j]) { 
                // visited yet, then new island found 
                // Visit all cells in this island. 
                DFS(M, i, j, visited); 
  
                // and increment island count 
                ++count; 
            } 
  
    return count; 
} 
  
// Driver code 
int main() 
{ 
    int t;cin>>t;
    while(t--){
         cin>>ROW>>COL;
         vector<int> M[ROW];
        for(int i=0;i<ROW;i++)
        for(int j=0;j<COL;j++) {
            int temp; cin>>temp;
            M[i].push_back(temp);
        }
        cout << countIslands(M)<<endl; 
    }
    // i = { { 1, 1, 0, 0, 0 }, 
    //                  { 0, 1, 0, 0, 1 }, 
    //                  { 1, 0, 0, 1, 1 }, 
    //                  { 0, 0, 0, 0, 0 }, 
    //                  { 1, 0, 1, 0, 1 } }; 
  
  
    return 0; 
} 