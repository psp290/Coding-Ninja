#include <iostream>
using namespace std;

int sum(int input[], int n) {
  
    if(n==-1){
        return 0;
    }
    
    return input[n-1] + sum(input,n-1);

}