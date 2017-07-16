int maxSubArray(int* nums, int numsSize) {
    int sum = nums[0], tmp = 0;
    int i, j;
    if (numsSize == 0)
        return 0;
    else if (numsSize == 1)
        return nums[0];
    else
    {
        for (i = 0; i < numsSize; ++i)
        {
            tmp = nums[i];
            if (sum < tmp)
	            sum = tmp;
            for (j = i + 1; j < numsSize; ++j)
            {
                tmp += nums[j];
                if (sum < tmp)
	                sum = tmp;
            }
        }
    }
    return sum;
}

/*
 Find the longest contiguous subarray within an array.

 It is important to consider the situation of only one element in the given array.
 But in this version, the code is not so beautiful nor effiency.
 */
