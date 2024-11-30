#include<stdio.h>
#include<string.h>
int main()
{

    int i,n,j = 0;
    char word[100][100];
    int store[100][100];

    printf("Input a number:");
    scanf("%d",&n);

    printf("Now input a word:\n");

    if(n >= 1 && n<=100) {

    for(i = 0;i < n;i++) {
    scanf("%s",&word[i]);
    store[i][j] = strlen(word[i]);
    }
    printf("\n");
    for(i = 0;i < n;i++) {
        if(store[i][j] > 10) {
            printf("%c%d%c",word[i][j],store[i][j]-2,word[i][store[i][j]-1]);
        }
        else {
            printf("%s",word[i]);
        }
        printf("\n");
    }
}
    return 0;
}
