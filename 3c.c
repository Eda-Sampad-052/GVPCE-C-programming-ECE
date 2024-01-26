#include <stdio.h>
#include <math.h>
int main() 
{
  int a,b,c,D,R1,R2,real,img;
  printf("Please enter the coefficients: ");
  scanf("%d %d %d",&a,&b,&c);
  printf("%dx^2+%dx+%d=0\n",a,b,c);
  D=b*b-4*a*c;
  if (D>0)
  {
    int sqrtD = sqrt(D);
    R1=(-b+sqrtD)/(2*a);
    R2=(-b-sqrtD)/(2*a);
    puts("Nature of the Roots is real and different");
    printf("R1=%d and R2=%d\n",R1,R2);
  
  }
  else if (D==0)
  {
    R1=-b/(2*a);
    puts("Nature of the Roots is real and equal");
    printf("root1 = root2 = %d\n",R1);
  }
  else
  {
    real=-b/(2*a);
    img=sqrt(-D);
    puts("Nature of the Roots is not real (Imaginary)");
    printf("root1=%d+i%d and root2=%d-i%d\n",real,img,real,img);

  }
  return 0;
}

