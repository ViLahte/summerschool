#include <stdio.h>

int main(int argc,char *argv[]){

void pointers(int* a, int* b){
	++(*a);
	*b=*b+1;
}

int var1 = 1, var2 = 2;
printf("%d %d\n",var1,var2);
pointers(&var1,&var2);
printf("%d %d\n",var1,var2);

return 0;



}
