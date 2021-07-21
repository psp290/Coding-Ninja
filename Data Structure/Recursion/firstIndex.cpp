#include <iostream>
using namespace std;

int firstIndex(int input[], int size, int x) {
    
    
    if(size<1){
        return -1;
    }
    else if(input[0]==x){
        return 0;
    }
    else{
        int i = firstIndex( input+1, size-1,  x);
        
        return i==-1?i:i+1;
    }

}
