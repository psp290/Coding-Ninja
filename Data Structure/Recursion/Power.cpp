#include <iostream>
using namespace std;

int power(int x,int n){
    if(n==0)return 1;

    if(n%2)return power(x,n-1)*x;

    return power(x,n/2)*power(x,n/2);
}

int main(){
    int x,n;
    cin>>x>>n;

    int res = power(x,n);
    cout<<res<<endl;
}