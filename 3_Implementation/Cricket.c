#include<stdio.h>
int main()
{

	printf("                  ***********************************************                  \n");
	printf("                                  INDIAN CRICKET                                   \n");
	printf("                  ***********************************************                  \n");

	printf("Enter The Number as you wish:\n\n");
		printf("Enter 1 To See Individual players Deatails\n");
		printf("Enter 2 To See All players Details\n");
		printf("Enter 3 To See captain Details\n");
	    printf("Enter 4 To See Vice captain Details\n");
		printf("Enter 5 To Abort\n\n");
		
	int x;
	scanf("%d",&x);
	
	switch(x){
		case 1:
			printf("\n\nEnter the Number whose details you want to see:\n\n\n\n");
			printf("Enter  1 For Virat Kohli Details\n\n");
			printf("Enter  2 For Ravindra Jadeja Details\n\n");
			printf("Enter  3 For Mahendra Singh Dhoni Details\n\n");
			printf("Enter  4 For Hardik pandya Details\n\n");
			printf("Enter  5 For Rohit sharma Details\n\n");
			printf("Enter  6 For Manish pandey Details\n\n");
			printf("Enter  7 For Bhuvaneshwar kumar Details\n\n");
			printf("Enter  8 For Sanju Samson Details\n\n");
			printf("Enter  9 For gautam gambhir Details\n\n");
			printf("Enter 10 For dinesh karthik Details\n\n");
			printf("Enter 11 For Jasprit Bumrah Details\n\n");
			
			int y;
			scanf("%d",&y);
			
			switch(y)
			{
				case 1:
					printf("\n\nName   :Virat Kohli\nRoll   :batsman\nAge    :33\nspouse :anushka sharma\nawards :padma shri,icc men's odi cricketer of the year,wisden cricketers of the year.");
					break;
				case 2:
					printf("\n\nName   :Ravindra Jadeja\nRoll   :ALL Rounder\nAge    :33\nspouse :Riva solanki\nAwards :Arjuna award for cricket,icc odi team of the year.\n\n");
					break;
				case 3:
					printf("\n\nName   :Mahendra Singh Dhoni\nRoll   :Wicket Keeper,Batsmanr\nAge    :33\nspouse :Sakshi dhoni \nAwards :padma bhushan,padma shri,icc award for spirit of cricket.");
					break;
				case 4:
					printf("\n\nName   :hardik pandya\nRoll   :ALL Rounder\nAge    :28\nspouse :Natasa stankovic\nAwards :Man of the match in his first odi\n\n");
					break;
				case 5:
					printf("\n\nName   :Rohit sharma\nRoll   :Batsman\nAge    :34\nspouse :Ritika sajdeh\nAwards :Major dhyan chand khel ratna award for cricket.\n\n");
					break;
				case 6:
					printf("\n\nName   :Manish pandey\nRoll   :Batsman\nage    :28\nspouse :ashrita shetty\n\n");
					break;
				case 7:
			    	printf("\n\nName   :Bhuvaneshwar kumar\nRoll   :ALL Rounder\nAge    :32\nspouse :Nupur nagar\nAwards :Winner of the polly umrigar award.\n\n");
					break;
				case 8:
				    printf("\n\nName   :Sanju Samson\nRoll   :Wicekt keeper,batsman\nAge    :27\nspouse :Charulatha samson\nAwards :Youngest player to lead a ranji and ipl side,fastest double century in list-A cricket..\n\n");
					break;
				case 9:
					printf("\n\nName   :Gautam Gambhir\nRoll   :Batsman\nAge    :39\nspouse :Natasha jain\nAwards :Icc test player of the year 2009,arjuna award.\n\n");
					break;
				case 10:
				    printf("\n\nName   :Dinesh karthik\nRoll   :Wicket keeper,Batsman\nAge    :33\nSpouse :Nikita vijay\n\n");
					break;
				case 11:
					printf("\n\nName   :Jasprit Bumrah\nRoll   :Bowler\nAge    :30\nspouse :Sanjana\nAwards :polly umrigar award\n\n");
					break;
		}
		break;
								
		case 2:
			printf("\n\nName   :Virat Kohli\nRoll   :batsman\nAge    :33\nspouse :anushka sharma\nawards :padma shri,icc men's odi cricketer of the year,wisden cricketers of the year.\n\n");
			printf("\n\nName   :Ravindra Jadeja\nRoll   :ALL Rounder\nAge    :33\nspouse :Riva solanki\nAwards :Arjuna award for cricket,icc odi team of the year.\n\n");
			printf("\n\nName   :Mahendra Singh Dhoni\nRoll   :Wicket Keeper,Batsmanr\nAge    :33\nspouse :Sakshi dhoni \nAwards :padma bhushan,padma shri,icc award for spirit of cricket.\n\n");
			printf("\n\nName   :hardik pandya\nRoll   :ALL Rounder\nAge    :28\nspouse :Natasa stankovic\nAwards :Man of the match in his first odi\n\n");
			printf("\n\nName   :Rohit sharma\nRoll   :Batsman\nAge    :34\nspouse :Ritika sajdeh\nAwards :Major dhyan chand khel ratna award for cricket.\n\n");
			printf("\n\nName   :Manish pandey\nRoll   :Batsman\nage    :28\nspouse :ashrita shetty\n\n");
		 	printf("\n\nName   :Bhuvaneshwar kumar\nRoll   :ALL Rounder\nAge    :32\nspouse :Nupur nagar\nAwards :Winner of the polly umrigar award.\n\n");
		    printf("\n\nName   :Sanju Samson\nRoll   :Wicekt keeper,batsman\nAge    :27\nspouse :Charulatha samson\nAwards :Youngest player to lead a ranji and ipl side,fastest double century in list-A cricket..\n\n");
			printf("\n\nName   :Gautam Gambhir\nRoll   :Batsman\nAge    :39\nspouse :Natasha jain\nAwards :Icc test player of the year 2009,arjuna award.\n\n");
		    printf("\n\nName   :Dinesh karthik\nRoll   :Wicket keeper,Batsman\nAge    :33\nSpouse :Nikita vijay\n\n");
			printf("\n\nName   :Jasprit Bumrah\nRoll   :Bowler\nAge    :30\nspouse :Sanjana\nAwards :polly umrigar award\n\n");
			break;
			
		case 3:
			printf("\n\nName   :Rohit sharma\nRoll   :Batsman\nAge    :34\nspouse :Ritika sajdeh\nAwards :Major dhyan chand khel ratna award for cricket.\n\n");
			break;
			
		case 4:
			printf("\n\nName   :Jasprit Bumrah\nRoll   :Bowler\nAge    :30\nspouse :Sanjana\nAwards :polly umrigar award\n\n");
			break;
			
		case 5:
			printf("You Have Choosen Abort");

			break;	
	}
}
