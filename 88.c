#include <stdio.h>

int merge(int* nums1, int m, int* nums2, int n) {
	int i, j, k;
	if (m == 0)
	{
	    while (n--)
    	nums1[n] = nums2[n];
	}
	else
	{
	for (j = 0; j < n; ++j)
	{
		for (i = 0; i < m; ++i)
		{
			if (nums2[j] < nums1[0])
			{
				for (k = m; k > 0; --k)
					nums1[k] = nums1[k - 1];
				nums1[0] = nums2[j];
	            m++;
      		    break;
	        } else if ((nums2[j] > nums1[i] && nums2[j] < nums1[i + 1]) || (nums2[j] == nums1[i + 1]) || (nums2[j] == nums1[i]))
           {
               for (k = m; k > i + 1; --k)
               {
	               nums1[k] = nums1[k - 1];
               }
                    nums1[i + 1] = nums2[j];
                    m++;
                    break;
               } else if (nums2[j] > nums1[m - 1]) {
                    nums1[m] = nums2[j];
                    m++;
                    break;
                }
            }
        }
    }
    return m;
}

int main()
{
    int nums1[9] = {-1, 0, 1, 1, 0, 0, 0, 0, 0}, m = 4;
    int nums2[5] = {-1, 0, 2, 2, 3}, n = 5;
    m = merge(nums1, m, nums2, n);
    printf("%d\n", m);
    for (int i = 0; i < m; ++i)
    {
        printf("%d", nums1[i]);
    }
    return 0;
}
