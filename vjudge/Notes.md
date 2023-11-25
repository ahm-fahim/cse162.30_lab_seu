```
fahim@fahim-X510UNR:~/Documents/CSELAB/vjudge$ cat code.c
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", n * n);

    return 0;
}
fahim@fahim-X510UNR:~/vjudge$ gcc -o code code.c  // generate code file
fahim@fahim-X510UNR:~/vjudge$ ./code // run code file
2
4fahim@fahim-X510UNR:~/vjudge$ ./code <input.txt> GO.txt // get input from input.txt file and save output on GO.txt file

```
