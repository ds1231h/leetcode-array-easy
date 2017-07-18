bool isPalindrome(int x) {
    int res = 0, rmd = 0;
    int origin = x;
    if (x < 0)
    {
        return false;
    }
    else
    {
        while (x != 0)
        {
            rmd = x%10;
            if (res > INT_MAX/10 || res < INT_MIN/10)
                return false;
            else
            {
                res = res*10 + rmd;
                x = x/10;
            }
        }
	    return res == origin;
    }
}

/*
 Judge a number if it is a palindrome number.

 It is obvious that a negetive number is not a palindrom number. Then we can converse the given number to judge if they are equal after reversing. The conversing program is equal to the 7.c problem.
 */
