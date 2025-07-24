#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;
    printf("Enter the lenght of a side:   ");
    scanf("%d", &a);
    printf("Enter the lenght of b side:   ");
    scanf("%d", &b);
    printf("Enter the lenght of c side:   ");
    scanf("%d", &c);
    if (a + b > c && a + c > b && b + c > a) {
            if (a == b && b == c){
                printf("EQUATERIAL TRIANGLE");
            }else if (a == b || b == c || a == c){
                printf("ISOSCELES TRIANGLE");
            } else{
                printf("Scalene Triangle");
            }
    }else{
        printf("IT CANT BE TRIANGLE ");

    }


    return 0;
}
