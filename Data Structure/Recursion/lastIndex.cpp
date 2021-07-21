#include <iostream>
using namespace std;

int lastIndex(int input[], int size, int x) {
  
    
    if(size==0){
        return -1;
    }
    else if(input[size-1]==x){
        return size-1;
    }
    else{
       return lastIndex(input,size-1,x);
    }

}
