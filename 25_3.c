#include<stdio.h>

int main(){
  int n;
  char star[1000],space[1000];
  star[0] = '*';
  star[1] = '\0';
  int star_idx = 1, space_idx = 0;
  scanf("%d",&n);
  while(space_idx<n-1){
    space[space_idx++] = ' ';
  }
  space[space_idx] = '\0';
  for(int i=0;i<n;++i){
    printf("%s",space);
    space[--space_idx] = '\0';
    printf("%s\n",star);
    star[star_idx++] = '*';
    star[star_idx++] = '*';
    star[star_idx] = '\0';
  }
}