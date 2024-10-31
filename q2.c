


#include <stdio.h>
void main()
{
  int n, j = 0;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
	  //give the addres of each a[j]
    scanf("%d", &a[j]);
    if (a[j] != 0)
    {
        j++;
    }
  }
  for (int i = 0; i < j; i++)
  {
      printf("%d ", a[i]);
  }
  return 0;
}
