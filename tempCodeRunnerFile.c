#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rows, i, j, space, count=1;
/* declaring various variables such as; rows, i, j, space, count and initializing the variable count as 1 */
printf("Enter the number of rows you want to be printed in the form of pascal triangle: \n");
/* initializing printf statement to enable the user to enter a number as an input */
 scanf("%d", &rows);
/* initializing scanf statement to assign the number entered by the user to the variable rows */  
 for(i=0; i<rows; i++)
/* commencing a for loop {initializing the value of i as o; providing a termination condition as the value of variable i must be less than the value of rows; and providing a post-increment statement as i++ so that the value of I can be altered for the further for loop evaluation*/
{
//outer for loop initiated
   for(space=1; space<=rows-i; space++)
/* commencing a for loop {initializing the value of space as 1; providing a termination condition as the value of variable space must be less than or equal to the value of rows-i; and providing a post-increment statement as space++ so that the value of space can be altered for the further for loop evaluation*/
   printf("  ");
/* printf statement to provide space between numbers if the above for loop is true */
//first inner loop print space
   for(j=0; j<=i; j++)
/* commencing a for loop {initializing the value of j as o; providing a termination condition as the value of variable j must be less than or equal to the value of i; and providing a post-increment statement as j++ so that the value of j can be altered for the further for loop evaluation*/
{
   if(j==0 || i==0)
/* initializing if statement and providing termination condition as j should be equal to 0 or I should be equal to 0 */
    count=1;
/* assigning the value 1 to the variable count */
   else
     count=count*(i-j+1)/j;
     printf("%4d", count);
/* printf statement to print the final value after one entire while loop execution */
   }
   printf("\n");
/* printf statement to end the current line and start a new line if the above while loop is true */
}
    return 0;
}
