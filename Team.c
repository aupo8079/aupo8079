#include<stdio.h>
int main()
{
    int i,j,n;
    int ara[10][3];
    int count = 0,total = 0;    
    scanf("%d",&n);
        
    for(i = 0;i <  n;i++) {
        for(j = 0;j < 3;j++) {
            scanf("%d",&ara[i][j]);
        }
    }
    for(i = 0;i < n;i++) {
        for(j = 0;j < 3;j++) {
            if(ara[i][j] == 1) {
                count+=1;
                
            }
          
            
        }
        if(count >= 2) {
            total += 1;
        }
        count = 0;
    }
    printf("%d\n",total);
    
}