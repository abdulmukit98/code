#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define null NULL
#define pi acos(-1)

int land[25][25];
int land_row, land_col;
bool visited[25][25];
void dfs(int row, int col);
int counter;

int main() {
    /*
        lightOJ 1012 guilty prince

        Each time the prince can move to a new cell from his current position if they share a side.
        4 side

              ^
              |
           <- 0 ->
              |
              v

        |----------|--------|----------|
        | i-1, j-1 | i-1, j | i-1, j+1 |
        |----------|--------|----------|
        | i, j-1   | i, j   | i, j+1   |
        |----------|--------|----------|
        | i+1, j-1 | i+1, j | i+1, j+1 |
        |----------|--------|----------|


     */

    int test; scanf("%d",&test);
    for (int t = 1; t <= test; ++t)
    {

        // clear previous record
        memset(visited , false, sizeof(visited));
        memset(land, 0, sizeof(land));

        scanf("%d %d",&land_col, &land_row);
        int root_col, root_row;

        for (int i = 0; i < land_row; ++i)
        {
            string s;
            cin>>s;
            for (int j = 0; j < s.size(); ++j)
            {
                if (s[j]=='.' || s[j] == '@')
                    land[i][j] = 1;

                if (s[j] == '@') {
                    root_row = i;
                    root_col = j;
                }
            }

        }
            counter = 0;
            dfs(root_row, root_col);
            printf("Case %d: %d\n",t, counter);

    }


    return 0;
}


void dfs(int row, int col)
{
    if(row < 0 || col < 0)
        return;
    if(row >= land_row || col >= land_col)
        return;

    if (land[row][col] == 1)        // land detected
    {
        if (visited[row][col] == true)
            return;
        else
        {
            // not visited
            visited[row][col] = true;
            counter = counter +1;

            dfs(row-1, col);
            dfs(row+1, col);
            dfs(row, col-1);
            dfs(row, col+1);
        }

    }

}
