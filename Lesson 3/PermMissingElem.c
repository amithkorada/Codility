#include <stdio.h>
#include <stdlib.h>

int solution (int a[] , int N)
{

    int i;
    int x = a[0];
    int y = 1;

    for (i = 1; i< N; i++)
        x = x^a[i];

    for ( i = 2; i <= N+1; i++)
        y = y^i;

    return (x^y);
}
int main()
{
    int a[4] = {2,3,1,5};
    int s = solution (a , 4);
    printf("%d",s);

    return 0;
}
