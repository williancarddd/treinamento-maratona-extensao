#include<stdio.h>
 
#define compare "codeforces"
int main()
{
    int qtd=0;
    char string[10];
    scanf("%d",&qtd);
    int count; 
    for (int i=0;i<qtd;i++){
        count=0;
        scanf("%s",string);
        
        for(int i = 0; i < 10; i++) 
        {
            if(compare[i] != string[i]) count++;
        }
 
        printf("%d\n",count);
    }
    return 0;
}
