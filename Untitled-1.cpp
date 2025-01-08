#include <iostream>
#include <cstdlib>
#include <ctime>
int erecord;int mrecord;int hrecord;
using namespace std;
int main()
{
    int guess;int random;int level;int diff;int i;char decision;
    srand(time(0));
    random=(rand()%100)+1;
    cout<<"Welcome to the Number Guessing Game!\nI'm thinking of a number between 1 and 100.\nYou have 5 chances to guess the correct number.";
  
    cout<<"Please select the difficulty level:\n1. Easy (10 chances)\n2. Medium (5 chances)\n3. Hard (3 chances)\n";
cout<<"Enter your choice:";
    cin>>level;
    switch(level)
    {case 1:
     cout<<"Great! You have selected the Easy difficulty level.";
     diff=10;
     break;
     case 2:
     cout<<"Great! You have selected the Medium difficulty level.";
     diff=5;
     break;
     case 3:
     cout<<"Great! You have selected the Hard difficulty level.";
     diff=3;
     break;
    default:
    break;
    }
for(i=1;i<=diff;++i)
{
    cout<<"Enter your guess:\n";
    cin>>guess;
    if(guess==random)
    {cout<<"Congratulations! You guessed the correct number in "<<i<<" attempts.";
    break;
    }
    if(guess>random)
    {cout<<"Incorrect! The number is less than "<<guess<<".\n";
    }
    if(guess<random)
    {cout<<"Incorrect! The number is greater than "<<guess<<".\n";
    }
}
if((i<erecord&&diff==10)||(erecord==0&&diff==10)){cout<<"You set a new record."<<"The old easy record was in "<<erecord<<" attempts.";
erecord=i; }
if(i<mrecord&&diff==5||(mrecord==0&&diff==5)){cout<<"You set a new record."<<"The old medium record was in "<<mrecord<<" attempts.";
mrecord=i; }
if(i<hrecord&&diff==3||(hrecord==0&&diff==3)){cout<<"You set a new record."<<"The old hard record was in "<<hrecord<<" attempts.";
hrecord=i; }
if(i==diff)
{
    cout<<"Sorry! You have exhausted all your chances.\nThe correct number was "<<random<<".\n";
}
cout<<"Do you want to play again?\nEnter your choice (Y/N):";
cin>>decision;
switch(decision)
{
    case 'Y':
    case 'y':
    main();
    break;
    case 'N':
    case 'n':
    cout<<"Thank you for playing the Number Guessing Game!";
    break;
    default:
    break;
}

return 0;
}