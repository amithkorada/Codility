#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int solution(int X,int Y,int D)
{
  double dist = Y - X;
  int jump = ceil(dist/D);
  printf("%d",jump);
}
int main() {
	solution(10,85,30);
	return 0;
}
