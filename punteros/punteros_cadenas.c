#include <stdio.h>

int main(){
    char str1[ ] = "Te gustaría explorar C.";
    char *str2 = "Te gustaria explorar C.";

    puts(str1);
    puts(str2);

    /*str1++; Invalid expression */
    str2++; /*Valid expression*/
    puts(str2); /*Prints*/

    return 0;
}
