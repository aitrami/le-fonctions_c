#include <stdio.h>

int devidedby(int N, int A){
    return N/A;
}

int has_remainder(int A, int B){
    if (devidedby(A, B) != 0)
        return 1;
    else
        return 0;
}

int main(){

    int A;
    printf("donner A:\n");
    scanf("%d", &A);

    int B = A;
    int div = 0;

    while (B){
        if (has_remainder(A, B) == 0);
            div++;
        B--;
    }



    printf("%d\n",has_remainder(3,2));
    printf("%d\n",has_remainder(2,2));


    return 0;
}
