#include <stdio.h>

int main() 
{
    int x=0, y= 1,i,z,num;
    printf (" Enter the number of Element :=");
    scanf ( "%d",& num);
    printf ("\n%d %d",x,y);
    for ( i=2;i<num ;i++)
    {
        z=x+y;
        printf ( "% d " ,z);
        x=y;
        y=z;
    }
	
}

