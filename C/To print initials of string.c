#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char s[100];
    int i=1;
    printf("Enter a string: ");
    fgets(s,100,stdin);
    for(i=0;s[i]!='\0';i++)
    {
       s[i]=toupper(s[i]); 
    }
    int index = 0;
    while(s[index] == 32) index++;   
    printf("%c", s[index]);     
    for(int i=index; i<strlen(s); i++){
        if(s[i]==32){
            if(s[i+1] >= 'A' && s[i+1] <= 'Z'){
                printf("%c",46);  
                printf("%c", s[i+1]);
            }
        }
    }   
}
