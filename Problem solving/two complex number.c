
#include <stdio.h>

typedef struct
{
    float real;
    float imaginary;
} complex;

float add_real (complex x,complex y)
{
    float sum;
    sum=x.real+y.real;
    return sum;
}
float sub_real (complex x,complex y)
{
    float sum;
    sum=x.real-y.real;
    return sum;
}
float add_imaginary (complex x, complex y)
{
    float sum;
    sum=x.imaginary+y.imaginary;
    return sum;
}
float sub_imaginary (complex x, complex y)
{
    float sum;
    sum=x.imaginary-y.imaginary;
    return sum;
}

int main ()
{
    complex a,b;
    float real,imaginary,real_sub,imaginary_sub;
    scanf("%f %f",&a.real,&a.imaginary);
    scanf("%f %f",&b.real,&b.imaginary);
    real=add_real(a,b);
    imaginary=add_imaginary(a,b);
    real_sub=sub_real(a,b);
    imaginary_sub=sub_imaginary(a,b);
    if(b.imaginary<0)
    {

        if(imaginary<0)
        {
            printf("(%.0f+%.0fi)+(%.0f%.0fi)=%.0f%.0fi\n",a.real,a.imaginary,b.real,b.imaginary,real,imaginary);
        }
        else{
            printf("(%.0f+%.0fi)+(%.0f%.0fi)=%.0f+%.0fi\n",a.real,a.imaginary,b.real,b.imaginary,real,imaginary);
        }
        if(imaginary_sub<0)
        {
            printf("(%.0f+%.0fi)-(%.0f%.0fi)=%.0f%.0fi\n",a.real,a.imaginary,b.real,b.imaginary,real_sub,imaginary_sub);
        }
        else{
            printf("(%.0f+%.0fi)-(%.0f%.0fi)=%.0f+%.0fi\n",a.real,a.imaginary,b.real,b.imaginary,real_sub,imaginary_sub);
        }
    }
    else
    {
        printf("(%.0f+%.0fi)+(%.0f+%.0fi)=%.2f+%.2fi\n",a.real,a.imaginary,b.real,b.imaginary,real,imaginary);
        if(imaginary_sub<0)
        {
            printf("(%.0f+%.0fi)-(%.0f+%.0fi)=%.0f%.0fi\n",a.real,a.imaginary,b.real,b.imaginary,real_sub,imaginary_sub);
        }
        else{
            printf("(%.0f+%.0fi)-(%.0f%.0fi)=%.0f+%.0fi\n",a.real,a.imaginary,b.real,b.imaginary,real_sub,imaginary_sub);
        }
    }

    return 0;

}
