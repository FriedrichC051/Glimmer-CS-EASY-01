#include <stdio.h>

int main()
{
    int code;
    while(1)
    {
		printf("Show me your code,please.");
        scanf("%d",&code);
        if(code >= 100000 && code <= 999999)
        {
            printf("I am super hacker!");
            return 0;
        }
        else printf("Fake code!\n");
    }
    return 0;
}
