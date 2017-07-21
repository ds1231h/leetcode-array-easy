--WARNING--
/*
 This code was not ACCEPTED, and I did not find any thing wrong neither when I debug it via CLION.
 This program is also in the Array tag.
 */

/*
 Now, I am pretty sure that there must be something wrong with this Oj.
 There is no error when I RUN CODE, but when submit, it is not ACCEPTED.
 */

/**
* Return an array of size *returnSize.
* Note: The returned array must be malloced, assume caller calls free().
*/
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i, j;i
	returnSize[0] = digitsSize;
    for (i = digitsSize; i > -1; --i)
    {
        if (digits[i] != 9)
        {
            int* ret = (int*)malloc(digitsSize*sizeof(int));
            for (j = 0; j < digitsSize; ++j)
            {
                ret[j] = digits[j];
            }
            for (j = i + 1; j < digitsSize; ++j)
            {
                ret[j] = 0;
				returnSize[0]++;
            }
            ret[i]++;
            return ret;
        }
    }
    int* ret = (int*)malloc((digitsSize + 1)*sizeof(int));
	memset(ret, 0, sizeof(ret));
    ret[0] = 1;
    returnSize[0]++;
    return ret;
}

/*
 It is a big number addition problem, which usually sloved by array. This program is also in the Array tag.
 The return number will be the same length as the given number, unless each digit of the given number is equal to 9.
 Besides, the value returnSize refer to the size of the return number.
 I guess it is used to print the result (although I think it is pretty sutpid, because we can easily realize it by sizeof(ret)/sizeof(int) to compute).
 */
