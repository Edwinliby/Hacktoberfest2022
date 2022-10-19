#include<stdio.h>
 
int main()
{
    char sentence[100], search[15];
    int count1 = 0, count2 = 0, i, j, f;
 
    printf("Enter a string:");
    gets(sentence);
    printf("Enter search substring:");
    gets(search);
    
    int l = strlen(search);
    
    while (sentence[count1] != '\0')
        count1++;
    while (search[count2] != '\0')
        count2++;
        
    for (i = 0; i <= count1 - count2; i++)
    {
        for (j = i; j < i + count2; j++)
        {
            f = 1;
            if (sentence[j] != search[j - i])
            {
                f = 0;
                break;
            }
        }
        if (f == 1)
            break;
    }
    if (f == 1){
        printf("%d",j-l);}
    else{
        printf("cannot find");
    }
    return 0;
}