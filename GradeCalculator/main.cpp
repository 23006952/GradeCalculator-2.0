#include <iostream>

using namespace std;
int add(int,int);
int subtract(int,int);
int multiply(int,int);
int divide(int,int);
int main()
{
    int choice, num1,num2;
    char cont;
    do{
        cout<<"Menu driven program for basic operations"<<endl;
         cout<<"1.Addition"<<endl;
          cout<<"2.Subtraction"<<endl;
           cout<<"3.Multiplication"<<endl;
            cout<<"4.Division"<<endl;
    cout<<"Enter your choice(1/2/3/4):";
      cin>>choice;
    cout<<"Enter two integers:";
      cin>>num1>>num2;
      switch(choice){
   case 1:
       cout<<"Sum="<<add(num1, num2) <<endl;
         break;
   case 2:
       cout<<"Difference="<<subtract(num1, num2)<<endl;
         break;
   case 3:
      cout<<"Product="<<multiply(num1, num2)<<endl;
        break;
   case 4:
       if (num2==0)
         cout<<"The second integer is zero, divide by zero."<<endl;
       else
         cout<<"Quotient="<<divide(num1, num2)<<endl;
      break;
   default:
      cout<<"Invalid choice."<<endl;
      }
      cout<<"Press y or Y to continue:";
       cin>>cont;
    }
    while(cont=='y' || cont=='y');
    return 0;
}
int add(int a, int b){
return a+b;
}
int subtract(int a, int b){
return a-b;
}
int multiply(int a, int b){
return a*b;
}
int divide(int a, int b){
return(float) a/b;
}
