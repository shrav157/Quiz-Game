#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int count=0;
char name[20];
void rules ();
void start ();
void quiz ();
void score();
void main ()
{
  rules ();
  start ();
  quiz ();
  score();
}
void rules ()
{
  int play;
  printf("-------------------------------------------------------------------------------------------------------\n");
  printf("||                                                 DSA QUIZ GAME                                     ||\n");
  printf("------------------------------------------------------------------------------------------------------\n");
  printf ("\t\t\t******Rules to be followed to play this Game******\n");
  printf("\t\t\t\tThe Game consists of '3' Levels!\n");
  printf ("\t\t\t\t\tLevel 1- Beginer\n");
  printf ("\t\t\t\t\tLevel 2-Intermediate\n");
  printf ("\t\t\t\t\tLevel 3-Pro\n");
  printf ("\t\t\t\t*Every levels consists of 5 questions each\n");
  printf("\t\t\t\t*Each question carry 2 points\n");
  printf ("\t\t\t\t*Questions are based on DATA STRUCTURES AND APPLICATIONS\n");
  printf ("\t\t-----------You need to attempt all 3 levels to know your score----------\n");
  printf ("As soon as you answer,you will be directed to next question and awarded with two point only when you are correct\n");
  printf ("\t\t\t\t\tAre you ready to start game\n");
  printf ("---------------------------------------------------------------------------------------------\n");
  printf ("\t\t|Press 1 to continue|\t\t\t|Press 0 to Quit|\n");
  printf ("---------------------------------------------------------------------------------------------\n");
  scanf ("%d", &play);
  if (play == 1)
  {
      start ();
  }
  else
  {
      exit (1);
  }
}

void start ()
{
  int quizstart;
  printf ("***************************Welcome to Quiz Game*****************************\n");
  printf ("Enter you name:");
  scanf ("%s", name);
  printf ("Are you ready to answer DSA quiz %s?\n",name);
  printf ("---------------------------------------------------------------------------------------------\n");
  printf ("\t\t|Press 1 to continue|\t\t\t|Press 0 to Quit|\n");
  printf ("---------------------------------------------------------------------------------------------\n");  scanf ("%d", &quizstart);
  if (quizstart == 1)
  {
      quiz ();
  }
  else
  {
      exit (0);
  }
}

