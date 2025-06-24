/* printf symbols and meanings 
 * \t   tab character
 * %g   float
 * /n   newline character
 * %s   string
 * %c   char
 * %d   int 
 *
 * INCORRECT CODE
 *
 * int age
 * printf("Enter your age: ");
 * scanf("%d", age);
 *
 * There is a missing & infront of age
 */



// calculates area of a right triangle from base and height
#include <stdio.h>

int main(){
        float base;
        float height;
        float area;

        printf("Enter base: ");
        scanf("%g", &base);
        printf("Enter height: ");
        scanf("%g", &height);

        area = 0.5 * base * height;

        printf("The area is %g", area);



        return 0;
}
