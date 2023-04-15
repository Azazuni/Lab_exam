#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    int i, base_1, digits,j = 1;
    int flag = 0;

    printf("Enter the numbers of digits of Number: ");
    scanf("%d", &digits);

    int arr[digits] ;
    char ch[digits];

    for (i = 0; i < digits; i++ )

    {

        printf("\nEnter digit [%d] of the number: ",j );
        fflush(stdin);
        scanf("%c", &ch[i]);

        if (isdigit(ch[i]))
            {
                arr[i] = ch[i] - '0';
            }
        else
        {
            flag = 1;
        }



        j++; //for digits counting
    }

//checking if the entered input is digit or an alphabet


    printf("\nEnter the base of the number: ");
    scanf("%d", &base_1);

    bool validity = false;

    if (base_1 == 2 || base_1 == 8 || base_1 == 16 || base_1 == 10)
    {

        if (base_1 == 16)
        {

        for (i = 0; i < digits; i++)

      {
        if (ch[i] == 'A' || ch[i] == 'a')    //Assigning the alphabets their hexadecimal values
        {
            arr[i] = 10;
        }
        else if (ch[i] == 'B' || ch[i] == 'b')
        {
            arr[i] = 11;
        }
        else if (ch[i] == 'C' || ch[i] == 'c')
        {

            arr[i] = 12;
        }
        else if (ch[i] == 'D' || ch[i] == 'd')
        {

        arr[i] = 13;

        }
        else if (ch[i] == 'E' || ch[i] == 'e')
        {
            arr[i] = 14;
        }
        else if (ch[i] == 'F' || ch[i] == 'f')
        {
            arr[i] = 15;
        }

      }

        }


        for (i = 0; i < digits; i++)
        {
            if ( base_1 > arr[i])   //checking if base is greater than each digit
            {

            }
        }

        if (flag == 0 && base_1 != 16)
        {

            printf("\nThe number is valid"); //if any input is integer and not of 16 base

        }

        else if (flag == 0 && base_1 == 16)
        {

            printf("\nThe number is valid"); //if any input is integer and of 16 base
        }
        else if (flag == 1 && base_1 == 16 )
        {

            printf("\nThe number is valid"); //if any input is an alphabet and of 16 base
        }
        else if (flag == 1 && base_1 != 16)
        {

            printf("\nThe number is invalid"); //if any input is an alphabet and not of 16 base
        }


        validity = true;

    }


   if (validity == false)
        printf("\nThe number is invalid");




    int digits_2 = digits - 1;  //digits_2 is used as an exponent here
    int sum = 0;

    for (i = 0; i < digits; i++)
    {
        if (flag == 1 && base_1 != 16) // if any input is alphabet and not of 16 base
        {
            break;
        }

        arr[i] = arr[i] * pow(base_1, digits_2);

        sum += arr[i];

        digits_2 -= 1;

    }


    if (flag == 1 && base_1 != 16)  // if any input is an alphabet and not of 16 base
    {


    }
    else
    {
        printf("\nThe decimal number is: %d\n   ", sum);

    }



    system("pause");
    return 0;

}
