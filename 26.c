int removeDuplicates(int* nums, int numsSize) {
    int len = numsSize;
    int i, j;
	for (i = numsSize - 1; i > 0; --i)
    {
        if (nums[i] == nums[i-1])
        {
            len--;
            for (j = i; j < len; ++j)
            {
                nums[j] = nums[j+1];
            }
        }
    }
    return len;
}

/*
 Remove the duplicates in the sorted array, and return its length.

 Because of the fixed length of array, we inspect the number in array from end to start. If there is a repeated number, then use the next number to replace this one, and length - 1.
 */