void quiz()
{
  int answer;
  int know;
  printf ("************************************Let's start the game***************************************\n");
  printf ("************************************All the best***********************************************\n");
  printf ("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Welcome to Level 1~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf ("\n\tQ(1):");
  printf ("WHO IS FATHER OF C PROGRAMMING LANGUAGE?\n");
  printf ("\t1.James Gosling\n\t2.Steve Jobs\n\t3.Dennis Ritchie\n\t4.Charles Babbage\n");
  printf ("Enter your Option:");
  scanf ("%d", &answer);
  if (answer == 3)
    {
      printf ("CORRECT :)\n");
      ++count;
    }
  else
    {
      printf ("WRONG!!,CORRECT ANSWER IS (3)\n");
    }
 printf("--------------------------------------------------------------------------------------------------------------------------\n");

  printf ("\n\t\tQ(2):");
  printf ("STACK IS ASLO KNOWN AS?\n");
  printf ("\t1.LIFO\n\t2.FIFO\n\t3.LILO\n\t4.NONE OF THE ABOVE\n");
  printf ("Enter your Option:");
  scanf ("%d", &answer);
  if (answer == 1)
    {
      printf ("CORRECT :)");
       ++count;
    }
  else
    {
      printf ("WRONG!");
    }
  printf ("Q(3):");
  printf ("WHICH OF THE FOLLOWING IS NON LINEAR DATA STRUCTURE?\n");
  printf ("1.STACKS\n2.LIST\n3.STRINGS\n4.TREES\n");
  printf ("Enter:");
  scanf ("%d", &answer);
  if (answer == 4)
    {
      printf ("CORRECT :)");
      ++count;
    }
  else
    {
      printf ("WRONG!");
    }
  printf ("Q(4):");
  printf ("LEAF NODE HAS_________ CHILD NODES?\n");
  printf ("1.0\n2.1\n3.2\n4.NONE OF THE ABOVE\n");
  printf ("Enter:");
  scanf ("%d", &answer);
  if (answer == 1)
    {
      printf ("CORRECT :)");
       ++count;
    }
  else
    {
      printf ("WRONG!");
    }
  printf ("Q(5):");
  printf ("WHICH OF THE FOLLOWING DATA STRUCTURE IS LINEAR TYPE?\n");
  printf ("1.TREE\n2.ARRAY\n3.GRAPHS\n4.NONE OF THE ABOVE\n");
  printf ("Enter:");
  scanf ("%d", &answer);
  if (answer == 2)
    {
      printf ("CORRECT :)");
        ++count;
    }
  else
    {
      printf ("WRONG!");
    }				//level 2-----------------------------------------------------------------------------------------------------------------
  printf ("\t--------------Welcome to Level 2---------\n");
  printf ("Q(1):");
  printf ("A PROCEDURE THAT CALLS ITSELF IS CALLED?\n");
  printf ("1.ILLEGAL CALL\n2.REVERSE POLISH\n3.RECURSIVE\n4.NONE OF THE ABOVE\n");
  printf ("Enter:");
  scanf ("%d", &answer);
  if (answer == 3)
    {
      printf ("CORRECT :)");
       count++;
    }
  else
    {
      printf ("WRONG!");
    }
  printf ("Q(2):");
  printf ("PROCESS OF REMOVING AN ELEMENT FROM THE STACK IS KNOWN AS?\n");
  printf ("1.PUSH\n2.SEEK\n3.POP\n4.TOP\n");
  printf ("Enter:");
  scanf ("%d", &answer);
  if (answer == 3)
    {
      printf ("CORRECT :)");
          ++count;
    }
  else
    {
      printf ("WRONG!");
    }
  printf ("Q(3):");
  printf ("ONE DIMENSIONAL ARRAY IS KNOWN AS?\n");
  printf ("1.VERTICAL ARRAY\n2.HORIZONTAL ARRAY\n3.STRAIGHT LINE ARRAY\n4.LINEAR ARRAY\n");
  printf ("Enter:");
  scanf ("%d", &answer);
  if (answer == 4)
    {
      printf ("CORRECT :)");
    ++count;
    }
  else
    {
      printf ("WRONG!");
    }
  printf ("Q(4):");
  printf ("BFS USES WHICH OF THE FOLLWOWING DATA STRUCTURE?\n");
  printf ("1.TREE\n2.GRAPH\n3.ARRAY\n4.QUEUE\n");
  printf ("Enter:");
  scanf ("%d", &answer);
  if (answer == 4)
    {
      printf ("CORRECT :)");
           ++count;
    }
  else
    {
      printf ("WRONG!");
    }
  printf ("Q(5):");
  printf ("FIRST INDEX OF ARRAY IS ?\n");
  printf ("1.1\n2.0\n3.-1\n4.NONE OF THE ABOVE\n");
  printf ("Enter:");
  scanf ("%d", &answer);
  if (answer == 2)
    {
      printf ("CORRECT :)");
         ++count;
    }
  else
    {
      printf ("WRONG!");
    }		
    //LEVEL 3----------------------------------------------------------------------------------------------------------------------
  printf ("\t--------------Welcome to Level 3---------\n");
  printf ("Q(1):");
  printf ("A BINARY SEARCH TREE WHOOSE LEFT SUBTREE AND RIGHT SUBTREE DIFFER IN HEIGHT BY AT MOST 1 UNIT IS CALLED AS?\n");
  printf ("1.B-TREE\n2.THREADED BINARY TREE\n3.AVL\n4.NONE OF THE ABOVE\n");
  printf ("Enter:");
  scanf ("%d", &answer);
  if (answer == 3)
    {
      printf ("CORRECT :)");
        ++count;
    }
  else
    {
      printf ("WRONG!");
    }
  printf ("Q(2):");
  printf ("WHAT WILL BE THE VALUE OF TOP,IF THERE IS A SIZE OF STACK AS STACK_SIZE IS 5?\n");
  printf ("1.5\n2.6\n3.4\n4.2\n");
  printf ("Enter:");
  scanf ("%d", &answer);
  if (answer == 3)
    {
      printf ("CORRECT :)");
         ++count;
    }
  else
    {
      printf ("WRONG!");
    }
  printf ("Q(3):");
  printf ("IN A PRIORITY QUEUE,INSERTION AND DELETION TAKES PLACE AT_________?\n");
  printf ("1.FRONT,REAR\n2.ONLY AT REAR END\n3.ONLY AT FRONT END\n4.ANY POSITION\n");
  printf ("Enter:");
  scanf ("%d", &answer);
  if (answer == 4)
    {
      printf ("CORRECT :)");
        ++count;
    }
  else
    {
      printf ("WRONG!");
    }
  printf ("Q(4):");
  printf ("HEADER FILE TO BE INCLUDED TO USE malloc() and calloc()?\n");
  printf ("1.ctype.h\n2.memory.h\n3.string.h\n4.stdlib.h\n");
  printf ("Enter:");
  scanf ("%d", &answer);
  if (answer == 4)
    {
      printf ("CORRECT :)");
          ++count;
    }
  else
    {
      printf ("WRONG!");
    }
  printf ("Q(5):");
  printf (" WHICH STRING FUNCTION USED TO FIND THE LENGTH OF GIVEN STRING?\n");
  printf ("1.strcpy\n2.strcat\n3.strlen\n4.strcmp\n");
  printf ("Enter:");
  scanf ("%d", &answer);
  if (answer == 3)
    {
      printf ("CORRECT :)");
       ++count;
    }
  else
    {
      printf ("WRONG!");
    }			
    printf("thanks for playing!!\n");
    printf("PRESS '1' to know your score \t PRESS '0' to exit\n");
    scanf("%d",&know);
    if(know==1)
    {
        score();
    }else
    {
        exit(1);
    }
    
    
}
void score()
{

 printf("------score-----\n");
 printf("Name:\t%s",name);
 if(count>0)
 printf("Thanks for playing, Your scored: %d points \t", count*2);  
  exit(1);
 
}