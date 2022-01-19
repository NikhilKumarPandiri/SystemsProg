/*
To compile the code : gcc -o lab1 lab1.c
to Execute : ./lab1 

 */


  #include <stdio.h>

  int main(int argc, char argv)
  {
         int given_number, i = 2, j = 1;

         printf("Enter a positive integer number: ");
         scanf("%d", &given_number);
         if (given_number == 1)
           {
                printf("1 is neither a prime nor a composite number\n");
                printf("Please enter a number greater than 1  \n");
                scanf("%d",&given_number);
           }

         while(i <= given_number -1)
           {
                if (given_number % i == 0)
                {
                  j = 0;
                }
                  i++;
           }
       if (j == 1)
         {
           printf(" %d is a prime number.\n", given_number);
         }
       else
        {
           printf(" %d is not a prime number.\n", given_number);
        }

  }


