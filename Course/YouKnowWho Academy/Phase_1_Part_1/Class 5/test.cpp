#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    scanf("%s",&str);

    int length=strlen(str);

    char p[5] = {'h', 'e', 'i', 'd', 'i'};

    int j = 0;
    for(int i=0; i<length; i++)
    {
        if(str[i] == p[j]) j++;

        if(j == 5)
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");

    return 0;
}
