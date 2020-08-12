#include <stdio.h>
#include <stdlib.h>


struct Results {
  int * C;
  int L;

};
struct Results solution(int N, int A[], int M)
{
  struct Results result;
  int *B ;
  int X;
  B =(int*)calloc(N,sizeof(int));

  int K;
  int i;
  int max = 0;
  int Smax = 0;

  for(K = 0 ; K < M ; K++)
  {
      if(A[K] >= 1 && A[K] <= N)
      {
        X = A[K];
        if(B[X - 1] < Smax)
        {
          B[X - 1] = Smax;
          B[X - 1]++;
        }else{B[X - 1]++;}
        if(B[X - 1]  > max)
        {
          max = B[X - 1];
        }
      }


      if(A[K] == N+1)
      {
          Smax = max;
      }
  }
for(i = 0 ; i < N ; i++)
    if(B[i] < Smax)
    {
      B[i] = Smax;
    }
for(i = 0 ; i < N ; i++)
  printf("%d",B[i]);


    result.C = B;
    result.L = N;
    return result;
}
int main()
{
    int i;
    int A[7] = {3,4,4,6,1,4,4};
    solution(5,A,7);

    return 0;
}
