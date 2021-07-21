// Change in the given string itself. So no need to return or print the changed string.



int leng(char input[]){
    
    int e = 0;
    for(int i=0;input[i]!='\0';i++){
        e++;
    }
    
    return e;
}

void replace(char arr[]){
    for(int i=leng(arr)+1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    
    arr[0]='*';
}

void pairStar(char input[]) {
    // Write your code here

    if(input[0]=='\0'||input[1]=='\0')return;
    
    pairStar(input+1);
    
    if(input[1]==input[0]){
        replace(input+1);
    }
    
}
