//  array have negative values 

#include<stdio.h>
#include<stdbool.h>

//  find ponit at the values changing into possitive value
//  Binary search is used
int find(int a[], int size)
{
	int start = 0;
	int end=size-1;
	while(start<=end)
    {
        int mid = (end+start)/2;
        if( a[mid] >=0)
        {
            return mid;
	    }
        else if(a[mid] < 0 )
        {
            start=mid+1;
        }
        else
		{
            end=mid-1;
        }
    }
}
int main()
{
	int a[] = {-5,-4,-2,-1,0,2,4,5,7,9};
	int size = sizeof a/sizeof a[0];
	int right = find(a, size);
	int left = right - 1;
	while(true)
	{
		if(left == -1 && right == size)
		{
			break;
		}
		else if(left == -1 && right != size)
		{
			printf("%d ",a[right] * a[right]);
			right++;
		}
		else if(left != -1 && right == size)
		{
			printf("%d ", a[left] * a[left]);
			left--;
		}
		else if(-a[left] > a[right])
		{
			printf("%d ",a[right] * a[right]);
			right++;
		}
		else
		{
			printf("%d ", a[left] * a[left]);
			left--;
		}
	}
}
