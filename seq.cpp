#include <stdio.h>
main (){
     int i,sum=0,n,a,d;
     scanf("%d %d %d",&a,&n,&d);
	 for(i=a;i<=n;i=i+d){
	     sum=sum+i;
    }
	printf("sum=%d\n",sum);
	return main();
}
