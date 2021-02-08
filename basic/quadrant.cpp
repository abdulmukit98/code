#include<bits/stdc++.h>
using namespace std;
int main()
{
    /** Choose Quadrant**/
    printf("Choose Quadrant\n Enter Coordinates: ");
    int x, y; scanf("%d %d",&x, &y);

    if(x>0 && y>0) printf("1st Quadrant\n");
    else if (x < 0 && y>0 ) printf("2nd Quadrant\n");
    else if (x<0 && y<0) printf("3rd Quadrant\n");
    else printf("4th Quadrant\n");

}
