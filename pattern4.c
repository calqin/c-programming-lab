#include<stdio.h>
int main(int argc, char const *argv[])
{
    for (int i=1;i<=5;i++){
        for (int j=1;j<=i;j++){
            if ((i+j)%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}
