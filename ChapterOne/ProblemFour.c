/* 4.1 True or false following is a definition of the function f1:
 * int f1(int x, float y); 
 * 
 * False, this is the prototype not the definition. The definition includes the function body. 
 *
 * 4.2 Which of the following are arguments to the function f2 
 *
 * int f2(char c1, char c2) {
 * ...
 * }
 *
 * int main(void){
 *      ...
 *      f2('a', '9');
 *      ...
 *      }
 *
 * 'a' and '9'
 *
 * 4.3 Given the partial listing of C code shown below and annotated with line numbers, the function add is defined on line ___ and called on line ___
 *
 * int main(void){
 *      ...
 *      add(a, b);
 *      ...
 *      }
 *
 * int add(int x, int y) {
 *      return x + y;
 *      }
 *
 * defined on line 28 and called on line 24
 *
 * 4.4 Given the following functions which ones return a value? 
 *
 * void f4(){
 *      printf("hello\n");
 *      return;
 *      }
 * void f5(int a, int b) {
 *      printf("The sum is %d\n", a + b);
 *      return;
 *      }
 *
 * Neither return a value they are both void functions
 *
 * 4.5 For which of the following is space allocated on the stack 
 * Local variables and Parameters are allocated on the stack
 *
 * 4.6 When function do_math is called how many times does it return?
 *
 * int do_math(int x, int y) {
 *      if (x > y) {
 *              return x;
 *      }
 *      y = x + 6;
 *      return y;
 *      }
 *      
 * It returns 1 time, functions only return once. 
 *
 * 4.7 What value will main print for x after the function call to dec?
 * int dec(int x, int y) {
 *      if (x >= y) {
 *              x = x - 1;
 *      } else { 
 *              x = y - x;
 *      }
 *
 *      return x;
 * }
 *
 * int main (void) {
 *      int x, y ;
 *      x = 12;
 *      y = x;
 *      y = dec(x, y);
 *
 *      printf("x is: %d\n", x);
 *
 *      return 0;
 * }
 *
 * 12, because x's value is not changed in the main function, y's value is. 
 *
 * 4.8 Suppose the function mystery is called with the argument 123. What value does it return?
 *
 * int mystery(int val) {
 *      if (val < 10){
 *      return val;
 *      } else {
 *      return (val % 10) + mystery(val / 10);
 *      }
 * }
 *
 * 6
 */
 
 #include <stdio.h>

 //problem 4.9 Write a recursive function that generates the nth fibonacci number for some number n 
 //problem 4.10 implement and test a power function (for positive integer exponents only). A call to your function should compute base^exponent.


//4.9 
int fibo(int n){
        if (n == 0){
                return 0;
                }
        else if (n == 1){
                return 1;
                }
        else{
        n = fibo(n - 1) + fibo(n - 2);        
        }

return n;
}
//4.9
//4.10

int power(int base, int exponent) {
        int i;
        int result = base;
        for (i = 1; i < exponent; ++i) {
                result = result * base; 
        }
                
        return result;

       }


int main() {
        //4.9
        int n;
        int result;

        printf("Enter fibonacci number: ");
        scanf("%d", &n);

        result = fibo(n);
        printf("Fibonacci number for %d is %d\n", n, result);
        //4.9
        //4.10
        int base;
        int exponent;
        

        printf("Enter base: ");
        scanf("%d", &base);
        printf("Enter exponent: ");
        scanf("%d", &exponent);

        result = power(base, exponent);
        
        printf("%d to the power of %d is %d\n", base, exponent, result);


        


return 0;
}
