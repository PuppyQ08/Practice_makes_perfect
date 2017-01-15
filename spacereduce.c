//
//  main.c
//  Test
//
//  Created by QQY on 1/15/17.
//  Copyright © 2017 QQY. All rights reserved.
//

#include <stdio.h>
#define lastc 'a'

int main()
{
    int c;
    int Last = lastc;
    while((c = getchar()) != EOF)
    {
        if (c == ' '){
            if ( Last != ' ')
                putchar(c);
        }
        if (c != ' ')
            putchar(c);
        Last = c;
    }
    
}
