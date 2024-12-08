#include<stdio.h>
int main()
{
    int i,n,j;
    char operator,c;
    int  x = 0;
    
    scanf("%d",&n);

    if(n >= 1 && n<=150) {

    for(i = 0;i < n;i++) {
        for(j = 0;j <= 1;j++) {
        scanf(" %c",&operator);  //%c count whitespaces(space,tab,newline)
        }
        scanf("%c",&c);
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
