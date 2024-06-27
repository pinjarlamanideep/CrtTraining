// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    scanf("%d",&n);
    if(n%5==0){
        printf("%d",n/5);
    }
    else{
        printf("%d",n/5+1);
    }
}