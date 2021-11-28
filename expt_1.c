#include<stdio.h>
int a[100];  
int top=-1;
int n;
void Push()
{
    int x;
    printf("Enter no to push\n");
    scanf("%d",&x);
    if(top==n-1)
    {
        printf("Overflow\n");
        
    }
    
    else
    {
        top++;
        a[top]=x;
    }

}
void Pop()
{
    if(top==-1)
    {
        printf("Underflow\n");

    }
    
    else 
    {
        top--;
    }
}
void Peek()
{
    int b;
    printf("Enter the index to peek\n");
    scanf("%d",&b);
    if((top-b+1)<=(-1))
    printf("Underflow Peep\n");
    else
    printf("%d\n",a[top-b+1]);
}
void Change()
{
    int b,c;
    printf("Enter the index to Change\n");
    scanf("%d",&b);
    printf("Enter the  number\n");
    scanf("%d",&c);
    if((top-b+1)<=(-1))
    printf("Underflow Change\n");
    else
    a[top-b+1]=c;
}
void Display()
{
    printf("The Stack is as follows:\n");
    for(int i=0;i<=top;i++)
    {
        printf("%d\n",a[i]);

    }
}
void main()
{   
    int b = 1;
    int choice;
    printf("Enter the size of Stack\n");
    scanf("%d",&n);

    while(b!=0)
    {
        printf("Enter your choice\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("4.Peek\n");
        printf("5.Change\n");
        printf("6.Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            Push();
            break;
        case 2:
            Pop();
            break;
        case 3:
            Display();
            break;
        case 4:
            Peek();
            
            break;
        case 5:
            Change();
            break;
        case 6:
            b=0;
            printf("END\n");
            break;           
        default:
            break;
        }

    }
}
