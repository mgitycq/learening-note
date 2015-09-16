#include <stdio.h>

#define MAX 1000

int num[MAX];

int main(void)
{
  int i = 0;
  int k, current;
  scanf("%d", &k);

  while( scanf("%d", &current) != EOF)
  {
	int position = i-1;
	int j;
	//find position
	while(position >= 0 && num[position] < current )
	{
	  position--;
	}
	//move
	for(j=i; j>position+1; j--)
	{
	  num[j] = num[j-1];
	}
	num[position+1] = current;
	i++;
  }
  printf("%d\n", num[k]);
  return 0;
}
