int reverse(int x) {
    int res = 0, rmd = 0;
    while (x != 0)
    {
        rmd = x % 10;
        if (res > INT_MAX / 10 || res < INT_MIN / 10)
        {
            return 0;
        }
        else
        {
            res = res * 10 + rmd;
            x /= 10;
        }
    }
    return res;
}

/*
 This title requires to code for reversing a large number.

 It is important to confirm if the reversed result of the given number is overflow. If so, program needs to return 0. We can use '%' to get the last digit of the number every turn, and put it to the first digit to get a 'res' number. If the res is larger than INT_MAX or smaller than INT_MIN, which means overflow, program return 0. Otherwise, program will run until the first digit of the given number turn to the last digit of res.
 */
