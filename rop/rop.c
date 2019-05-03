#include<stdio.h>
#include<stdlib.h>

int main(){
    setvbuf(stdout,0,2,0);
    puts( "ROP~" );

    char buf[0x20];

    read( 0  , buf , 200 );
    
    if( strlen( buf ) > 0x20 ){
        puts( "Overflow!" );
        exit(0);
    }

    return 0;
}