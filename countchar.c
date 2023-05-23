# include <stdio.h>

int main(void) {
    int c;
    int blanks = 0;
    int tabs = 0;
    int nl = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ') {
            ++blanks;
        } else if (c == '\t')
        {
            ++tabs;
        } else if (c == '\n')
        {
            ++nl;
        }
    }
    printf("\n%d blanks, %d tabs, %d newlines\n", blanks, tabs, nl);
    return 0;
}