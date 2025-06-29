/* 3.2 What does this code print
 * int x
 * x = 10
 * if (x < 10){
 * printf("Sharks\n");
 * } else {
 * printf("Jets\n");
 * }
 *
 * Jets
 *
 * 3.2 What does this code print
 * int x
 * x = 10 
 * if (x < 10) {
 * printf("Apple");
 * } else if (x < 20) {
 * printf("Banana");
 * } else if (x < 30) {
 * printf("Cherry");
 * }else{
 * printf("Durian");
 * }
 *
 * Banana
 *
 * 3.3 Debug Conditionals 
 * int x
 * scanf("%d", &x);
 * if (x % 2 == 0){
 * printf("x is divisible by 2\n");
 * } else if (!(x % 3)) {
 * printf("x is divisible by 3\n");
 * } else (x % 5 == 0) {
 * printf("x is divisible by 5\n");
 *
 * line 32, else blocks cannot have a conditional attached to them. 
 *
 * 3.4 What does this code print
 *
 * int x;
 * scanf("%d", &x);
 * if (!x) {
 * printf("Apple\n");
 * } else if (x > 0) {
 * printf("Banana\n");
 * } else if (x < 0) {
 * printf("Cherry\n");
 * } else {
 * printf("Dragonfruit\n");
 *
 * !x evaluates !0 to be true, so the statement breaks at apple. If it was if (x) {, it would be false. 
 * 
 * 3.5 What will correctly print out The weather looks good today, if and only if the temperature is in the range 60 to 80 or the humidity is in the range 30 to 50
 * 
 * int temp, humidity
 * scanf("%d", &temp);
 * scanf("%d", &humidity);
 *
 * ((humidity >= 30)&&(humidity <= 50)) || ((temp >= 60)&&(temp <= 80))
 * ((temp >= 60)&&(temp <= 80)) || (humidity >= 30)&&(humidity<= 50))
 *int x;
 * 
 * 3.6 How many times does this loop print "Hello"?
 * int i;
 *
 * for (i = 1; i < 5; i++) {
 *      printf("Hello\n");
 *}
 * 
 * 4
 *
 * 3.7 How many times does this loop print "Hello"?
 *
 * int i;
 * int x;
 *
 * x = 7
 * for (i = 0; i < x; i++) {
 *      printf("Hello\n");
 *      }
 *
 *  7 times 
 *
 *  3.8 How man times does this loop print "Hello"? 
 *
 *  int i;
 *  for (i = 0; i < -10; i++) {
 *      printf("Hello\n");
 *      }
 *
 *  3.9 How many times does this loop print "Hello"?
 *  int i;
 *  for (i = ; i < 9; i+=2) {
 *      printf("Hello\n");
 *      }
 *
 *  4
 *
 *  3.10 How many times does this loop print "Hello"?
 *
 *  int i;
 *  for (i = 5; i >= 0; i--) {
 *      printf("Hello\n");
 *      }
 *
 *  6
 *
 *  3.11 How many times does this loop print "tweet"?
 *
 *  int i; 
 *  i = 3;
 *  while (i > 0) {
 *      printf("tweet\n");
 *      i--;
 *      }
 *
 *  3
 * Write a loop that will print out the numbes from 100 to 200 counting by 5s 
 *
 * 3. 13 What is wrong with the code, it is supposed to print moo 10 times 
 *
 * int i;
 * for (i = 0; i < 10; i--) {
 * printf("moo\n");
 * }
 * It prints moo more than 10 times
 *
 * 3.14 True or false following code always prints 0 through 9 
 *
 * int i;
 * while (i < 10) {
 * printf("%d\n", i);
 * i++;
 * }
 *
 * False i is uninitialized, no guarantee how many times this loop will print 
 * 
 * 3.15 What is wrong, it is supposed to print numbers 0 through 9 
 * int love;
 * love = 0;
 * while (love < 10) {
 * printf("%d\n", love);
 * } 
 *
 * There is no increment for love, this is an infinite loop. 
 * 
 * 3.18 These two blocks of code print the same thing true or false
 *
 * int x, y;
 *
 * x = 10;
 * y = 20; 
 *
 * if ((x >= 10) && (y < 30)) {
 *      printf("Roar\n");
 *      y++
 *      }
 *
 * while ((x >= 10) && (y < 30)) {
 *      printf("Roar\n");
 *      y++
 *      }
 *
 * false, first loop will only print once while loop will print as long as conditions are met.
 */ 

#include <stdio.h>

int main(){
        // For problem 3.12
        printf("3.12\n");

        int i;

        for (i = 100; i < 205; i += 5){
                printf("%d\n", i);
                }
        // End of 3.12
        
        /* 3.16 Rewrite the following for loop as a while loop
         * int i;
         * for (i = 0; i < 10; i++){
         *      printf("Hello\n");
         *}
         */
        printf("3.16\n");
        i = 0;

        while (i < 10) {
                printf("Hello\n");
                i++;
                }
        //End of 3.16
        
        /* 3.17 Rewrite the following while loop as a for loop
         * int i; 
         * i = 5;
         * while (i < 10) {
         *      printf("yay!\n");
         *      i = i + 2;
         *      }
         */

        printf(3.17);
        
        for (i = 5; i < 10; i += 2) {
                printf("yay!\n");
                }
        //End of 3.17


       
return 0;
}
