#include<stdio.h>
int main()
{
   float N1,N2,N3,N4,exam_score;

   double X,X2;

   scanf("%f %f %f %f",&N1,&N2,&N3,&N4);

   X = (N1*2 + N2*3 + N3*4 + N4)/10;

   printf("Media: %.1lf\n",X);

   if (X >= 7.0)
   {
       printf("Aluno aprovado.\n");
   }
   else if (X < 5.0)
   {
       printf("Aluno reprovado.\n");
   }
   else
   {
       printf("Aluno em exame.\n");
       scanf("%f",&exam_score);

   printf("Nota do exame: %.1f\n",exam_score);

   X2 = (X + exam_score)/2;

   if (X2 >= 5.0)
   {
       printf("Aluno aprovado.\n");
   }
   else
   {
       printf("Aluno reprovado.\n");
   }

   printf("Media final: %.1lf\n",X2);
   }


   return 0;


}
