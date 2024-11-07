#include <stdio.h>
main(){
    int d[10],i,j,count=10;
    for(i=0;i<10;i++){
        scanf("%d",&d[i]);
	    d[i]=d[i]%42;
	}
	for(i=0;i<10;i++){
	    for(j=0;j<i;j++){
		    if(d[i]==d[j]){
			    count--;
			    break;
			}
		}
	}
	printf("%d\n",count);
    return main();
}
