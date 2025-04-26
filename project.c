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
