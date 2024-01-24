#include <stdio.h>
#include<math.h>

int main() {
    printf("1.Addition     2.Subtraction       3.Multiplication     4.Division \n");
    printf("5.Remainder    6.Square Root       7.Power              8.Log10() \n");
    printf("9.sin()        10.cos()            11.tan()             12.sec() \n");
    printf("13.cosec()     14.cot()             0. Exit!\n");

    printf("\n Enter the operation number: ");
    int op;
    float a , b , result;
    int x , y ;
    scanf("%d", &op);
    switch (op) {
        case 1:
            printf("Enter a : ");    scanf("%f", &a);
            printf("Enter b : ");    scanf("%f", &b);
            printf("a + b = %f\n", a+b);
            break;
        case 2:
            printf("Enter a : ");    scanf("%f", &a);
            printf("Enter b : ");    scanf("%f", &b);
            printf("a - b = %f\n", a-b);
            break;
        case 3:
            printf("Enter a : ");    scanf("%f", &a);
            printf("Enter b : ");    scanf("%f", &b);
            printf("a * b = %f\n", a*b);
            break;
        case 4:
            printf("Enter a : ");    scanf("%f", &a);
            printf("Enter b : ");    scanf("%f", &b);
            printf("a / b = %f\n", a/b);
            break;
        case 5:
            printf("Enter x (an integer) : ");    scanf("%f", &x);
            printf("Enter y (an integer) : ");    scanf("%f", &y);
            printf("a % b = %f\n", x%y);
            break;
        case 6:
            printf("Enter a : ");    scanf("%f", &a);
            printf("the square root = %f\n", sqrt(a));
            break;
        case 7:
            printf("Enter a : ");    scanf("%f", &a);
            printf("Enter b : ");    scanf("%f", &b);
            printf("a^b = %f\n", pow(a,b));
            break;
        case 8:
            printf("Enter a : ");    scanf("%f", &a);
            printf("log10(a) = %f\n", log10(a));
            break;
        case 9:
            printf("Enter a : ");    scanf("%f", &a);
            printf("sin(a) = %f\n", sin(a * 3.14/180));
            break;
        case 10:
            printf("Enter a : ");    scanf("%f", &a);
            printf("cos(a) = %f\n", cos(a* 3.14/180));
            break;
        case 11:
            printf("Enter a : ");    scanf("%f", &a);
            printf("tan(a) = %f\n", tan(a* 3.14/180));
            break;
        case 12:
            printf("Enter a : ");    scanf("%f", &a);
            printf("sec(a) = %f\n", 1/cos(a* 3.14/180));
            break;
        case 13:
            printf("Enter a : ");    scanf("%f", &a);
            printf("cosec(a) = %f\n", 1/sin(a* 3.14/180));
            break;
        case 14:
            printf("Enter a : ");    scanf("%f", &a);
            printf("cot(a) = %f\n", 1/tan(a* 3.14/180));
            break;
        case 0:
            break;
    }

    return 0;
}
