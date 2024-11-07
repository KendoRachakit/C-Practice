#include <stdio.h>
main(){
	int x,y;
	scanf("%d %d",&x,&y);   // recive 2 data
	if(y%x == 0)          // check y mod x = 0                   
		printf("%d",y/x);   //printf result y/x
                     // if y mod x !=0
	else                         // printf result (y/x)+1
	
		printf("%d",y/x+1);
	
	return main();
}
