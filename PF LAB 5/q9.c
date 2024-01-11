# include<stdio.h>
# include<math.h>
main (){
   float a,b,c,root1,root2,d;
   
   printf ("enter the values of a b c");
   scanf (" %f %f %f", &a, &b, &c);
   	d = b*b - 4*a*c;
   if (d>0){
      root1 = -b+sqrt (d) / (2*a);
      root2 = -b-sqrt (d) / (2*a);
      printf ("The real roots = %0.2f %0.2f", root1, root2);
   }
   else if (d == 0){
      root1 = -b/(2*a);
      root2 = -b/(2*a);
      printf ("roots are equal =%0.2f %0.2f", root1, root2);
   }
   else
      printf("Roots are imaginary");
}
