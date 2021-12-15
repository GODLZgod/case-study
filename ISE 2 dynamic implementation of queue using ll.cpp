#include<stdio.h>
#include<stdlib.h>

struct queue
{
  int data;
  struct queue *next;	
};
typedef struct queue QUEUE;
QUEUE *front=NULL,*rear=NULL,*p,*q;

struct stack
{
	int data;
	struct stack *next;
};
typedef struct stack STACK;
STACK *last=NULL;
STACK *start=NULL;
STACK *r,*s;

int main()
{
	int ch;
	do
	{
		printf("\n1.Enqueue \n2.Dequeue\n3.Traverse\n4.Exit\n5.push\n6.Stack traverse");
 	    scanf("%d",&ch);
 	    switch(ch)
 	    {
 	    	case 1:
			         p=(QUEUE*)malloc(sizeof(QUEUE));
 	                 scanf("%d",&p->data);
 	                 if(front==NULL)
 	                 {
 	                 	p->next=NULL;
 	                 	front=p;
 	                 	rear=p;
					  }
					else
					{
					    q=rear;
					    q->next=p;
						p->next=NULL;
						rear=p;
					} 
 	    		break ;
 	    	case 2:
			       if(front==NULL)
 	    	          {
 	    	          	printf("Queue underflow\n"); 	    	          	
					   }
					else
					{
						p=front;
						front=p->next;
						printf("%d is dequeue\n",p->data);
						free(p);
					}
 	    		break ;
 	    	case 3 :
			        if(front==NULL)
			        {
			        	printf("Queue is empty\n");
					}
					else 
					{
					  q=front;
					  while(q!=NULL)
					  {
					  	printf("%d \n",q->data);	
					  	q=q->next;
					  }
					}
 	    		break ;
 	    
 	    	case 4:r=(STACK *)malloc(sizeof(STACK));
			 scanf("%d",&r->data);
			 if(start==NULL)
			 {
			 	r->next=NULL;
			 	start=r;
			 	last=r;
			 }
			 else
			 {
			 	last->next=r;
		     	r->next=NULL;
				last=r;
			 }
			 break;
			 case 5: if(start==NULL)
			        {
			        	printf("stack is empty\n");
					}
					else 
					{
					  s=start;
					  while(s!=NULL)
					  {
					  	printf("%d \n",s->data);	
					  	s=s->next;
					  }
					}
 	    		break ;
 	    		case 6:return 0;
 	    		break;
			 	
 	    	default :printf("Enter correct choice \n");
 	    		break ;
		 }
	}while(ch!=5);
    return 0;	
}
