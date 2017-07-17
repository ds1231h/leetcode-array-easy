#include <stdio.h>
int removeElement(int* nums, int numsSize, int val) {
    int i, j, tmp;
    int len = numsSize;
    for (i = 0; i < len; ++i)
    {
	    if (val == nums[i])
        {
            tmp = val;
            for (j = i; j < len; ++j)
            {nums[j] = nums[j+1];}
            nums[len - 1] = tmp;
	        len--;
			i--;
        }
    }
    return len;
}

int main(){
	const int numsSize = 5;
	int nums[5] = {0, 1, 4, 0, 0};
	int val = 4;
	int ret;
	ret = removeElement(nums, numsSize, val);
	printf("%d\n", ret);
	int i;
	for (i = 0; i < 5; ++i)
	{
		printf("%d ", nums[i]);
	}
	return 0;
}

/*
 Remove the target element in a sorted array.

 Move the target element to the end of the array, and remember to move the recent index, i--.
 */
