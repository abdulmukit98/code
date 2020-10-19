#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define null NULL
#define pi acos(-1)
#define MX 1000006

int N = 5;  // no of vertex
/*
    initialize 5*5 matrix with 1 indexing
    remaining cell of matrixx is 0

    note that we cant use INT_MAX to measure Infinity
    because it overflow on calculation

 */
int weight[1003][1003]={
        {0, 0, 0, 0, 0, 0},
        {0, 0, 3, 8, MX, -4},                              // Directed graph
        {0, MX, 0, MX, 1, 7},                             // 1-indexing
        {0, MX, 4, 0, MX, MX},                           // first row & column is 0
        {0, 2, MX, -5, 0, MX},
        {0, MX, MX, MX, 6, 0}
};

int D[1003][1003] ;         // Distance matrix
int temp_D[1003][1003];
int temp_predecessor[1003][1003];
int predecessor[1003][1003];

void initialize_predecessor();
void update_D();
void update_predecessor();

void print_D(int k);
void print_predecessor(int k);
void print_matrix(int k);



int main() {
    /*
        Floyd Warshall
        Do exactly the algorithm says
    */

    // initialize D
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            D[i][j] = weight[i][j];
        }
    }
    initialize_predecessor();
    print_matrix(0);

    for (int k = 1; k <= N; k++) {
        // update path for each intermediate k
        for (int i = 1; i <= N; i++)
        {
            //printf("Row %d\n",i);
            for (int j = 1; j <= N; j++)
            {
                /*
                    note that D-matrix and predecessor matrix
                    do not depend on each other for running computation
                    its only access on previous round matrix
                 */
                // for D-matrix where k >= 1
                temp_D[i][j] = min(D[i][j],     D[i][k] +D[k][j]);       // previous comparison


                // for predecessor-matrix where k>=1
                if(D[i][j] <= D[i][k] + D[k][j])                 // if previous-path-distance less-equal than k-intermediate path
                    temp_predecessor[i][j] = predecessor[i][j];       // keep previous path predecessor

                else if(D[i][j] > D[i][k] + D[k][j])            // if previous-path-dist big than new k-intermediate path
                        temp_predecessor[i][j] = predecessor[k][j];       // update new path's predecessor
             }
            // end j
        }
        // end i

        update_D();
        update_predecessor();
        print_matrix(k);
    }



    return 0;
}


void initialize_predecessor()
{
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if(i==j || D[i][j] > MX-1000)       // reduce some value from MX if -ve edge change it
                predecessor[i][j] = -1;        // NIL
            else if(i!=j && D[i][j] < MX-1000)
                predecessor[i][j] = i;
        }
    }
}


void update_D()
{
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            D[i][j] = temp_D[i][j];
        }
    }
}

void update_predecessor()
{
    for (int i = 1; i <= N; i++) {
        for (int j=1; j <= N; j++) {
            predecessor[i][j] = temp_predecessor[i][j];
        }
    }
}




void print_D(int k)
{
    printf("K = %d\t Distance-matrix\n",k);
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            printf("%d\t",D[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void print_predecessor(int k)
{
    printf("K = %d\t predecessor-matrix\n", k);
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            printf("%d\t",predecessor[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void print_matrix(int k)
{
    print_D(k);
    print_predecessor(k);
    printf("\n\n\n");
}
