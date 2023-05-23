/* Exercise 1-2: Print possible alternate escape characters
 *
 * Experiment to find out what happens when printf's argument string contains
 * \c, where c is some character not listed above.
 */

// Includes

#include <stdio.h>

/* Main */

int main(void) {

    printf("\\a: \a\n");
    printf("\\e: \e\n");
    printf("\\f: \f\n");
    printf("\\p: \p\n");
    printf("\\r: \r\n");
    printf("\\v: \v\n");
    printf("\\0: \0\n");
    printf("\\1: \1\n");
    printf("\\2: \2\n");
    printf("\\3: \3\n");
    printf("\\4: \4\n");
    printf("\\5: \5\n");
    printf("\\6: \6\n");
    printf("\\7: \7\n");
    printf("\\?: \?\n");


    return 0;
}