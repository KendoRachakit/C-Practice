#include <stdio.h>
main(){
    while(1){     
	int x;       
	scanf("%d",&x); 
	if(x>0){
	    printf("|%d|=%d\n",x,x);
	}
	else{
	    printf("|%d|=%d\n",x,-x);
	}
   }
} 
