#include<bits/stdc++.h>
using namespace std;
#define null NULL

int decToBin(int num);
int d=0;

int main()
{
    /***
        decimal to binary

    */
    int num; scanf("%d",&num);
    
    d=0;
    decToBin(num);
    cout<<d<<endl;
    
    d=0;
    decToBin(165);
    cout<<d<<endl;
    
    return 0;
}

int decToBin(int num)
{
    if(num==0)
        return 0;

    /// without printing anything, go recursive till end
    decToBin(num/2);
    
    ///print remainder from last to first
    // d is global veriable
    
    d = d*10 + num%2;
    
    return 0;

}
