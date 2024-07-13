// Player management System Project Using C Language Yogesh Baviskar //

#include<stdio.h>
#include<string.h>

typedef struct Player
{
	int jsno;
	char name[50];
	int runs;
	int wickets;
	int matches;
	
}Player;
void hardcode(Player*p);
void addPlayer(Player*,int);
void displayPlayer(Player*);
void update(Player*, int);
void searchPlayer(Player*, int);
void deletePlayer(Player*, int);
void sortPlayer(Player*, int);

int ctr=0;

void main()
{
	
    int size=10;
	Player p[size];
	hardcode(p);
	displayPlayer(p);
	int choice;
	//hardcode(p);
	do
	{
	printf("\n__________________________________________\n");
	printf("\n......PLAYER MANAGEMENT SYSTEM......\n");
    printf("__________________________________________\n");
    printf("\n==========================\n");
    printf("||1.Add Player          ||\n");
    printf("||2. Display Players    ||\n");
    printf("||3. Update Players     ||\n");
    printf("||4. Search Players     ||\n");
    printf("||5. Delete Players     ||\n");
    printf("||6. Sort Players       ||\n");
    printf("||7. Exit               ||\n");
    printf("==========================\n");
    
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
	
	switch(choice)
	{   

		case 1:
			addPlayer(p,size);
			break;
			
		case 2:
			displayPlayer(p);
			break;	
	    		
		case 3:
		    update(p, size);
		    break;
		    
		case 4:
		    searchPlayer(p, size);
		    break;
		    
		case 5:
		    deletePlayer(p, size);
		    break;
		
		case 6:
		    sortPlayer(p, size);
		    break;
			
		default:
		printf("Invalid Choice!!!!!");	    
			
	}
}
    while(choice!=7);	
		
}

//function call

void hardcode(Player*p)
{
	p[0].jsno=7;
	strcpy(p[0].name,"MSD");
	p[0].runs=99;
	p[0].wickets=2;
	p[0].matches=1;
	ctr++;
	
	p[1].jsno=45;
	strcpy(p[1].name,"Rohit");
	p[1].runs=598;
	p[1].wickets=5;
	p[1].matches=4;
	ctr++;
	
    p[2].jsno=18;
	strcpy(p[2].name,"Kohli");
	p[2].runs=199;
	p[2].wickets=4;
	p[2].matches=2;
	ctr++;
		
}
void addPlayer(Player* p, int size)
{
	
	
	printf("Adding Player:\n");
	printf("_______________");
	
	if(ctr<size)
	{
	printf("\nEnter the jsno:");
	scanf("%d",&p[ctr].jsno);	
		
	printf("\nEnter the name:");
	scanf("%s",&p[ctr].name);	
		
	printf("\nEnter the runs:");
	scanf("%d",&p[ctr].runs);	
		
	printf("\nEnter the wickets:");
	scanf("%d",&p[ctr].wickets);	
	
	printf("\nEnter the matches:");
	scanf("%d",&p[ctr].matches);		
	
	ctr++;
	}
	
	else
	{
		printf("\nInsufficient memory!!!!!");
	}
}

//void displayPlayer(Player* p)
//{
//
//	printf("\nPlayer information....");
//	printf("\n---------------------\n");
//
//    int i;	
//	for(i=0;i<ctr;i++)
//	{
//		printf("\njsno:%d\t Name:%s\t Runs:%d\t Wickets:%d\t Matches:%d\t\n",p[i].jsno,p[i].name,p[i].runs,p[i].wickets,p[i].matches);
//		
//	}	
//}

void displayPlayer(Player *p)
{
    printf(" \n\n                                 <<<<<<<<<<  List Of Players  >>>>>>>>>>                                 "); 
	printf("\n----------------------------------------------------------------------------------------------------\n");
    printf("| %-4s | %-15s | %-17s | %-15s | %-20s | %-10s |\n", "No.", "Jersey Number", "Player Name", "Total Runs", "Number of Wickets", "Matches"); 
    printf("|------|-----------------|-------------------|-----------------|----------------------|------------|\n");  
    
    for (int i = 0; i < ctr; i++)    
	{
		printf("| %-4d | %-15d | %-17s | %-15d | %-20d | %-10d |\n", 1 + i, p[i].jsno, p[i].name, p[i].runs, p[i].wickets, p[i].matches); 
	} 
	
	printf("|------|-----------------|-------------------|-----------------|----------------------|------------|\n"); 
}

void update(Player*p,int size)

