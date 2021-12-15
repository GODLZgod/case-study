#include<stdio.h>
void push();
void pop();
void traversestack();
void enqueue();
void traversequeue();
void dequeue();
void push1();

int c,j;
int b[100];
int front=-1;
int rear=-1;
	int ch,i;
	int a[100];
	int top=-1;
int main()
{
	do
	{
		printf("\n1.push\n2.pop\n3.traverse of stack\n4.exit\n5.enqueue\n6.traverse of queue\n7.dequeue\n8.push1\n9.enqueue1");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: if(top==10)
		    	{
				printf("\nstack is overflow");
			    }
			else
			  {
				top=top+1;
				printf("\nenter the element");
				scanf("%d",&a[top]);
			  }
				break;
			case 2:if(top==-1)
			{
				printf("\nstack underflow");
			}
			else
			{	
				printf("\n%d is popped",a[top]);
					b[rear]=a[top];
					printf("\n %d enqueued in queue",b[rear]);
				enqueue();
				top=top-1;
			}
			     break;
			case 3:if(top==-1)
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
			    break;
			case 4:
			    break;
			case 5:enqueue();	/*if(rear==10)
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
			
		}*/
	
				break; 
			case 6:if(front==-1)
		{
			printf("\n queue is empty");
		}
		else
		{
			 
			for(i=-1;i<=rear;i++)
			{
			
			printf("%d\n",b[i]);
		    }
		}	
			      break;
			case 7:	if(front==-1)
			{
				printf("\nqueue is underflow");
			}
			else
			{
				printf("\n %d get dequeued",b[front-1]);
				
				front=front+1;
				if(front-1>rear)
				{
					front=-1;
					rear=-1;
				}
			}
				break;
				 	
			    default:printf("\ninvalid choice");
		}
		
		
	}
	while(ch!=10);
	return 0;

}
void push1()
{
		if(top==10)
		    	{
				printf("\nstack is overflow");
			    }
			else
			  {
				top=top+1;
				}	
}
void enqueue()
{
	rear=-1;
	front=-1;
if(rear==10)
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
			
		}	
}
