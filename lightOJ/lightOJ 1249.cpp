#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define null NULL

class student
{
public:
    student() {

    }

    char name[27];
    int length;
    int width;
    int height;
    int vol;

    void setup(char* nm, int w, int h, int l)
    {
        memset(this->name, 0x0, sizeof(this->name));
        strcpy(this->name, nm);
        this->height = h;
        this->width = w;
        this->length = l;
        this->vol = height * width * length;
    }

};

void sort_student(student* arr, int n);

int main() {

    /**
        lightOJ 1249 choclate thief
     */
    int test; scanf("%d",&test);
    for(int t=1; t<=test; t++)
    {
        int n; scanf("%d",&n);
        student data[n];

        for(int i=0; i<n; i++)
        {
            char nm[27];
            int w,h,l;
            scanf("%s",nm);
            scanf("%d %d %d",&w,&h,&l);
            data[i].setup(nm, w,h,l);
        }

        sort_student(data, n);

        /*
        preview
        for(int i=0; i<n; i++)
            printf("%s %d\n",data[i].name, data[i].vol);
        */

        if(data[0].vol < data[n-1].vol)
            printf("Case %d: %s took chocolate from %s\n", t, data[n-1].name, data[0].name);
        else printf("Case %d: no thief\n",t);
    }

    return 0;
}


void sort_student(student* arr, int n)
{
    student key;
    for(int j=1; j<n; j++)
    {
        int i = j-1;
        key = arr[j];

        while (arr[i].vol > key.vol && i>=0)
        {
            arr[i+1] = arr[i];
            i = i-1;
        }
        arr[i+1] = key;
    }
}
