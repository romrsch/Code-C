#include <stdio.h>
#include <stdlib.h>

int sort(int m[], int n);
int out(int m[], int n);
int in(int m[], int n);

int main() {
    int a[10], b[20];

    in(a,10);
    out(a,10);
    
    in(b,20);
    out(b,20);
    
    sort(a,10);
    
    out(a,10);
    
    sort(b,10);
    }

int in(int m[], int n)
{
    for(int i=0; i<n; i++) 
        m[i]=rand()%20;
}

int out(int m[], int n)
{
    printf("\n");
        for( int i=0; i<n; i++) 
            printf("%3d",m[i]);
    printf("\n");
}

int sort(int m[], int n)
{
    for(int j=1; j<n; j++)
        for(int i=1; i<n; i++)
    if(m[i]<m[i-1]) 
        {
        int t=m[i]; m[i]=m[i-1]; m[i-1]=t;
       }
}
