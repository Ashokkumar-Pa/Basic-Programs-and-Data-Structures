#include <stdio.h>
int main ()
{
  int a[] = { 5, 6, 10, 11, 17, 21, 30 };
  int find = 12;
  int size = sizeof (a) / sizeof (a[0]);;
  int start = 0;
  int end = size - 1;
  while (start <= end)
    {
      int mid = (end + start) / 2;
      if (a[mid] == find)
	{
	  printf ("%d", a[mid]);
	  break;
	}
      else if (start + 1 == end)
	{
	    int startNumDiff = find - a[start];
	    int endNumDiff = a[end]-find;
	  if (startNumDiff > endNumDiff)
	    {
	      printf ("%d", a[end]);
	      break;
	    }
	  else if (startNumDiff < endNumDiff)
	    {
	      printf ("%d", a[start]);
	      break;
	    }
	  else
	    {
	      printf ("%d", a[end]);
	      break;
	    }
	}
      else if (a[mid] < find)
	{
	  start = mid;
	}
      else
	{
	  end = mid;
	}
    }
}
