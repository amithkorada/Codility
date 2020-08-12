#include <stdio.h>
#include <stdlib.h>

int solution(int A[] , int N)
{
  int B[100001]  = { 0 };
  int i;
  for(i = 0 ; i < N ; i++)
  {
    if(A[i] > 0 && A[i] < 100001)
      B[A[i]]++;
  }
  for(i = 1 ; i < 100001 ; i++)
  {
   if(B[i] == 0)
    {return i;}
  }

  return 100001;
}

int main()
{
    int A[3] = {3,1,2};
   int m = solution(A,3);
   printf("%d",m);
    return 0;
}

