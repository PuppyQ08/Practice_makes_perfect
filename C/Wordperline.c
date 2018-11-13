//
//  main.c
//  Test
//
//  Created by QQY on 1/15/17.
//  Copyright © 2017 QQY. All rights reserved.
//

#include <stdio.h>
#define IN 1
#define OUT 0

int main()
{
    int c, state = OUT;
   while((c = getchar()) != EOF )
   {
       if ( c == ' '|| c == '\n'|| c == '\t')
       {
           if ( state == IN)
           {
               state = OUT; // finish the word to next line
               putchar('\n');
           }
       }
       else if ( state == OUT) // beginning of the word
       {
           state = IN;
           putchar(c);
       }
       else///in the word
           putchar(c);
   }
} /* made so many mistakes.....WTF - - */