{
	printf("\nUpdating Player Information:"); 

   int choice,run,wickets,matches ;
   int i ;
   	int jsNo;
   printf("\n search menu:\n");
   printf("1.Enter the updated runs:\n");
  
   printf("2.Enter the updated number of matches:\n");
  
   	printf("3.Enter the updated number of wickets:\n");
   	
   	printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("\nEnter the jersey number to update:");
		scanf("%d",&jsNo);
    switch (choice)
    {
	
    case 1:
    	{
    		
    	printf("\nUpdating Player Information:"); 
        printf("\n__________________________________");
		
	
	    for(i=0;i<=ctr;i++)
    	{              
			if(jsNo==p[i].jsno)
			{
					printf("\nEnter the updated runs:");
	    			scanf("%d",&run);	
			    	p[i].runs=run;
			    	printf("\n Runs :: %d",p[i].runs);
			    	//break;	
			}
		}
		}
		break;	
			
				            
    case 2:
	  	
      	printf("\nUpdating Player Information:"); 
        printf("\n__________________________________");
    for(i=0;i<ctr;i++)
    	{
			if(jsNo==p[i].jsno)
				{
					printf("\nEnter the updated matches:");
	    			scanf("%d",&matches);
					p[i].matches=matches;
				   printf("\n matches:: %d",p[i].matches);
			//	break;		
				}
			}
    
       break;
    case 3:
     	
      	printf("\nUpdating Player Information:"); 
        printf("\n__________________________________");
	  	 for(i=0;i<ctr;i++)
    	{
			if(jsNo==p[i].jsno)
				{
					printf("\nEnter the updated wickets:");
	    			scanf("%d",&wickets);
					p[i].wickets=wickets;
				   printf("\n wickets:: %d",p[i].wickets);
				   break;		
				}
        }
      		


			break;

default:
	printf("Invalid choice");
	
}
}
void searchPlayer(Player*p, int size)
{
    printf("\nSearching Player\n");
    
    int choice;
    int i, flag = 0; 
    
    printf("\nSearch Menu:\n");
    printf("1. Search by Jersey Number\n");
    printf("2. Search by Runs\n");
    printf("3. Search by Name\n");
    printf("4. Back to main menu");
    
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    	
    	
    case 1:
    		
    printf("\nSearching player.....");
	printf("\n___________________");
	int js;
	printf("\nEnter a player jersey number to search:");
	scanf("%d",&js);
	

	for(i=0;i<ctr;i++)
	{
		if(p[i].jsno==js)
		{
			flag=1;
			break;
			
		}
	
	}
	if(flag==1)
	{
	 printf("\nplayer found.....!!!!!!\n\n ",i,p[i].name);	
	}	
	else
	{
	 printf("\nPlayer not found!!!!!....Invalid jersey number!!!!!\n\n");	
	}	
    		
    case 2:
    	
    	
    printf("\nSearching player by runs:");
	printf("\n___________________");
	
	int runs;
	printf("\nEnter a player runs:");
	scanf("%d",&runs);
	
	int i;
	int flag=0;
	
	for(i=0;i<ctr;i++)
	{
		if(p[i].runs==runs)
		{
			flag=1;
			break;
			
		}
	
	}
	
	if(flag==1)
	{
	 printf("\nplayer found.....!!!!!\n\n ",i,p[i].name);	
	}	
	else
	{
	 printf("\nPlayer not found!!!!.....Invalid name!!!\n");	
	}
	
	case 3:
		
	printf("\nSearching player by Name        :");
	printf("\n___________________");
	
	char name[50];
	printf("\nEnter a player Name:");
	scanf("%s",&name);
	
//	int i;
	for(i=0;i<ctr;i++)
	{
		int result=strcmp(name,p[i].name);
		
		if(result==0)
		{	
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Player found.....!!!!!\n",i);
	}
	else
	{
		printf("\nPlayer not found!!!!.....Invalid name!!!\n");
	}
	
	case 4:
		
	    printf("\nReturning to Main Menu....\n");
        break;
				
	}        
}




void deletePlayer(Player*p, int size)
{
    
    int deletebyjsno;
    
    printf("Enter a jersey number to delete: ");
    scanf("%d", &deletebyjsno);

    int i, flag = 0;
    for (i = 0; i < size; i++)
    {
        if (p[i].jsno == deletebyjsno)
        {
            flag = 1;
            
            printf("Player found at index=%d\n", i);
            printf("Name: %s\n", p[i].name);
            printf("Jersey No: %d\n", p[i].jsno);
            printf("Matches No: %d\n", p[i].matches);
            printf("Runs: %d\n", p[i].runs);
            printf("Wickets: %d\n", p[i].wickets);

            int i,j;
            for (j = i; j < size - 1; j++)
            {
                p[j] = p[j + 1];
            }

            
            ctr--;

            printf("Player deleted successfully!!!!!\n");
            break;
        }
    }

    if (flag == 0)
    {
        printf("Player not found!!!!!\n");
    }  
 //system("pause");   
}

void sortPlayer(Player*p, int size)
{
    int i,j;
  //  Player temp;
    int choice;
    printf("Sort Menu:\n");
    printf("1. Sort by Runs\n");
    printf("2. Sort by matches\n");
    printf("3. Sort by Wickets\n");
    printf("4. Back to Main Menu\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
                                                                                                   
    switch (choice)
    {
    	
    case 1:

        for( i=0;i<ctr;i++)                                                   
        {
            for(j=i+1;j<ctr;j++)
            {
                if (p[i].runs<p[j].runs)
                {
                    Player temp = p[i];
                    p[i] = p[j];
                    p[j] = temp;
                }
            }
        }
          displayPlayer(p);
        break;
           
    case 2:
        
    
        for (i=0;i<ctr;i++)
        {
            for (j=i+1;j<ctr;j++)
            {
                if (p[i].matches<p[j].matches)
                {
                    Player temp = p[i];
                    p[i] = p[j];
                    p[j] = temp;
                }
                }
            }
        
        displayPlayer(p);
        break;
        
    case 3:
        
        for (i = 0; i < ctr ; ++i)
        {
            for (j = i+1; j < ctr ; ++j)
            {
                if (p[i].runs < p[j].runs)
                {
                    Player temp = p[i];
                    p[i] = p[j];
                    p[j] = temp;
                }
                     
            }
        }
        displayPlayer(p);
        break;
        
    case 4:
        printf("Returning to Main Menu.\n");
        return;
        
    default:
        printf("Invalid choice!!!!!...... Returning to Main Menu!!!!!.....\n");
    }
  // system("pause"); 
}




