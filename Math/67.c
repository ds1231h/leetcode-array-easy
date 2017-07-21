char* addBinary(char* a, char* b) {
    const int aLen = strlen(a);
    const int bLen = strlen(b);
    int i, j, k, d;
    if (a[0] == '0')
        return b;
    else if(b[0] == '0')
        return a;
    char* longStr = aLen>bLen ? a : b;
    const int kLen = aLen>bLen ? aLen+1 : bLen+1;
    const int adLen = kLen;
    char* ret = (char*)malloc((kLen+1)*sizeof(char));
    memset(ret, '0', (kLen+1)*sizeof(char));
    ret[kLen] = '\0';
    int* adder = (int*)malloc((adLen)*sizeof(int));
    memset(adder, 0, adLen*sizeof(int));
    for (i = aLen - 1, j = bLen - 1, k = kLen - 1, d = adLen - 1; i > -1 && j > -1; --i, --j, --k, --d)
    {
        ret[k] = (a[i] - '0' + b[j] - '0' + adder[d])%2 + '0';
        adder[d - 1] = (a[i] - '0' + b[j] - '0' + adder[d])/2;
    }
    for (i = aLen>bLen ? (aLen - bLen): (bLen - aLen); i > 0; --i, --d)
    {
        ret[i] = (longStr[i - 1] - '0' + adder[d])%2 + '0';
        adder[d - 1] = (longStr[i - 1] - '0' + adder[d])/2;
    }
    if (adder[0] == 1)
        ret[0] = '1';
    else
    {
        for (i = 0; i < kLen - 1; ++i)
        {
            ret[i] = ret[i + 1];
        }
        ret[kLen - 1] = '\0';
    }
    return ret;
}

/*
 This code is attempted to add two binary number, which storing as strings.

 There are several method to realize it, and my method is shown followed. 
 First of all,  if one of the two number is "0", then return the other one.
 Secondly, there is no doubt that the return string needs to be malloced, and it is important to ensure the length of the return string.
 I did not come up with any idea to know whether the return string need to be the same as the longest string between the two given string or need to be the longer (if it need to carry).
 As a result, I just imagine the return string is much longer and judge it at the end of the program.
 At the mean time, a new string called "adder", which means to store the carry number, and its length must be the longest one + 1.
 At last, it is necessary to remember that we need to convert the string and number by + or - '0'.
 */
