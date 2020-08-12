#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  int k;
  printf("enter the length:\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements :");
  for(int x =0 ;x<n;x++)
    scanf("%d",&a[x]);
  printf("enter the no. of rotations:\n");
  scanf("%d",&k);
  int r = k%n;
  int t ;
  int i , j;
  for( j = 1 ; j <= r ; j++)
  {
    t = a[n-1];
  for( i = 4 ; i>0;i--)
  {
    a[i] = a[i-1];
  }
  a[0] = t;
  }
  for(int j=0 ; j<n;j++)
  {
    printf("%d",a[j]);
  }

    return 0;
}
