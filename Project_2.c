#include<stdio.h>
int main(){
    int user,cpu,i = 0,rem;
    while (i<4){
        label : printf("Enter your input : ");
        scanf("%d",&user);
        if (user>4){
            printf("invalid input\n");
            goto label;
        }
        cpu = 5-user;
        printf("CPU picks up %d matchsticks\n",cpu);
        i++;
        rem = 21-i*5;
        if (rem == 1){
            break;
        }
        else{
            printf("There are %d matchsticks left\n",(21-i*5));
        }
    }
    printf("There is only one stick left and hence you lost");
    return 0;
}