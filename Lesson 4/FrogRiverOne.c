#include <stdio.h>
#include <stdlib.h>

int solution(int X , int A[] , int N)
{
    int B[X] ;
    memset(B ,0 ,sizeof(B[0])*X);
    int t,p;
    int ans = -1;
    int count = 0;
    for(t = 0 ; t < N ; t++)
    {
       p = A[t] - 1;
       if(p < X && B[p] == 0)
       {
          B[p] = 1;
          count++;


         if(count == X)
          {
            return t;

          }
       }

    }

    return ans;
}
int main()
{
    int A[7] = {1,3,1,4,2,3,5,4};
    int t = solution(5 , A , 7);
    printf("%d",t);
    return 0;
}
