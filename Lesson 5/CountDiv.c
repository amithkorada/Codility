#include <stdio.h>
#include <stdlib.h>

int solution(int A, int B, int K) {

    int a = A/K;
    int b = B/K;
    int c = b-a;
    if(A % K == 0)
    {
        return c+1;
    }
    else
    {
        return c;
    }
}
int main()
{
    int ans = solution(6,11,2);
    printf("%d",ans);
    return 0;
}
