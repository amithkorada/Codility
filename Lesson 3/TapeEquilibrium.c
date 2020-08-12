#include <stdio.h>
#include <stdlib.h>




int solution(int A[] , int N)
{
    int P = 1;
    int left = 0;
    int right = 0;
    int difference = 0;
    int min = 0;
    int  j;
    int v;

     for(j = 0 ; j < N ; j++)
        {
            right = right + A[j];
        }
        min = abs(left - right);

    while(P < N)
    {
        v = A[P-1];
        left = left + v;
        right = right - v;

        difference = abs(left - right);
        if(P == 1)
        {min = difference;}

        if(difference < min)
            {
                min = difference;
        }
        P++;

}
  return min;
}
int main()
{
    int a[5] = {3,1,2,4,3};
    int min = solution(a,5);
    printf("%d",min);
    return 0;
}
