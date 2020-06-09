#include<stdio.h>
void main()
{
	int a,temp1,num;
	int b,c,temp=0,rem=0,result[100],start[100],i=0,j,count=0;
	printf("CHOOSE BIT OPERATION :::::");
	printf("\nFor swap press 1:\nFor toggle press 2:\nFor Set press 3:\nFor clear press 4:\nFor Checking press 5:\n");
	scanf("%d",&num);
	printf("Enter the num for bit operation:\n");
        scanf("%d",&a);
        while(a>0)
        {
                start[i]=a%2;
                a/=2;
                i++;
        }
        for(j=i-1;j>=0;j--)
        printf("%d",start[j]);
	switch(num)
	{
		case 1:
			 printf("\nEnter the swapping positions:");
		         scanf("%d %d",&b,&c);   
       			 if(((b>c) && (b<i)) || ((c>b) && (c<i)))
        		 {
        		        temp=start[b];
               			start[b]=start[c];
               			start[c]=temp;
               			printf("After bit swapping :");
       			 }
			 break;
		case 2:	
			 printf("\nEnter the toggling position:");
			 scanf("%d",&b);
		         start[b]=!start[b];
			 break;
		case 3:
			printf("\nEnter the Set position:");
			scanf("%d",&b);
			if(start[b]==0)
			start[b]=1;
			break;
		case 4:
			printf("\nEnter the clear position:");
			scanf("%d",&b);
			if(start[b]==1)
			start[b]=0;
			break;
		case 5:
			printf("\nEnter the check position:");
			scanf("%d",&b);
			if(start[b]==1)
			printf("HIGH\n");
			if(start[b]==0)
			printf("LOW\n");
			break;
		default:
			printf("INVALID OPTION\n");
			break;
	}
	if((num!=5))
       	{
        	for(j=i-1;j>=0;j--)
                printf("%d",start[j]);
                printf("\n");
       	}
       //	else if((b>i) || (c>i))
      //  printf("Invalid Position!!!!!!!!!\n");



}
