// Change in the given string itself. So no need to return or print anything
#include<iostream>
using namespace std;

void replace(char input[]){
    
    for(int i=0;input[i]!='\0';i++){
        input[i]=input[i+1];
    }
}

void removeX(char input[]) {
    // Write your code here

    if(input[0]=='\0')return;
    
    if(input[0]=='x'){
        replace(input);
        removeX(input);
    }
    else{
        removeX(input+1);
    }
    
}
