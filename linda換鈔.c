//
//  main.c
//  linda換鈔1
//
//  Created by Linda on 2020/2/14.
//  Copyright © 2020年 Linda. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int number,th,hun,ten,per;

        th=number/1000;
        hun=(number-th*1000)/100;
        ten=(number-th*1000-hun*100)/10;
        per=(number-th*1000-hun*100-ten*10)/1;
        
        printf("想換多少錢呢？\n");
        scanf("%d",&number);
        
    th=number/1000;
        printf("%d張一仟元\n",th);
    
    hun=(number-th*1000)/100;
        if(hun>4)
        {
            printf("1張伍佰元\n");
            hun=hun-5;
            printf("%d張一佰元\n",hun);
            hun=hun+5;
        }
        else
        {
            printf("%d張一百元\n",hun);
        }

    ten=(number-th*1000-hun*100)/10;
        if(ten>4)
        {
            printf("1枚伍十元\n");
            ten=ten-5;
            printf("%d枚十元\n",ten);
            ten=ten+5;
        }
        else
        {
            printf("%d枚十元\n",ten);
        }
    
   per=(number-th*1000-hun*100-ten*10)/1;
        if(per>4)
        {
            printf("1枚伍元\n");
            per=per-5;
            printf("%d枚壹元\n",per);
            per=per+5;
        }
        else
        {
            printf("%d枚壹元\n",per);
        }
    
        
    return 0;
}
