#include<bits/stdc++.h>
using namespace std;
int main()
{

    /** sequence of three number*/
    printf("Sequence of three numbers.\nEnter numbers: ");
    int x[3]; scanf("%d %d %d",&x[0],&x[1],&x[2]);

    for(int i = 0 ; i < 3; i++)
        for(int j = i+1; j < 3; j++ )
            if(x[i] > x[j])
                swap(x[i], x[j]);

    for(int i = 0; i<3; i++)
        printf("%d ",x[i]);
    printf("\n");
}
