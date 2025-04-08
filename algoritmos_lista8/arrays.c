#include<stdio.h>


void main() {
    int var[5]; // var => &

    var[0] = 0; // var => & + 0
    var[1] = 1; // var => & + 1
    var[2] = 2; // var => & + 2
    var[3] = 3; // var => & + 3
    var[4] = 4; // var => & + 4

    // iterando para preencher o array
    for (int i = 0; i < 5; i++){
        var[i] = i;
    }

    // iterando para printar o array
    for (int i = 0; i < 5; i++){
        printf("%d",var[i]);
    }

    // iterando para printar os elementos pares de um array
    for (int i = 0; i < 5; i++){
        if(var[i] % 2 == 0) {
            printf("%d", var[i]);
        }
    }


    
    return 0;
}