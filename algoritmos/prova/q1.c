#include <stdio.h>

void q1(){

    int i;
    

    for (i = 1; i<1000;  i+=2){

        printf("%d,", i);
        printf("\n");
       
    }
}

int main () {

    q1 ();
    return 0;
}