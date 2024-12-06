#include<stdio.h>
int main()
{
    int i,n,j;
    char operator;
    int  x = 0;
    
    scanf("%d",&n);

    if(n >= 1 && n<=150) {

    for(i = 0;i < n;i++) {
        for(j = 0;j <= 2;j++) {
        scanf("%c",&operator);
        }
        
        if(operator == '+') {
        x += 1;
        }
        if(operator == '-') {
            x -= 1;
        }
    }
        printf("%d",x);
}
}
