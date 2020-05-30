#include <bits/stdc++.h> 
using namespace std; 
  
 int R ; 
 int C; 
   int v[600][600] ; 
bool issafe(int i, int j) 
{ 
    if (i >= 0 and i < R and j >= 0 and j < C) 
        return true; 
    return false; 
} 
  
int rotOranges() 
{ 
    bool changed = false; 
    int no = 2; 
    while (true) { 
        for (int i = 0; i < R; i++) { 
            for (int j = 0; j < C; j++) { 
  
                // (i+1, j), (i, j-1), (i, j+1), (i-1, j) 
                if (v[i][j] == no) { 
                    if (issafe(i + 1, j) and v[i + 1][j] == 1) { 
                        v[i + 1][j] = v[i][j] + 1; 
                        changed = true; 
                    } 
                    if (issafe(i, j + 1) and v[i][j + 1] == 1) { 
                        v[i][j + 1] = v[i][j] + 1; 
                        changed = true; 
                    } 
                    if (issafe(i - 1, j) and v[i - 1][j] == 1) { 
                        v[i - 1][j] = v[i][j] + 1; 
                        changed = true; 
                    } 
                    if (issafe(i, j - 1) and v[i][j - 1] == 1) { 
                        v[i][j - 1] = v[i][j] + 1; 
                        changed = true; 
                    } 
                } 
            } 
        } 
  
        if (!changed) 
            break; 
        changed = false; 
        no++; 
    } 
  
    for (int i = 0; i < R; i++) { 
        for (int j = 0; j < C; j++) { 
  
            if (v[i][j] == 1) 
                return -1; 
        } 
    } 
  
    return no - 2; 
} 
  
int main() 
{ 
    cin>>R>>C;
   
  for(int i=0;i<R;i++) for(int j=0;j<C;j++) cin>>v[i][j];
    cout << rotOranges(); 
  
    return 0; 
} 