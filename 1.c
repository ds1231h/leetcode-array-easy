#include <stdio.h>
#include <stdlib.h>
int *twoSum(int *nums, int numsSize, int target) {
    int *ret = (int *)malloc(2*sizeof(int));
//	ret[0] = 10;
//	ret[1] = 20;
    int i, j;
    for (i = 0; i < numsSize; ++i)
    {
       for (j = i+1; j < numsSize; ++j)
       {
            if ((nums[i] + nums[j]) == target)
            {
                ret[0] = i;
                ret[1] = j;
            	return ret;
            }
        }
    }
    return ret;
}
int main(){
	int nums[3] = {3, 2, 4};
	int numsSize = 3;
	int target = 6;
	int* ret = twoSum(nums, numsSize, target);
	printf("%d, %d", ret[0], ret[1]);
	free(ret);
	return 0;
}

/*
 Find two addends of the given number from the array.

 It is important to use malloc and free(caller).
 */
