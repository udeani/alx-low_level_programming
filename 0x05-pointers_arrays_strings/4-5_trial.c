// #include <stdio.h>

// int main(void)
// {
//         int i = 0;
//         char *s = "henry";
//         char temp = *s;
        
        
//         while (s[i] != '\0')
//         {
//                 i++;
//         }
        
//         while (i != 0)
//         {
//                 i--;
//                 printf("%c",s[i]);
//         }
//         printf("\n");

//         return (0);
// }
#include <stdio.h>

int main(void)
{
        int i, j = 0;
        char *s = "henry";
        char temp = *s;
        
        
        while (s[i] != '\0')
        {
                i++;
        }
        //printf("%c", temp);
        
        while (i != 0)
        {
                i--;
                //s[j] = temp[i];
                j++;
                //printf("%c",s[i]);
        }
        //printf("%c", *s);
        return (0);
}

