#include "main.h"
#include "substitude.h"
#include "calculate.h"



int main()
{
    char * ch1 = (char *)malloc(50);
    char * ch2 = "this is an example";
    memorycpy(ch1, ch2, 5);
    printf("%s", ch1);
    return 0;
}
