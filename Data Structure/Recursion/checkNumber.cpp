#include <iostream>
using namespace std;

bool checkNumber(int input[], int size, int x) {
  
    if(size==-1)return false;
    
   if(input[size-1]==x) return true;
    
    return checkNumber(input,size-1,x);

}
