/* operator => arithmatic  => + - * / %
            => relational  => < <= > >= == !=
            => logical     => && || !
            => assignment  => += -= *= /= %=
            => unary       => ++ --
            => ternory     => ? :

            true -> 1   false -> 0

         
         && and -> first digit 0 than no check condition      
         || or -> first digit 1 than no check condition  
*/
#include<stdio.h>
int main()
{
   // int a=1,b=1,c;
   // c = a && b;
   // printf("a: %d,b: %d,c: %d",a,b,c); // 111
   // c = --a && b;
   // printf("a: %d,b: %d,c: %d",a,b,c); //010
  //  c = --a && ++b;
  //  printf("a: %d,b: %d,c: %d",a,b,c);  //010
  //  c = a && ++b;
  //  printf("a: %d,b: %d,c: %d",a,b,c);   //121
  //  c = ++a && --b;
  //  printf("a: %d,b: %d,c: %d",a,b,c);    //200
  //  c = ++a && ++b;
  //  printf("a: %d,b: %d,c: %d",a,b,c);      //221
  //  c = a || b;
  //  printf("a: %d,b: %d,c: %d",a,b,c);     //111
  // c = --a && b;
  // printf("a: %d,b: %d,c: %d",a,b,c);    // 010
  // c = a || ++b;
  // printf("a: %d,b: %d,c: %d",a,b,c);     //111
  // c = --a && ++b;
  //  printf("a: %d,b: %d,c: %d",a,b,c);     //010


  int a = 1,b = 2,c = 1,d;
    // d = ++a && b && c;
    //printf("a: %d,b: %d,c: %d,d: %d",a,b,c,d);  //2211
    // d = --a && b && c;
    //printf("a: %d,b: %d,c: %d,d: %d",a,b,c,d);  //0210
    //d = --a && ++b && c;
    //printf("a: %d,b: %d,c: %d,d: %d",a,b,c,d);   //0210
     d = --a || ++b && c;
      printf("a: %d,b: %d,c: %d,d: %d",a,b,c,d);   //0311
   
}