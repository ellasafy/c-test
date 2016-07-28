#include<stdio.h>

union CC {
  int t ;
  double c ;
}cc;
int main() {
   union CC cc;
   printf("%lu \n", sizeof(cc.t));
   printf("%lu \n",sizeof(cc.c));
   printf("%lu \n",sizeof(cc));

   cc.c = 4.0;
   printf("%f \n",cc.c);
   printf("int %lu\n",sizeof(int));
   printf("unsigned %lu \n",sizeof(unsigned int));
   printf("float %lu \n", sizeof(float));
   printf("char %lu \n", sizeof(char));

   printf("%d \n", cc.t);
   return 0;
}
