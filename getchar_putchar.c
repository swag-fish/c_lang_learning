#include <stdio.h>

main()
{
    int c;
    /*
    c = getchar();
    
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    
    while ((c = getchar()) != EOF)
        putchar(c);
    */

    c = getchar() != EOF;
    printf("%d\n", c);

    printf("%d\n", EOF);
}
