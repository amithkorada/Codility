#include <stdio.h>
#include <stdlib.h>

int solution(int A[] , int N)
{
   int passing = 0;
    int west = 0;
    int East = 0;
    for (int i = N - 1; i >=0 ; i -- ) {
        if (A[i] == 0) {
            East ++;
            passing = passing + west;
            if (passing > 1000000000) {
                return -1;
            }
        } else {
            west ++;
        }
    }

    return passing;

}
int main()
{
    int A[5] = {0,1,0,1,1};
    int c = solution(A,5);
    printf("%d",c);
    return 0;
}
