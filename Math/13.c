--WARNING--
/*
 This code did not ACCEPTED, but I did not find anything wrong neither.
 */

int romanToInt(char* s) {
    struct keyValue
    {
        char str;
        short num;
    }romanKV[7] = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D' ,500}, {'M', 1000}};
    int i = 0, index = 0, intNum = 0;
    int res[19];
    while (*s != '\0')
    {
        for (i = 0; i < 7; ++i)
        {
            if (*s == romanKV[i].str)
            {
                res[index] = romanKV[i].num;
                s++;
                index++;
				break;
            }
        }
    }
    for (i = 0; i < index; ++i)
    {
        if (res[i] < res[i + 1])
            intNum -= res[i];
	    else
            intNum += res[i];
    }
    intNum += res[index];
    return intNum;
}

/*
 This title needs us to convert a ROMAN number into an INT number.

 I prefer to use key-value to solve it, and I believe it must be easier to use key-value or map in C++.
 When we solve it in C language, it is a good idea to use struct.
 ROMAN-INT comparision table is as followed:
 I-1	V-5		X-10	L-50	C-100	D-500	M-1000
 Obviously, it means substraction when the left number is smaller than the rightone, such as IV-4. Others means addition, such as II or VI.
 */
