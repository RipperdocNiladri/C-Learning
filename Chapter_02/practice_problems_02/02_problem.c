// Convert seconds to hours, minutes, and seconds
#include <stdio.h>

int main()
{
     int S;
     printf("Enter your total time in seconds: ");
     scanf("%d", &S);

     // int M = S / 60;
     // int H = M / 60;
     // int RM = M%60;
     // int RS = S%60;

     int H = S / 3600;
     int RM = (S % 3600) / 60;
     int RS = S % 60;

     printf("%d hours %d minutes %d seconds\n", H, RM, RS);

     return 0;
}