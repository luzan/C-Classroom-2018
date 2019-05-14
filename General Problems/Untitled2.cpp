
    do
    {
        rem = intPart%10;
        intPart/=10;
        if (j==1)
        {
            // decimal to integer!
            int floatPart_1;
            float floatPart_2;
            int ax;
            while ((floatPart-floor(floatPart))!=0)
            {
                floatPart*=10;
                //printf("\n\nfloatPart=%f , int(floatPart)=%d\n\n",floatPart,ax);
            }
            int floatPartInt,rem1;
            floatPartInt = round(floatPart);
            printf("\n\nfloatPart = %f , floatPartInt=%d\n\n",floatPart,floatPartInt);
             do
            {
                rem1 = floatPartInt%10;
                floatPartInt/=10;
                printf("%d",rem1);
            }while(floatPartInt!=0);
            printf(".");
        }
        printf("%d",rem);
        j++;
 
    }while(intPart!=0);
