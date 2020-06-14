//
//  linda-.c
//  linda-test
//
//  Created by Linda on 2020/2/13.
//  Copyright © 2020年 Linda. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a,fa,fb;
    
    {
        printf("請輸入層數：");
        scanf("%d",&a);
        
        for(fa=-1;fa<a*2;fa++)
        {
            for(fb=a;fb>fa+1;fb--)
            {
                printf("-");
            }
            
            for(fb=-1;fb<fa+1;fb++)
            {
                if(fa>=a)
                    break;
                printf("*");
            }
            
            for(fb=0;fb<fa+1;fb++)
            {
                if(fa>=a)
                    break;
                printf("*");
            }
            
            for(fb=a;fb>fa+1;fb--)
            {
                printf("-");
                
            }
            if(fa>=a)
                for(fb=1;fb<=a;fb++)
                {
                    printf("-");
                }
            if(fa>=a)
                printf("*");
            if(fa>=a)
                for(fb=1;fb<=a;fb++)
                {
                    printf("-");
                }
            printf("\n");
        }
        
        system("cls");
        system("pause");
    }
}

