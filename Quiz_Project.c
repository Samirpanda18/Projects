#include<Stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
#include<windows.h>


void gotoxy(short x, short y)
 {
   COORD pos = {x, y};
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


void displayscore()
{
	char name[30];
	float s;
	FILE *fp;
	fp=fopen("samir.txt","r");
	fscanf(fp,"%s%f",&name,&s);
	printf("\n\n\t");
	printf("%s has secured Highest Mark %.2f",name,s);
	fclose(fp);
	
}



void rules()
{
	system("cls");
 	printf("\n\n\n\tThis game is very easy to play. You'll be asked some general");
 	printf("\n\n\tknowledge questions and the right answer is to be chosen among");
 	printf("\n\n\tthe four options provided. Your score will be calculated at the end");
 	printf("\n\n\tscore you will secure. Your score will be calculated and displayed");
 	printf("\n\n\tat the end and displayed. If you secure highest score, your score");
 	printf("\n\n\twill be recorded. So BEST OF LUCK.");
 }
 
 
 
 void writescore(char plnm[30],float score)
 {
 	float sc;
 	char nm[30];
 	FILE *fp;
 	system("cls");
 	fp=fopen("samir.txt","r");
 	fscanf(fp,"%s%f",&nm,&sc);
 	if (score>=sc)
 	{
 		sc=score;
 		fclose(fp);
 		fp=fopen("samir.txt","w");
 		fprintf(fp,"%s %.2f",plnm,sc);
 		fclose(fp);
	 }
 }
 
 
 
 int main()
 {
    signed int countq,countr=500,next;
 	int r,i,w,nq[20];
 	char choice;
 	char playername[10];
    signed int score;
 	time_t t;
 	time_t initialtime,finaltime;
 	
mainstart:
 	 system("cls");
 	 printf("\n\t\t WELCOME TO G.K TEST PROGRAM\n\n") ;
     printf("\n\t\t-------------------------------");
     printf("\n\t\t Enter 'S' to start game       ");
     printf("\n\t\t Enter 'V' to view high score  ");
     printf("\n\t\t Enter 'H' for help            ");
     printf("\n\t\t Enter 'Q' to quit             ");
     printf("\n\t\t-------------------------------\n\n\t\t  ");
     choice=toupper(getch());
     if(choice=='V')
     {
     	displayscore();
     	getch();
     	goto mainstart;
	 }
     else if(choice=='Q')
	 {
	 	exit(1);
	  } 
	  else if(choice=='H')
	  {
	  	rules();
	  	getch();
	  	goto mainstart;
	  }
	  else if(choice=='S')
	  {
	
        system("cls");

     printf("\n\n\n\t\t\tEnter your name...");
     printf("\n\t\t\t(only one word)\n\n\t\t\t");
     gets(playername);
     
 home:
     system("cls");
     initialtime=time(NULL);
     countq=countr=0;
     i=1;
     start:
   	 system("cls");
   	 countr=0;
   	 gotoxy(200,200);printf("points:%d",score);printf("\n");
     srand (time(NULL) );
     r=rand()%23+1;
     nq[i]=r;
     for (w=0;w<i;w++)
     if (nq[w]==r) goto start;
     switch(r)  
	        {
		  		case 1:
		  			printf("Question For 500 Rupees:");
		  			printf("\n\nWhich was the 1st non Test playing country to beat India in an international match?");
                    printf("\n\nA.Canada\tB.Sri Lanka\tC.Zimbabwe\tD.East Africa");
                    if (toupper(getch())=='B')
                     {printf("\n\nCorrect!!!");countr=countr+500;sleep(2); break; }
                    else
                    {printf("\n\nWrong!!! The correct answer is A.4");printf("\nSORRY YOU HAVE LOSS 100 Rpees:");countr=countr-100;sleep(2);break;}

                case 2:
                	
                	printf("Question for 500 rupees:");
				    printf("\n\nWhat was Vinod Khanna’s role in Amar Akbar Anthony?");
                     printf("A.Akbar\tB.Albert\tC.Amar\tD.Anthony"); 
					         if (toupper(getch())=='A')
                      {printf("\n\nCorrect!!!");countr+500;sleep(2); break;}
                    else{
                     printf("\n\nWrong!!! The correct answer is A.4");printf("\n SORRY YOU HAVE LOSS 100 RUPEES:");countr=countr-100;sleep(2);
                      break;}

                case 3:
                
                	printf("Question for 500 rupees:");
                      printf("\n\n\nWho was the first US President?");
                      printf("\n\nA.Richard Nikson\tB.Abraham Linkon\n\nC.John F. Kennedy\tD.George Washington\n\n");
                      countq++;
                       if (toupper(getch())=='D')
                       {printf("\n\nCorrect!!!");countr=countr+500;sleep(2); break;}
                       else
                      {printf("\n\nWrong!!! The correct answer is D.George Washington");printf("\SORRY YOU HAVE LOSS 100 RUPEES:");countr=countr-100;sleep(2);break;}

                case 4:
                	printf("Question for 1000 rupees:");
                     printf("\n\n\nWho was awarded the 'Man of the Tournament' of ICC WORLD CUP 2007?");
                     printf("\n\nA.Glen Magrath\tB.Mahela Jawardan\n\nC.Mathew Hayden\tD.Sachin Tendulkar\n\n");
                     countq++;
                      if (toupper(getch())=='A')
                       {printf("\n\nCorrect!!!");countr=countr+1000;sleep(2); break;}
                    else
                      {printf("\n\nWrong!!! The correct answer is A.Glen Magrath");printf("\SORRY YOU HAVE LOSS 500 RUPEES:");countr=countr-500;sleep(2);break;}

                case 5:
                	printf("Question for 500 rupees:");
                     printf("\n\n\nWhich country won the Fifa World Cup 1998?");
                     printf("\n\nA.France\tB.Brazil\n\nC.Italy\tD.England\n\n");
                     countq++;
                     if (toupper(getch())=='A')
                      {printf("\n\nCorrect!!!");countr=countr+500;sleep(2); break;}
                     else
                     {printf("\n\nWrong!!! The correct answer is A.France");printf("\SORRY YOU HAVE LOSS 100 RUPEES:");countr=countr-100;sleep(2);break;} 
                case 6:
                	printf("Question for 1000 rupees:");
                      printf("\n\n\nWhich syllabe is stressed in the word 'democracy'?");
                      printf("\n\nA.1st\tB.2nd\n\nC.3rd\tD.4th\n\n");
                       countq++;
                     if (toupper(getch())=='B' )
                     {printf("\n\nCorrect!!!");countr=countr+1000;sleep(2); break;}
                    else
                    {printf("\n\nWrong!!! The correct answer is B.2nd");printf("\SORRY YOU HAVE LOSS 500 RUPEES:");countr=countr-500;sleep(2);break;}

                case 7:
                	printf("Question for 500 rupees:");
                       printf("\n\n\nWhich country was the winner of Cricket World Cup 1987?");
                       printf("\n\nA.West Indies\tB.India\n\nC.Australia\tD.England\n\n");
                       countq++;
                      if (toupper(getch())=='C')
                      {printf("\n\nCorrect!!!");countr=countr+500;sleep(2); break;}
                      else
                      {printf("\n\nWrong!!! The correct answer is C.Australia");printf("\SORRY YOU HAVE LOSS 100 RUPEES:");countr=countr-100;sleep(2);break;}

                case 8:
                	printf("Question for 500 rupees:");
                      printf("\n\n\nWhat is the height of Mount everest in feet?");
                      printf("\n\nA.8648\tB.6648\n\nC.8884\tD.8848\n\n");
                      countq++;
                      if (toupper(getch())=='D')
                       {printf("\n\nCorrect!!!");countr=countr+500;sleep(2); break;}
                      else
                      {printf("\n\nWrong!!! The correct answer is D.8848");printf("\SORRY YOU HAVE LOSS 100 RUPEES:");countr=countr-100;sleep(2);break;}

                case 9:
                	printf("Question for 500 rupees:");
                      printf("\n\n\nWhat is the capital of Denmark?");
                      printf("\n\nA.Copenhagen\tB.Helsinki\n\nC.Rome\t\tD.Madrid\n\n");
                      countq++;
                      if (toupper(getch())=='A')
                    {printf("\n\nCorrect!!!");countr=countr+500;sleep(2); break;}
                     else
                    {printf("\n\nWrong!!! The correct answer is A.Copenhagen");printf("\SORRY YOU HAVE LOSS 100 RUPEES:");countr=countr-100;sleep(2);break;}


                case 10:
                	printf("Question for 1000 rupees:");
                       printf("\n\n\nWhich syllabe is stressed in the word 'instanteneous'?");
                       printf("\n\nA.1st\tB.2nd\n\nC.3rd\tD.4th\n\n");
                       countq++;
                       if (toupper(getch())=='C')
                       {printf("\n\nCorrect!!!");countr=countr+1000;sleep(2); break;}
                       else
                       {printf("\n\nWrong!!! The correct answer is C.3rd");printf("\SORRY YOU HAVE LOSS 500 RUPEES:");countr=countr-500;sleep(2);break;}

                case 11:
                	printf("Question for 500 rupees:");
                        printf("\n\n\nWho was the player to score 6 successive sixes in an over?");
                        printf("\n\nA.Adam Gilchrist\tB.M.S.Dhoni\n\nC.Herschel Gibbs\tD.Sanath Jayasurya\n\n");
                        countq++;
                        if (toupper(getch())=='C')
                        {printf("\n\nCorrect!!!");countr=countr+500;sleep(2); break;}
                        else
                        {printf("\n\nWrong!!! The correct answer is C.Herschel Gibbs");printf("\SORRY YOU HAVE LOSS 100 RUPEES:");countr=countr-100;sleep(2);break;}

                case 12:
                	printf("Question for 500 rupees:");
                        printf("\n\n\nWho was the only player to take 4 successive wickets?");
                        printf("\n\nA.Malinga Bandara\tB.Lasith Malinga\n\nC.Bret Lee\tD.Murali Daran\n\n");
                        countq++;
                        if (toupper(getch())=='B')
                        {printf("\n\nCorrect!!!");countr=countr+500;sleep(2); break;}
                        else
                        {printf("\n\nWrong!!! The correct answer is B.Lasith Malinga");printf("\SORRY YOU HAVE LOSS 100 RUPEES:");countr=countr-100;sleep(2);break;}

                case 13:
                	printf("Question for 500 rupees:");
                        printf("\n\n\nWhich country is hosting the Fifa World Cup 2010?");
                        printf("\n\nA.South Africa\tB.Italy\n\nC.Argentina\tD.Spain\n\n");
                         countq++;
                        if (toupper(getch())=='A')
                         {printf("\n\nCorrect!!!");countr=countr+500;sleep(2); break;}
                        else
                        {printf("\n\nWrong!!! The correct answer is A.South Africa");printf("\SORRY YOU HAVE LOSS 100 RUPEES:");countr=countr-100;sleep(2);break;}

                case 14:
                	printf("Question for 1000 rupees:");
                       printf("\n\n\nWho is the author of 'Pulpasa Cafe'?");
                       printf("\n\nA.Narayan Wagle\tB.Lal Gopal Subedi\n\nC.B.P. Koirala\tD.Khagendra Sangraula\n\n");
                       countq++;
                       if (toupper(getch())=='A')
                       {printf("\n\nCorrect!!!");countr=countr+1000;sleep(2); break;}
                       else
                       {printf("\n\nWrong!!! The correct answer is A.Narayan Wagle");printf("\SORRY YOU HAVE LOSS 500 RUPEES:");countr=countr-500;sleep(2);break;}

                case 15:
                	printf("Question for 500 rupees:");
                       printf("\n\n\nWhich country is Maria Sarapova from?");
                       printf("\n\nA.Russia\tB.Switzerland\n\nC.Argentina\tD.Spain\n\n");
                       countq++;
                    if (toupper(getch())=='A')
                    {printf("\n\nCorrect!!!");countr=countr+500;sleep(2); break;}
                     else
                    {printf("\n\nWrong!!! The correct answer is A.Russia");printf("\SORRY YOU HAVE LOSS 100 RUPEES:");countr=countr-100;sleep(2);break;}

                case 16:
                	printf("Question for 1000 rupees:");
                       printf("\n\n\nWho was awarded the youngest player award in Fifa World Cup 2006?");
                       printf("\n\nA.Wayne Rooney\tB.Lucas Podolski\n\nC.Lionel Messi\tD.Christiano Ronaldo\n\n");
                      countq++;
                      if (toupper(getch())=='B')
                      {printf("\n\nCorrect!!!");countr=countr+1000;sleep(2); break;}
                    else
                      {printf("\n\nWrong!!! The correct answer is B.Lucas Podolski");printf("\SORRY YOU HAVE LOSS 500 RUPEES:");countr=countr-500;sleep(2);break;}

                case 17:
                	printf("Question for 500 rupees:");
                        printf("\n\n\nWhat is the smallest district of Nepal?");
                        printf("\n\nA.Lalitpur\tB.Karnali\n\nC.Bhaktapur\tD.Gulmi\n\n");
                        countq++;
                        if (toupper(getch())=='C')
                         {printf("\n\nCorrect!!!");countr=countr+500;sleep(2); break;}
                    else
                        {printf("\n\nWrong!!! The correct answer is C.Bhaktapur");printf("\SORRY YOU HAVE LOSS 100 RUPEES:");countr=countr-100;sleep(2);break;}

                case 18:
                	printf("Question for 500 rupees:");
                       printf("\n\n\nWhat is the headquarter of Western Development Region?");
                       printf("\n\nA.Dhankuta\tB.Kathmandu\n\nC.Dhangadhi\tD.Pokhara\n\n");
                       countq++;
                       if (toupper(getch())=='D')
                       {printf("\n\nCorrect!!!");countr+countr+500;sleep(2); break;}
                    else
                      {printf("\n\nWrong!!! The correct answer is D.Pokhara");printf("\SORRY YOU HAVE LOSS 100 RUPEES:");countr=countr-100;sleep(2);break;}

                case 19:
                	printf("Question for 1000 rupees:");
                        printf("\n\n\nWhich place is called 'The Cherrapunji of Nepal'?");
                        printf("\n\nA.Dharan\tB.Kathmandu\n\nC.Pokhara\tD.Butwal\n\n");
                        countq++;
                        if (toupper(getch())=='C')
                        {printf("\n\nCorrect!!!");countr=countr+1000;sleep(2); break;}
                    else
                        {printf("\n\nWrong!!! The correct answer is C.Pokhara");printf("\SORRY YOU HAVE LOSS 500 RUPEES:");countr=countr-500;sleep(2);break;}

                case 20:
                	printf("Question for 500 rupees:");
                        printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
                        printf("\n\nA.Rome\tB.Vactican City\n\nC.Madrid\tD.Berlin\n\n");
                        countq++;
                        if (toupper(getch())=='A')
                         {printf("\n\nCorrect!!!");countr=countr+500;sleep(2); break;}
                        else
                        {printf("\n\nWrong!!! The correct answer is A.Rome");printf("\SORRY YOU HAVE LOSS 100 RUPEES:");countr=countr-100;sleep(2);break;}
                case 21:
                	   printf("Question for 500 rupees:");
				       printf("\n\nWhich State Government unveiled an ambitious project to install Wi-Fi facility in all gram panchayats across the state?");
                        printf("\n\nA.Kerala\tB.Karnataka\tC.Gujarat\tD.Maharastra\n\n");
						if (toupper(getch()=='B'))
						{printf("\n\nCorrect!!!");countr=countr+500;sleep(2);break;}
						else
						{printf("\n\n WRONG!!! The correct answer is B.KARNATAKA");printf("Sorry you loose 100 rupees:");countr=countr-100;sleep(2);break;}
			}   
	  i++;
	  score=score+countr; 
	  if(i<=15) goto start;
	  printf("\nYour score is %d",score);
	  printf("\nDo you want to play again (y/n)");
	   if(toupper(getch())=='Y')
	  goto home;
	  else
	  {
	  	writescore(playername,score);
	  	goto mainstart;
      }
   }

}

