#include<stdio.h>
#include<stdlib.h>
#include<float.h>
 int main(){
 	int x=2.2 ;
 	short y=0x7FFF;
 	short z=0xFFFF;
 	unsigned short w=0xFFFF;
 	float u=0.177;
	printf("%d\n%d\n%d\n%d\n%f\n\n\n",x,y,z,w,u);
 
    
 	printf ("double MAX=%le,MIN=%le\n",DBL_MAX,DBL_MIN);
 	system("pause");
	 return 0; 
 	
 }
