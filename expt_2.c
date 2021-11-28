#include <stdio.h>
int n;
int a[100];
int f=-1;
int r=-1;
void Enqueue();
void Dequeue();
void Display();
void main()
{
    int b = 1;
    int choice;
    printf("Enter the size of Queue\n");
    scanf("%d",&n);

    while(b!=0)
    {
        printf("Enter your choice\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            Enqueue();
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            Display();
            break;
        case 4:
            b=0;
            printf("END\n");
            break;       
        default:
            break;
        }

    }
}
void Enqueue()
{
    int x;
    printf("Enter the number to insert\n");
    scanf("%d",&x);
    if(r==n-1)
    {
        printf("Overflow");
        
    }
    else if(f==-1&&r==-1)
    {
        f=0;
        r=0;
        a[r]=x;
        
    }
    else
    {
        r++;
        a[r]=x;
    }
}
void Dequeue()
{
    if(f==-1&&r==-1)
    {
        printf("Under flow");

    }
    if(f==r)
    {
        f=-1;
        r=-1;
    }
    else 
    {
        f++;
    }
}
void Display()
{
    printf("The Queue is as follows:\n");
    for(int i=f;i<=r;i++)
    {
        printf("%d\n",a[i]);

    }
}