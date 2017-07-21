#include<stdio.h>
#include<stdlib.h>
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i, j;
	returnSize[0] = digitsSize;
    for (i = digitsSize - 1; i > -1; --i)
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
    memset(ret, 0, sizeof(ret)/sizeof(int));
	ret[0] = 1;
    returnSize[0]++;
    return ret;
}

int main(){
	int digits[] = {9, 9, 9};
	const int digitsSize = sizeof(digits)/sizeof(int);
	int returnSize = 0;
	int* ret = plusOne(digits, digitsSize, &returnSize);
	for (int i = 0; i < returnSize; ++i)
	{
		printf("%d", ret[i]);
	}
	printf("\n");
	free(ret);
	return 0;
}
