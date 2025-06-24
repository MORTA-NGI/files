#include<stdio.h>
void hello();

int main(){
  int i;  
for ( i = 0; i < 3; i++)
{
   hello();
}
    return 0;

}
void hello(){

     int i;
    for (i=0;  i< 5; i++)
    {
        printf("Hello");
    }
    
}