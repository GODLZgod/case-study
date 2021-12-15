#include<stdio.h>
void push();
void pop();
void traversestack();
void enqueue();
void traversequeue();
void dequeue();
int c,j;
int b[5];
int front=-1;
int rear=-1;
	int ch,i;
	int a[5];
	int top=-1;
int main()
{
	do
	{
		printf("\n1.push\n2.pop\n3.traverse of stack\n4.exit\n5.enqueue\n6.traverse of queue\n7.dequeue");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push();/*if(top==4)
		    	{
				printf("\nstack is overflow");
			    }
			else
			  {
				top=top+1;
				printf("\nenter the element");
				scanf("%d",&a[top]);
			  }*/
				break;
			case 2:pop();/*if(top==-1)
			{
				printf("\nstack underflow");
			}
			else
			{	
				printf("\n%d is popped",a[top]);
				top=top-1;
			}*/
			     break;
			case 3:traversestack();/*if(top==-1)
			{
				printf("\nstack underflow");
			}
			else
			{	
				printf("\n%d is popped",a[top]);
				top=top-1;
			}*/
			    break;
			case 4:
			    break;
			case 5:enqueue();
				break; 
			case 6:traversequeue();	
			      break;
			case 7:dequeue();
				break;  	
			    default:printf("\ninvalid choice");
		}
		
		
	}
	while(ch!=4);

}
void push()
{
	if(top==4)
		    	{
				printf("\nstack is overflow");
			    }
			else
			  {
				top=top+1;
				printf("\nenter the element");
				scanf("%d",&a[top]);
			  }
	
}
void pop()
{
	if(top==-1)
			{
				printf("\nstack underflow");
			}
			else
			{
				
				printf("\n%d is popped",a[top]);
			
				top=top-1;
			}
	
}
void traversestack()
{
	if(top==-1)
			{
				printf("\nstack is empty");
			}
			else
			{
				for(i=0;i<=top;i++)
				{
						printf("%d\n",a[i]);
				}
	
}
}
void enqueue()
{
	if(rear==4)
		{
			printf("\n queue is overflow");
		}
		else
		{
			if(front==-1)
            {		
				front=front+1;
				rear=rear+1;
			}
			else
			{
				rear=rear+1;
			}
			scanf("%d",&b[rear]);
		}
	
}
void traversequeue()
{
		if(front==-1)
		{
			printf("\n queue is empty");
		}
		else
		{
			 
			for(i=front;i<=rear;i++)
			{
			
			printf("%d\n",b[i]);
		    }
		}
}
void dequeue()
{
		if(front==-1)
			{
				printf("\Nqueue is underflow");
			}
			else
			{
				printf("\n %d get dequeued",b[front]);
				front=front+1;
				if(front>rear)
				{
					front=-1;
					rear=-1;
				}
			}
}
