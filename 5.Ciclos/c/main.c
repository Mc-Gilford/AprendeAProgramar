#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    // Uso con FOR
    printf("For con variable creada\n");
    for (i=1;i<=10;i++){
        printf("%d ",i);
    }
    printf("\n");
    printf("For con creacion de variable\n");
    for(int j=1;j<=10;j++){
        printf("%d ",j);
    }
    printf("\n");
    printf("While\n");
    i=1;
    while(i<=10){
        printf("%d ",i);
        i++;
    }
    printf("\n");
    
    printf("Do While\n");
    i = 1;
    do{
        printf("%d ",i);
        i++;
    }while(i<=10);
    printf("\n");
}