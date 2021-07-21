#include<math.h>
int leng(char input[]){
    
    int e = 0;
    for(int i=0;input[i]!='\0';i++){
        e++;
    }
    
    return e;
}

int stringToNumber(char input[]) {
    // Write your code here
    
    if(input[0]=='\0') return 0;
    
    int ans = input[0]-'0';
    
    int len = leng(input);
    
    ans =ans*pow(10,len-1) + stringToNumber(input+1);
    
    return ans;  

}


