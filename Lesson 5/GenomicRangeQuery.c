
#include <stdio.h>
#include <stdlib.h>
#include<string.h>


struct Results {
  int * A;
  int M;
};
struct Results solution(char *S, int P[], int Q[], int M)
{

  struct Results result;
    int* ans = (int*)calloc(M, sizeof(int));
    int len = strlen(S);
    int A[len];
    int count = 0;

    for (int i = 0;i<len;i++)
    {

        if(S[i] == 'A')
            A[i] = 1;
        if(S[i] == 'C')
            A[i] = 2;
        if(S[i] == 'G')
            A[i] = 3;
        if (S[i] == 'T')
            A[i] = 4;

    }
      int PS[len];
      PS[0] = A[0];
      for(int i = 1 ; i < len ; i++)
      {
         if(A[i] < PS[i-1])
         {
           PS[i] = A[i];

         }
         else
         {
           PS[i] = PS[i-1];
         }
      }

      int SS[len];
      SS[len -1] = A[len - 1];
      for(int i = len - 2;i >= 0;i--)
      {
        if(A[i] < SS[i+1])
         {
           SS[i] = A[i];

         }
         else
         {
           SS[i] = SS[i+1];
         }

      }
    for(int i = 0; i < M;i++)
      {
        if(P[i] == Q[i])
        {
          ans[i] = A[P[i]];
          continue;
        }

        if(A[P[i]] == 1 || A[Q[i]] == 1)
        {
          ans[i] = 1;
          continue;
        }

        if(PS[P[i]] > PS[Q[i]])
         {
            ans[i] = PS[P[i]];
            continue;
         }

        if(SS[P[i]] < SS[Q[i]])
        {
          ans[i] = SS[P[i]];
          continue;
        }

        if (PS[P[i]] == SS[Q[i]] && PS[P[i]] == A[P[i]] && A[P[i]] == A[Q[i]])
        {
          ans[i] = PS[P[i]];
          count++;
          continue;
        }
        if(count == M)
        {
          memset(ans, ans[0], sizeof ans);
          result.A = ans;
          result.M = M;
          return result;
        }
        int min = 5;
        for(int k = P[i]; k <= Q[i]; k++)
        {
          if(min == 1)
          {
            ans[i] = min;
            break;
           }
           if(min > A[k])
            min = A[k];
        }
      ans[i] = min;
    }
result.A = ans;
result.M = M;
return result;
}
int main()
{
     char S[7] = {'C','A','G','C','C','T','A'};
    int P[3] = {2,5,0};
    int Q[3] = {4,5,6};
    Results r = solution(S,P,Q,3);
    for(int i = 0 ; i < r.M;i++)
    printf("%d",r.A[i]);
    return 0;
}
