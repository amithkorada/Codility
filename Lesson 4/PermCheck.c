#include <stdio.h>
#include <stdlib.h>

int solution (int a[] , int N)
{

    int i;
    int x = a[0];
    int y = 1;

    for (i = 1; i< N; i++)
        x = x^a[i];

    for ( i = 2; i <= N; i++)
        y = y^i;

    int c = x^y;
    if(c == 0)
        return 1;
    else
        return 0;
}
int main()
{
    int a[3] = {3,1,4};
    int s = solution (a , 4);
    printf("%d",s);

    return 0;
}
