#include<stdio.h>
#include<stdbool.h>
int solution (int N)
{

if (N < 5)
return 0;

int max_gap = 0;

int number = N;
bool started = false;
int current_gap = 0;
int binary = 0;

while(number > 0)
{
  binary = number % 2;
  number = number / 2;

  if (started)
  {
    if (binary == 0)
    {
      current_gap += 1;
    }
    else
    {
      max_gap = current_gap > max_gap ? current_gap : max_gap;
      current_gap = 0;
    }
  }
  else{
    started = (binary == 1);
  }

}

return max_gap;
}

int main()
{
    int r=0;
    r=solution (1041);
    printf("%d",r);
    return 0;
}
