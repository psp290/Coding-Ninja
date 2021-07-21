#include<math.h>
double geometricSum(int k) {
    // Write your code here

    
    if(k==0)return 1;
    
     double s = 1/pow(2,k); 
    
    return s+geometricSum(k-1);
}


