#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main()
{
    int n,guess,attempt=0;
    srand(time(0));
    n = rand()%100+1;
    n=10;
    cout <<"guess the number game"<<endl;
    
    do
    {
        cout<<"guess the no in bet 1 to 100";
        cin>>guess;
        attempt++;
        if(guess>n)
        {
           cout<<"you chose the "<<guess<<"too high";
        }
        else if (guess<n)
        {
            cout<<"you chose the" << guess <<"too low\n";
        }
        else 
        {
            cout<<"right guess hooray!"<<guess<<"in"<<attempt<<"tries!"<<endl;
        }
    
    } while (guess!=n);
     return 0;
    

}