//Calculator
#include<stdio.h>
#include<math.h>
int main()
{
    int choice,a,b,c;
    printf("Hello!\nEnter your choice\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Square\n6.Cube");
    scanf("%d",&choice);
    if(choice <=4)
    {
        printf("\nEnter 2 Numbers: ");
        scanf("%d%d",&a,&b);
    }
    if(choice >4 && choice <=6)
    {
         printf("\nEnter 1 Numbers: ");
        scanf("%d",&c);
    }
    switch(choice)
    {
        case 1:  // Addition
        {
            printf("\nSum is %d",a+b);
            break;
        }
        case 2: // Substraction
        {
            printf("\nDifference is %d",a-b);
            break;
        }
        case 3: // Multiplication
        {
            printf("\nProduct is %d",a*b);
            break;
        }
        case 4: // Division
        {
            printf("\nQuotient is %d and Remainder is %d",a/b,a%b);
            break;
        }
        case 5: //Square
        {
            printf("\nSquare is %d",c*c);
            break;
        }
        case 6: // Cube
        {
            printf("\nCube is %d",c*c*c);
            break;
        }
        default: // Default
        {
            printf("Invalid Input");
        }
    }
}
