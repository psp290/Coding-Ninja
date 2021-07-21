// Change in the given string itself. So no need to return or print anything


int leng(char input[]){
    
    int e = 0;
    for(int i=0;input[i]!='\0';i++){
        e++;
    }
    
    return e;
}

void replace(char arr[]){
    for(int i=leng(arr)+1;i>=0;i--){
        arr[i+2]=arr[i];
    }
    
    arr[0]='1';arr[1]='4';
}

void replacePi(char input[]) {
	// Write your code here
    if(input[0]=='\0' ||input[1]=='\0')return;
    
    replacePi(input+1);
    
    if(input[0]=='p' && input[1]=='i'){
        input[0]='3';input[1]='.';
        replace(input+2);
    }

    
}


