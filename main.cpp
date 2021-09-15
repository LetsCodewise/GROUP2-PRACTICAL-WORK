#include <iostream>
#include <stdlib.h>

using namespace std;

void calculateGPA(); //function  declaration
void calculateCGPA(); //function  declaration


int main()
{

    int input;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"            GPA & CGPA Calculator                      "<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"      MENU:"<<endl;
    cout<<"      1. Calculate GPA (Grade Point Average)"<<endl;
    cout<<"      2. Calculate CGPA(Cumulative Grade Point Average)"<<endl;
    cout<<"      3. Exit Application"<<endl;
    cout<<"-------------------------------------------------------"<<endl;
sub:
    cout<<"Enter your choice:";
    cin>> input;
    switch(input)
      {
      case 1:
        calculateGPA(); //GPA function calling
        break;
      case 2:
        calculateCGPA(); //CGPA function calling
        break;
      case 3:
        (EXIT_SUCCESS); //Exit function calling
         break;
      default:
         cout<<"You have entered wrong input.Try again!\n"<<endl;
         goto sub;
         break;
       }
}
void calculateGPA() //function definition
{
    int q;
    //system("cls")
    cout<< "-----------GPA-------------------\n" <<endl;
    cout<<" How many courses do you want to calculate?:";
    cin>> q;

     float credit[q];
     float point[q];

     cout<<endl;
     //int i=1
     for(int i = 0; i<q; i++)
     {
         cout<<"Enter the  point unit for the subject"<< i + 1 << ":";
         cin>> credit[i];
         cout<<endl;
         cout<<"Enter the credit unit of the subject "<< i + 1 <<":";
         cin>> point[i];
         cout<<"--------------------------------\n\n"<<endl;
     }

     float sum = 0;
     float tot;
     for(int j = 0; j < q; j++)
     {
        tot = credit[j] * point[j];
         sum = sum + tot;
     }

     float totCr = 0;
     for(int k = 0; k < q; k++)
     {
         totCr= totCr + credit[k];
     }
     cout<<"*---------------RESULT--------------*"<<endl;
     cout<<"Total Credit Unit: "<<sum<<endl;
     cout<<"Total Subject Score: "<<totCr<<endl;
     cout<<"|---------------YOUR GPA-------------"<<endl;
     cout<<"|| GPA: " << sum / totCr << "|| " <<endl;
     cout<<"*------------------------------------*"<<endl;


sub:
   int inmenu;
   cout<<"\n\n\n1. Calculate Again" <<endl;
   cout<<"2. Go to Main Menu" << endl;
   cout<<"3. Exit This App \n\n"<<endl;
   cout<<"Your Input:"<<endl;
   cin>> inmenu;

   switch (inmenu)
   {
   case 1:
    calculateGPA();
    break;
   case 2:
    main();
    break;
   case 3:
    (EXIT_SUCCESS);

   default:
    cout<<"\n\n You have Entered wrong Input! Please Choose Again"<<endl;
    goto sub;
   }
}

void calculateCGPA() // function definition z
{
    //system("cls");
    int l;
    cout<<"---------------------CGPA Calculating-------------------------\n"<<endl;
    cout<<"How many semester result do you want input:";
    cin>>l;
    cout<<"\n\n"<<endl;
    float semrs[l];
    int i;

    for(i = 0; i < l; i++)
    {
        cout<<"Enter Semester "<< i + 1<<"Result(GPA):";
        cin>> semrs[i];
        cout<<"\n"<<endl;
    }

    float semtot = 0;
    for(int j = 0; j < l; j++)
    {
        semtot = semtot + semrs[j];
    }


    cout<<"*------------------ RESULT ---------------------------*"<<endl;
    cout<<"|-----------------------------------------------------|"<<endl;
    cout<<"********|| YOUR CGPA is: "<< semtot / l << "||********"<<endl;
    cout<< "*----------------------------------------------------*"<<endl;

sub:
   int inmenu;
   cout<<"\n\n\n1. Calculate Again" <<endl;
   cout<<"2. Go to Main Menu" << endl;
   cout<<"3. Exit This App \n\n"<<endl;
   cout<<"Your Input:"<<endl;
   cin>> inmenu;


   switch (inmenu)
   {
   case 1:
    calculateCGPA();
    break;
   case 2:
    main();
    break;
   case 3:
    (EXIT_SUCCESS);

   default:
    cout<<"\n\n You have Entered wrong Input! Please Choose Again"<<endl;
    goto sub;
   }

}

