#include <stdio.h> 
main(){ 
  int r=1,c=1,n; 
  printf("Enter n:");scanf("%d",&n); 
  for(r=1;r<=n;r++){ 
    for(c=1;c<=n-r;c++)printf(" "); 
  for(c=1;c<=r;c++)printf("%d",c); 
    printf("\n"); 
  } 
} 
