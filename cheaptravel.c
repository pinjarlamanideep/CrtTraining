// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n,m,a,b;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    int x=n*a;
    int y=(n/m)*b+((n%m)*a<b?(n%m)*a:b);
    if(m*a>b){
        printf("%d",y);
        
    }
    else{
        printf("%d",x);
    }
    return 0;
}