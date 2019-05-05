#include<stdio.h>
#include<stdlib.h>


int main(){
    setvbuf(stdout,0,2,0);
    setvbuf(stdin,0,2,0);

    char buf[0x30];

    read( 0 , buf , 0x30 );

    puts( buf );

    puts( buf );


    return 0;
}