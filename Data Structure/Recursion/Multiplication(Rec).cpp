int multiplyNumbers(int m, int n) {
    // Write your code here
    if(m==0||n==0)return 0;
	if(m==1)return n;
    
    return n+ multiplyNumbers(m-1,n);
}


