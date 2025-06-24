#include<stdio.h>
int x=2,y=3,z;
int adds(a,b);
int divs(a1,b1);

int main(){
   divs(x,y);
   divs(x,y);

    return 0;
}

int adds(a,b){

    int z=a+b;
    return z;
}
int divs(a1,b1){

    int z=a1/b1;
 return z;
}