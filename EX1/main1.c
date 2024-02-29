/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void print_space(int row,int i){
    for(int space = 0;space <= row-i;space++){
        printf(" ");
    }
}

void print_number(int row,int i){
    for(int number = 1;number <= i;number++){
        printf("%d ",i);
    }
}

int main(){
    int row = 6;
    for(int i = 0;i <= row;i++){
    print_space(row,i);
    print_number(row,i);
    printf("\n");
    }
}