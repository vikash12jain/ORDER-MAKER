# ORDER-MAKER
 //  author : vikash        
//  mission: to do some fun (application)

// THIS IS READY; ------> MESSAGE FROM AUTHOR !
// you can connect with me through gmail id: ' vikash12jain@gmail.com '

#include <stdio.h>
int main()
{
    int order;
    printf(" \n");
    printf("!! FARM CREAM CAFE WELCOME YOU !! \n");
    printf("ENTER A VALUE WHICH IS GIVEN BELOW TO PLACE YOUR ORDER\n");
    printf("0 for water \n"
           "1  to order tea \n"
           "2  to order coffee \n"
           "3  to order fruit juice\n"
           "4  to order snack \n Enter: ");                     // we can write ENTER in next line also but let it be, it will work.
    scanf("%d",&order);

    if (order == 1)
    {
        printf("you have ordered tea\n"
               "which type of tea you want\n"
               "press 111 to order lemon tea\n"
               "press 222 to order green tea\n"
               "press 333 to order masala tea\n Enter: ");
        scanf("%d", &order);
        if (order == 111)
        {
            printf("you have ordered lemon tea\n"
            "your order is in process\n");
        }
        else if (order == 222)
        {
            printf("you have ordered green tea\n"
            "your order is in process\n");
        }
        else if (order == 333)
        {
            printf("you have ordered masala tea"
            "your order is in process\n");
        }
         else {
        printf("INVALID INPUT");
        goto exit;
    }
    }
    else if (order == 2)
    {
        printf("you have ordered coffee\n"
               "which type of coffee you want\n"
               "press 111 to order hot coffee\n"
               "press 222 to order cold coffee\n"
               "press 333 to order cappuccino\n Enter: ");
        scanf("%d", &order);
        if (order == 111)
        {
            printf("you have ordered hot coffee"
            "your order is in process\n");
        }
        else if (order == 222)
        {
            printf("you have ordered cold coffee"
            "your order is in process\n");
        }
       else if (order == 333)
        {
            printf("you have ordered masala tea"
            "your order is in process\n");
        }
         else {
        printf("INVALID INPUT");
        goto exit;
    }
    }
   else if (order == 3)
    {
        
       printf("you have ordered fruit juice \n"
               "which type of fruit juice  you want\n"
               "111 for banana juice\n"
               "222 for strawberry shake\n"
               "333 for mix shake\n"
               "444 for apple shake\n"
               "999 for if you want to order any thing else\n Enter: "
               );
               scanf("%d",&order);
            
               if (order == 111) {
        printf("you have ordered banana shake \n order is in process\n");
}
              else if (order == 222) {
        printf("you have ordered strawberry shake \n order is in process\n");
}
              else if (order == 333) {
        printf("you have ordered mix shake \n order is in process\n");
}
              else if (order == 444) {
        printf("you have ordered apple shake \n order is in process\n");
              }
              else if (order == 999){
                  printf("okay we will write your order\n");
                }   else {
        printf("INVALID INPUT");
        goto exit;
    
              }
}
else if (order == 4)
{printf("you have order snacks\n'order is in process'\n");}
    else {
        printf("INVALID INPUT");
        goto exit;
    }
    
printf("\n!!! ENJOY YOUR TREAT !!!\n");
exit:
    return 0;
}
