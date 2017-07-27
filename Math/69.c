int mySqrt(int x) {
	    if (x == 0 || x == 1)
	        return x;
	    else if ( x == 2 || x == 3)
	    {
	        return 1;
	    }
    double ret = x/2, tmp = 0;
    int res = (int)ret;
    while ((long)res*(long)res > x || (long)(res+1)*(long)(res+1) < x)
    {
        tmp = ret;
        ret = tmp/2 + x/(2*tmp);
	    res = (int)ret;
    }
    return res;
}

/*
 Compute the square root.

 There two key points in this problem.
 First, if we just judge whether "res*res < x", for loop from 1 to x/2.
 It is easy to come up, but time is limited.
 We can use two divided method, and also judge "res*res < x". This method is ok.
 Otherwise, we can use Newton-Raphson method, and it is used in my code.
 This method takes advantage of the tangent of the function, y=f(X0)+f'(X0)(X-X0), wisely. f(X) = X^2.
 That means, 0=X0^2+2X0*(X-X0) => X=X0-X0/2. We can get the nearest X by iteration.
 Then we iterates it and get X.

 Second, many coders like to regard "abs(X-Xn) < 0.0001" as the end of loop. But I said not.
 There is no need to compute so accuratly.  
 */
