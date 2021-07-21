int sumOfDigits(int n) {
    // Write your code here

    if(n<10){
        return n;
    }
    
    int k = n%10;
    
    return k+sumOfDigits(n/10);
}


