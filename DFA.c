#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main() 
{
    int arr[2][2],i,j,l,flag=0,s;
    char input[100];
    printf("Implmenting DFA of regular expression (a+aa*b)*\n\n\nEnter Input String \n");
    arr[0][0]=1;
    arr[0][1]=-1;
    arr[1][0]=1;
    arr[1][1]=0;
    scanf("%s",input);
    l=strlen(input);
    for (i=0;i<l;i++) 
    {
    	if(input[i]!='a'&&input[i]!='b') 
    	{
    		printf("Value entered is wrong\n");
    		//getch();
    		exit(0);
    	}
    	if(input[i]=='a')
    	{
    		flag=arr[flag][0]; 
            printf("q%d%d\n",i,flag);
    	}
    	else
    	{
    		flag=arr[flag][1];
            printf("q%d%d\n",i,flag);
    	}
    	if(flag==-1) 
    	{
    		printf("String not Accepted by this Language\n");
    		break;
    	}
    }
    if(i==l)
    	printf("String Accepted\n");
    //getch();
}