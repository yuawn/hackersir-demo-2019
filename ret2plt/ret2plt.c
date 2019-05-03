#include<stdio.h>
#include<stdlib.h>


int main(){
    setvbuf(stdout,0,2,0);
    setvbuf(stdin,0,2,0);

    system( "echo Hi~" );

    char buf[0x30];

    gets( buf );

    return 0;
}