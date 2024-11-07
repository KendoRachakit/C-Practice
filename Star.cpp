#include <stdio.h> 
main(){ 
  int n,r,c; 
  printf("Enter n:");scanf("%d",&n); 
  for(r=1;r<=n;r++){ 
    for(c=1;c<=r;c++){printf("*"); 
    }printf("\n"); 
  } 
}
