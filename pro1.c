#include <stdio.h>
int main(){
    int n,num;
    printf("Press 1 to display pyramid pattern\nPress 2 to display square pattern\nPress 3 to display diamond pattern\n");
    scanf("%d",&num);
    printf("Enter number of lines:");
    scanf("%d",&n);
    if (num==1){
        int m=n;
        for(int i=1;i<=n;i++){
            for (int j=1;j<=m-1;j++){
                printf(" ");
            }
            for (int k=1;k<(2*i);k++){
                printf("*");
            }
            printf("\n");
            m--;
        }
    }
    if (num==2){
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                printf("*");
            }
            printf("\n");
        }
    }
    if (num==3){
        int sp=n-1,st=1;
        for (int i=1;i<=n;i++){
            for (int j=1;j<=sp;j++){
                printf(" ");
            }
            for (int k=1;k<=st;k++){
                printf("*");
            }
            if (sp>i){
                sp--;
                st+=2;
            }
            else if(sp<i){
                sp++;
                st-=2;
            }
            printf("\n");
        }
    }
}