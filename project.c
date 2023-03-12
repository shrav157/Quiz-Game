#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int count=0;
char name[20];
void rules ();
void start ();
void choose();
void level1();
void level2();
void level3();
void score();
void main ()
{
  rules ();
  start ();
  choose();
  level1();
  level2();
  level3();
  score();
  
}
void rules ()
{
  int play;
  printf("\t\t\t-------------------------------------------------------------\n");
  printf("\t\t\t|                  DSA QUIZ GAME                            |\n");
  printf("\t\t\t-------------------------------------------------------------\n"); 
  printf ("\t\t\t\t****Rules to be followed to play this Game****\n");
  printf("\t\t\t\t\tThe Game consists of '3' Levels!\n");
  printf ("\t\t\t\t\tLevel 1- Beginer\n");
  printf ("\t\t\t\t\tLevel 2-Intermediate\n");
  printf ("\t\t\t\t\tLevel 3-Pro\n");
  printf ("\t\t\t\t*Every levels consists of 5 questions each\n");
  printf("\t\t\t\t*Each question carry 2 points\n");
  printf ("\t\t\t\t*Questions are based on DATA STRUCTURES AND APPLICATIONS\n");
  printf ("\t\t-----------You can attempt any of the Level you wish!-----------");
  printf ("As soon as you answer,you will be directed to next question and awarded with two point only when you are correct\n");
  printf ("\t\t\t\t\tAre you ready to start game\n");
  printf ("\t\t\t---------------------------------------------------------\n");
  printf ("\t\t\t|Press 1 to continue|\t\t\t|Press 0 to Quit|\n");
  printf ("\t\t\t---------------------------------------------------------\n");
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
  int key;
  printf ("\t\t\tWelcome to Quiz Game\n");
  printf ("\t\t\tEnter you name:");
  scanf ("%s", name);
  printf ("\t\t\tAre you ready to answer DSA quiz %s?\n",name);
  printf ("\t\t\t---------------------------------------------------------\n");
  printf ("\t\t\t|Press 1 to continue|\t\t\t|Press 0 to Quit|\n");
  printf ("\t\t\t---------------------------------------------------------\n");
  scanf ("%d", &key);
  if (key == 1)
  {
      choose();
  }

  else
  {
      exit (1);
  }
  
}
void choose() 
{
   int level;
  printf("\t\t\tChoose your Level:\n\t\t\t1.LEVEL 1\n\t\t\t2.LEVEL 2\n\t\t\t3.LEVEL 3\n");
  scanf("%d",&level);
  switch(level)
  {
      case 1: level1();
              break;
      case 2:level2();
             break;
      case 3:level3();
             break;
     default: printf("Oops!!!ERROR");
             break;
  }
}
void level1()
{
  int answer;
  int know;
  printf ("\n*******************************************All the best****************************************************\n");
  printf ("\t\t\t\t\t\nWelcome to Level 1:)\n");
  printf ("\n\tQ(1):");
  printf ("WHO IS FATHER OF C PROGRAMMING LANGUAGE?\n");
  printf ("\t\t1.James Gosling\n\t\t2.Steve Jobs\n\t\t3.Dennis Ritchie\n\t\t4.Charles Babbage\n");
  printf ("Enter your Option:");
  scanf ("%d", &answer);
  if (answer == 3)
    {
      printf ("CORRECT :)\n");
      ++count;
    }
  else
    {
      printf ("WRONG!!,CORRECT ANSWER IS 'Dennis Ritchie'\n");
    }
  printf("--------------------------------------------------------------------------------------------------\n");
  printf ("\tQ(2):");
  printf ("STACK IS ASLO KNOWN AS?\n");
  printf ("\t\t1.LIFO\n\t\t2.FIFO\n\t\t3.LILO\n\t\t4.NONE OF THE ABOVE\n");
  printf ("Enter your Option:");
  scanf ("%d", &answer);
  if (answer == 1)
    {
      printf ("CORRECT :)\n");
       ++count;
    }
  else
    {
      printf ("WRONG! CORRECT ANSWER IS'LIFO\n");
    }
  printf("--------------------------------------------------------------------------------------------------\n");
  printf ("\tQ(3):");
  printf ("WHICH OF THE FOLLOWING IS NON LINEAR DATA STRUCTURE?\n");
  printf ("\t\t1.STACKS\n\t\t2.LIST\n\t\t3.STRINGS\n\t\t4.TREES\n");
  printf ("Enter your Option:");
  scanf ("%d", &answer);
  if (answer == 4)
    {
      printf ("CORRECT :)\n");
      ++count;
    }
  else
    {
      printf ("WRONG! CORRECT ANSWER IS 'TREES'\n");
    }
  printf("--------------------------------------------------------------------------------------------------\n");
  printf ("\tQ(4):");
  printf ("LEAF NODE HAS_________ CHILD NODES?\n");
  printf ("\t\t1.0\n\t\t2.1\n\t\t3.2\n\t\t4.NONE OF THE ABOVE\n");
  printf ("Enter your option:");
  scanf ("%d", &answer);
  if (answer == 1)
    {
      printf ("CORRECT :)\n");
       ++count;
    }
  else
    {
      printf ("WRONG! CORRECT ANSWER IS '0'\n");
    }
  printf("--------------------------------------------------------------------------------------------------\n");
  printf ("\tQ(5):");
  printf ("WHICH OF THE FOLLOWING DATA STRUCTURE IS LINEAR TYPE?\n");
  printf ("\t\t1.TREE\n\t\t2.ARRAY\n\t\t3.GRAPHS\n\t\t4.NONE OF THE ABOVE\n");
  printf ("Enter your option:");
  scanf ("%d", &answer);
  if (answer == 2)
    {
      printf ("CORRECT :)\n");
        ++count;
    }
  else
    {
      printf ("WRONG! CORRECT ANSWER IS 'ARRAY'\n");
    }	
  printf("-------------------------------------------------------------------------------------------------\n");
  printf("\t\t\tCongratuations!!You have Succesfully completed  Level 1)\n");
  printf ("\t\t\t---------------------------------------------------------\n");
  printf ("\t\t\t|Press 1 to know score|\t\t\t|Press 0 to Quit|\n");
  printf ("\t\t\t---------------------------------------------------------\n");
    scanf("%d",&know);
    if(know==1)
    {
        score();
        
    }else
    {
        exit(1);
    }
}    
   void level2()
{
  int answer;
  int know;
  printf ("\n*******************************************All the best****************************************************\n");
    printf ("\t\t\t\t\t\nWelcome to Level 2 :)\n");
   printf ("\n\tQ(1):");
  printf ("A PROCEDURE THAT CALLS ITSELF IS CALLED?\n");
  printf ("\t\t1.ILLEGAL CALL\n\t\t2.REVERSE POLISH\n\t\t3.RECURSIVE\n\t\t4.NONE OF THE ABOVE\n");
  printf ("Enter your option:");
  scanf ("%d", &answer);
  if (answer == 3)
    {
      printf ("CORRECT :)\n");
       count++;
    }
  else
    {
      printf ("WRONG! CORRECT ANSWER IS 'RECURSIVE'\n");
    }
     printf("--------------------------------------------------------------------------------------------------\n");

  printf ("\tQ(2):");
  printf ("PROCESS OF REMOVING AN ELEMENT FROM THE STACK IS KNOWN AS?\n");
  printf ("\t\t1.PUSH\n\t\t2.SEEK\n\t\t3.POP\n\t\t4.TOP\n");
  printf ("Enter your option:");
  scanf ("%d", &answer);
  if (answer == 3)
    {
      printf ("CORRECT :)\n");
          ++count;
    }
  else
    {
      printf ("WRONG! CORRECT ANSWER IS 'POP'\n");
    }
     printf("--------------------------------------------------------------------------------------------------\n");

  printf ("\tQ(3):");
  printf ("ONE DIMENSIONAL ARRAY IS KNOWN AS?\n");
  printf ("\t\t1.VERTICAL ARRAY\n\t\t2.HORIZONTAL ARRAY\n\t\t3.STRAIGHT LINE ARRAY\n\t\t4.LINEAR ARRAY\n");
  printf ("Enter your option:");
  scanf ("%d", &answer);
  if (answer == 4)
    {
      printf ("CORRECT :)\n");
    ++count;
    }
  else
    {
      printf ("WRONG! CORRECT ANSWER IS 'LINEAR ARRAY'\n");
    }
     printf("--------------------------------------------------------------------------------------------------\n");

  printf ("\tQ(4):");
  printf ("BFS USES WHICH OF THE FOLLWOWING DATA STRUCTURE?\n");
  printf ("\t\t1.TREE\n\t\t2.GRAPH\n\t\t3.ARRAY\n\t\t4.QUEUE\n");
  printf ("Enter your option:");
  scanf ("%d", &answer);
  if (answer == 4)
    {
      printf ("CORRECT :)\n");
           ++count;
    }
  else
    {
      printf ("WRONG! CORRECT ANSWER IS 'QUEUE'\n");
    }
     printf("--------------------------------------------------------------------------------------------------\n");

  printf ("\tQ(5):");
  printf ("FIRST INDEX OF ARRAY IS ?\n");
  printf ("\t\t1.1\n\t\t2.0\n\t\t3.-1\n\t\t4.NONE OF THE ABOVE\n");
  printf ("Enter your option:");
  scanf ("%d", &answer);
  if (answer == 2)
    {
      printf ("CORRECT :)\n");
         ++count;
    }
  else
    {
      printf ("WRONG! CORRECT OPTION IS '0'\n");
    }	
     printf("--------------------------------------------------------------------------------------------------\n");
      printf("\t\t\tCongratuations!!You have Succesfully completed  Level 2)\n");
  printf ("\t\t\t---------------------------------------------------------\n");
  printf ("\t\t\t|Press 1 to know score|\t\t\t|Press 0 to Quit|\n");
  printf ("\t\t\t---------------------------------------------------------\n");
    scanf("%d",&know);
    if(know==1)
    {
        score();
        
    }else
    {
        exit(1);
    }
}
 void level3()
{
  int answer;
  int know;
  printf ("\n*******************************************All the best****************************************************\n");
  printf ("\t\t\t\t\t\nWelcome to Level 3 :)\n");
  printf ("\n\tQ(1):");
  printf ("A BINARY SEARCH TREE WHOOSE LEFT SUBTREE AND RIGHT SUBTREE DIFFER IN HEIGHT BY AT MOST 1 UNIT IS CALLED AS?\n");
  printf ("\t\t1.B-TREE\n\t\t2.THREADED BINARY TREE\n\t\t3.AVL\n\t\t4.NONE OF THE ABOVE\n");
  printf ("Enter your option:");
  scanf ("%d", &answer);
  if (answer == 3)
    {
      printf ("CORRECT :)\n");
        ++count;
    }
  else
    {
      printf ("WRONG! CORRECT ANSWER IS 'AVL'\n");
    }
     printf("--------------------------------------------------------------------------------------------------\n");

  printf ("\tQ(2):");
  printf ("WHAT WILL BE THE VALUE OF TOP,IF THERE IS A SIZE OF STACK AS STACK_SIZE IS 5?\n");
  printf ("\t\t1.5\n\t\t2.6\n\t\t3.4\n\t\t4.2\n");
  printf ("Enter your option:");
  scanf ("%d", &answer);
  if (answer == 3)
    {
      printf ("CORRECT :)\n");
         ++count;
    }
  else
    {
      printf ("WRONG! CORRECT ANSWER IS'4\n");
    }
     printf("--------------------------------------------------------------------------------------------------\n");

  printf ("\tQ(3):");
  printf ("IN A PRIORITY QUEUE,INSERTION AND DELETION TAKES PLACE AT_________?\n");
  printf ("\t\t1.FRONT,REAR\n\t\t2.ONLY AT REAR END\n\t\t3.ONLY AT FRONT END\n\t\t4.ANY POSITION\n");
  printf ("Enter your option:");
  scanf ("%d", &answer);
  if (answer == 4)
    {
      printf ("CORRECT :)\n");
        ++count;
    }
  else
    {
      printf ("WRONG! CORRECT ANSWER IS 'ANY POSITION'\n");
    }
     printf("--------------------------------------------------------------------------------------------------\n");

  printf ("\tQ(4):");
  printf ("HEADER FILE TO BE INCLUDED TO USE malloc() and calloc()?\n");
  printf ("\t\t1.ctype.h\n\t\t2.memory.h\n\t\t3.string.h\n\t\t4.stdlib.h\n");
  printf ("Enter your option:");
  scanf ("%d", &answer);
  if (answer == 4)
    {
      printf ("CORRECT :)\n");
          ++count;
    }
  else
    {
      printf ("WRONG! CORRECT ANSWER IS 'stdlib.h'\n");
    }
     printf("--------------------------------------------------------------------------------------------------\n");

  printf ("\tQ(5):");
  printf (" WHICH STRING FUNCTION USED TO FIND THE LENGTH OF GIVEN STRING?\n");
  printf ("\t\t1.strcpy\n\t\t2.strcat\n\t\t3.strlen\n\t\t4.strcmp\n");
  printf ("Enter your option:");
  scanf ("%d", &answer);
  if (answer == 3)
    {
      printf ("CORRECT :)\n");
       ++count;
    }
  else
    {
      printf ("WRONG! CORRECT ANSWER IS 'strlen'\n");
    }			
         printf("--------------------------------------------------------------------------------------------------\n");

    printf("\t\t\tCongratuations!!You have Succesfully completed  Level 3)\n");
  printf ("\t\t\t---------------------------------------------------------\n");
  printf ("\t\t\t|Press 1 to know score|\t\t\t|Press 0 to Quit|\n");
  printf ("\t\t\t---------------------------------------------------------\n");
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
  int choo;
  printf("\t\t\t------------------------Score Table--------------\n");
 printf("\t\t\t|\t\tName:%s\t\t\t|\n",name);
  if(count>=0)
  printf("\t\t\t|\t\tPoints:%d\t\t\t|\n",count*2);
 printf("\t\t\t|\t\tThanks for playing :)\t\t|\n");  
 printf("\t\t\t-------------------------------------------------\n");
 printf("--------------------------------------------------------------------------------------------------\n");
 printf("\t\t\t\t\tWanna try other level!!!\n");
  printf ("\t\t\t---------------------------------------------------------\n");
  printf ("\t\t\t|Press 1 to continue|\t\t\t|Press 0 to Quit|\n");
  printf ("\t\t\t---------------------------------------------------------\n");
  scanf ("%d", &choo);
  if (choo == 1)
  {
      choose ();
  }

  else
  {
      exit (1);
  }
}
