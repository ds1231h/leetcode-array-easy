#include<stdio.h>
#include<stdlib.h>
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i, j;
    for (i = 0; i < digitsSize; ++i)
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
            }
            ret[i]++;
            return ret;
        }
    }
    returnSize++;
    int* ret = (int*)malloc((digitsSize + 1)*sizeof(int));
    ret[0] = 1;
    for (i = 0; i < digitsSize; ++i)
        ret[i] = 0;
    return ret;
}

int main(){
	int digits[1] = {0};
	int digitsSize = 1;
	int returnSize = 1;
	int* ret = plusOne(digits, digitsSize, &returnSize);
	printf("%d, %d\n", ret[0], returnSize);
	free(ret);
	return 0;
}
