#include<stdio.h>

void main(){
    int i,j,n=5;
    //row
    for(i=1;i<=5;i++){
    //space
    for(j=1;j<=n-i;j++){
    printf(" ");
    }
    //star
    for(j=1;j<=i;j++){
        
    printf(" *");
    }
    printf("\n");

    }
}