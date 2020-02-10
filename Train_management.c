#include<stdio.h>
#include<string.h>
void menu(void);
void all(void);
void insert(void);
void search(void);


struct project
{
    char name[20];
    char dep[20];
    char arr[20];
    double price;
    int cap;
};
struct project train[20];
int i,counter = 0,n;

int main()
{
    printf("     ***<<< Welcome to the train information system >>>***\n\n");
    for(;;)
    {
        menu();
        for(i=0; i<=counter; i++)
        {

            if(n==1)
            {
                if(counter==0)
                {
                    printf("\n\n***<<< Sorry, No Tarin found. Please try again. >>>***\n\n");
                }
                else
                {
                    all();
                }
                printf("Total Records: %d",counter);
            }
            else if(n==2)
            {
                insert();
            }
            else if(n==3)
            {
                search();
            }
            else if(n==4)
            {
                 printf("GOOD BYE! HAVE A NICE DAY....\n\n");
                break;

            }
            else
            {
                printf("\n\n***<<< Sorry,You have entered an invalid input >>>***\n\n");
            }

        }
        if(n==4)
        {

            break;
        }


    }
    return 0;
}
void menu(void)
{
    printf("\n\n=======================================================");
    printf("\n***<<< Press 1 to Show all trains list. >>>***\n");
    printf("***<<< Press 2 to Add train details. >>>***\n");
    printf("***<<< press 3 to Search train details. >>>***\n");
    printf("***<<< Press 4 to Exit from system. >>>***\n\n");
    printf("=======================================================\n");
    printf("Please enter desire choice:");
    scanf("%d",&n);
    printf("\n\n");
}
void all(void)
{
    printf("\n\nTrain Name      Departure        Arrival        Ticket prise     Capacity\n");
    printf("\n---------------------------------------------------------------------------\n");
    for(i=0; i<counter; i++)
    {
        printf("%s               %s                %s                %lf              %d",train[i].name,train[i].dep,train[i].arr,train[i].price,train[i].cap);
        printf("\n\n");
    }
}

void insert(void)
{
    printf("Enter train name:");
    scanf("%s",train[counter].name);
    printf("Enter train departure: ");
    scanf("%s",train[counter].dep);
    printf("Enter train arrival:");
    scanf("%s",train[counter].arr);
    printf("Enter train's ticket price: ");
    scanf("%lf",&train[counter].price);
    printf("Enter train Capacity: ");
    scanf("%d",&train[counter].cap);
    counter++;

    printf("\n\nTrain Name      Departure        Arrival        Ticket prise     Capacity\n");
    printf("\n----------------------------------------------------------------------------\n");
    for(i=0; i<counter; i++)
    {

        printf("%s           %s            %s            %.2lf            %d",train[i].name,train[i].dep,train[i].arr,train[i].price,train[i].cap);
        printf("\n\n");

    }

}
void search(void)
{
    char str1[20],str2[20];
    char ch,name[30],dep[30],arr[30];
    int flag=0,found=0;
    printf("***<<< press A for search by name>>>***\n");
    printf("***<<< press B for search by departure place >>>*** \n");
    printf("***<<< press C for search by ARRIVAL place>>>***\n");
    printf("Enter your choice:  ");
    scanf("  %c",&ch);

    if(ch=='A')
    {
        printf("\nEnter the train name:\n");
        scanf("  %s",name);

        printf("\n\nTrain Name      Departure        Arrival        Ticket prise     Capacity\n");
        printf("\n----------------------------------------------------------------------------\n");
        {

            for(i=0; i<counter; i++)
            {
                if(strcmp(name,train[i].name)==0)
                {
                    printf("%s              %s              %s           %0.2lf             %d\n\n",train[i].name,train[i].dep,train[i].arr,train[i].price,train[i].cap);
                    found=1;
                }
            }

            if(found!=1)
            {
                printf("\n\n***<<< Sorry,There is no train found... >>>***\n\n");

            }
        }
    }

    else if(ch=='B')
    {
        printf("\nEnter the departure:");
        scanf("  %s",dep);

        printf("\n\nTrain Name      Departure        Arrival        Ticket prise     Capacity\n");
        printf("\n----------------------------------------------------------------------------\n");
        for(i=0; i<counter; i++)
        {
            if(strcmp(dep,train[i].dep)==0)
            {
                printf("%s             %s              %s             %0.2lf             %d\n\n",train[i].name,train[i].dep,train[i].arr,train[i].price,train[i].cap);
                found=1;
            }

        }
        if(found!=1)
        {
            printf("\n\n***<<< Sorry,There is no train found... >>>***\n\n");
        }
    }
    else if(ch=='C')
    {
        printf("\nEnter the arrival: ");
        scanf("  %s",arr);
        printf("\n\nTrain Name      Departure        Arrival        Ticket prise     Capacity\n");
        printf("\n----------------------------------------------------------------------------\n");
        for(i=0; i<counter; i++)
        {
            if(strcmp(arr,train[i].arr)==0)
            {
                printf("%s           %s           %s          %0.2lf           %d\n\n",train[i].name,train[i].dep,train[i].arr,train[i].price,train[i].cap);
                found=1;
            }

        }
        if(found!=1)
        {
            printf("\n\n***<<< Sorry,There is no train found...  >>>***\n\n");

        }

    }

}
