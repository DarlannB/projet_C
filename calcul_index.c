//
//  main.c
//  load and trim sheet
//
//  Created by Shayan GANDJY on 13/10/2022.
//

#include <stdio.h>
#include <stdlib.h>

float calcul_index (unsigned short int dom, float cg)

{
    float index = 0 ;
    index = ((cg-25)*dom*0.042)+50;
    printf("L'index est égal à %f \n",index);
    return index;
}

int main(int argc, const char * argv[])

{
    unsigned short int dom = 39.4;
    float cg = 27;
    calcul_index(dom,cg);
    return 0;
}
