
int countZeros(int n) {
    // Write your code here

    if (n<10){
        if(n==0)
        	return 1;
        else{
            return 0;
        }
    }

    int k = n%10;
    if(k==0){
        return countZeros(n/10)+1;
    }
    else{
        return countZeros(n/10);
    }
    
    
}


