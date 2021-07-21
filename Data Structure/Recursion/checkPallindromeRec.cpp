

#include <iostream>
using namespace std;

bool palindrome(char input[],int size){

    if(size==0 || size==1)return true;
    if(input[0]==input[size-1]){
        return palindrome(input+1,size-2);
    }
    else{
        return false;
    }
}
bool checkPalindrome(char input[]){
    int size =0;
    for (int i = 0; input[i]!='\0'; i++)
    {
        size++;
        /* code */
    }
    
    return palindrome(input,size);
}

int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
