/* 1.1 In C, variables must be explicitly declred with their data types, while in Python, variables are dynamically typed and their data types are determined at runtime. 
* 1.2 C code needs to be compiled into a binary executable before it can be run, while Python code is interpreted line-by-line during execution
* 1.3 Once code is compiled, the resulting binary can be executed on the target platform without needing access to the source code. Compiled code is transformed into machine code that runs more efficiently on the target platform. Compilers analyze code and apply various optimizations during the compilation process. 
* 1.4 Rewrite the given Python program into C
*/
#include <stdio.h>

int main (){
	int result;
	result = 1 + 2;
	printf("%d", result);
	return 0;
}
