#include<stdio.h>
int main()
{
    int a = 30;
    
   // printf("a: %d",a++);  //30
   // printf("a: %d",++a);  //31 
   // printf("a: %d,a: %d ",a,a++);  //31 30
    //printf("a: %d,a: %d ",a,++a); // 31 31
    //printf("a: %d,a: %d ",a++,++a); //31 32 
   // printf("a: %d,a: %d ",++a,++a); //32 32
   // printf("a: %d,a: %d,a: %d ", a ,++a,++a);// 32 32 32
   // printf("a: %d,a: %d,a: %d ", a++ ,++a,++a);//32 33 33
   // printf("a: %d,a: %d,a: %d ", ++a ,++a,++a); // 33 33 33
   // printf("a: %d,a: %d,a: %d,a: %d ", a ,++a,++a,a++);//33 33 33 30
   // printf("a: %d,a: %d,a: %d,a: %d ", a ,++a,a++,a++);// 33 33 31 30      
   // printf("a: %d,a: %d,a: %d,a: %d ", a ,a++,a++,a++);// 33 32 31 30 
   // printf("a: %d,a: %d,a: %d,a: %d ", a ,++a,++a,++a);// 33 33 33 33
   // printf("a: %d,a: %d,a: %d,a: %d ", a ,++a,a++,++a);// 33 33 31 33
   // printf("a: %d,a: %d,a: %d,a: %d ", a++ ,++a,a++,++a);//33 34 31 34
   // printf("a: %d,a: %d,a: %d,a: %d ", ++a ,++a,a++,++a);//34 34 31 34
      printf("a: %d,a: %d,a: %d,a: %d,a: %d ", a ,++a,a++,++a,++a);// 34 34 32 34 34

}