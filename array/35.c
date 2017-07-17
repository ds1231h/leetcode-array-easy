int searchInsert(int* nums, int numsSize, int target) {
    int ret;
    int i;
    for (i = 0; i < numsSize; ++i)
    {
        if (target == nums[i] || target < nums[i])
            break;
    }
    ret = i;
	return ret;
}

/*
   Insert a number in a sorted array, and return its index.

   Rember the target is always equal or smaller than the next number in a sorted array.
 */
