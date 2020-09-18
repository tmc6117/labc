#include <stdio.h>
// Author: Tong Chen tmc6117@psu.edu
// Collaborator:
// Collaborator:
// Collaborator:
// Section: 1
// Breakout: 12
int sum(int n){
  if (n<=0){
    return 0;
  }
  else{
    return n+sum(n-1);
  }
}

void print_n(const char * a,int n){
  if(n<=0){
    return;
  }
  else{
    printf("%s\n",a);
    print_n(a,n-1);
  }
}

int main(){
  int n;
  printf("Enter an int:");
  scanf("%d",&n);
  printf("sum is %d.\n",sum(n)); 

  
 int a;
  printf("Enter a string:");
  scanf("%d",&a);
  for(int i = 0;i<n;i++){
    printf("Hello\n");
  }
}