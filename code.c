#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
using namespace std;
class toll{
public:
int count(int &cash,int &fee, int &reciept, int &totalvehicles)
{
cash=cash+fee;
reciept=reciept+1;
totalvehicles=totalvehicles+1;
return 0;
}
int entry(int &amount,int &fee, int &weight, int &exchange)
{ cout<<"Enter the amount Paid (in rupees)"<<"\n";
cin>>amount;
while(amount<fee)
 {
cout<<"Enter amount again(must be more than "<<fee<<"
)"<<"\n";
cout<<"Deposit the amount: "<<"\n";
cin>>amount;
}
cout<<"Enter weight of vehicle: "<<"\n";
cin>>weight;
if(weight>100)
{
fee=fee*2;
cout<<"Double Fee will be charged for having overweight!"<<"\n";
}
exchange=amount-fee;
cout<<"Return "<<exchange<<"Rs to driver"<<"\n";
cout<<"-----------------------------------------------"<<"\n";
cout<<"\n";
return 0;
}
};
int main()
{
 toll t;
char n, stats;
int Truck=0, Bus=0, Motorbike=0, GovernmentCar=0, Van=0, Car=0;
/*int a;
while(a==0)
{
cout<<"Press: "<<"\n";
cout<<" 1 for running Program."<<"\n";
cout<<" 2 for ending Program."<<"\n";
 cin>>a;
 switch(a)
 case 1:*/
{
cout<<"Press: "<<"\n";
cout<<"1 TO work"<<"\n";
cin>>n;
switch(n)
{
case'1':
{
int i=1,weight, cash=0, reciept=0, totalvehicles=0, Exchange, Amount;
int vehicle ; //w=weight in Kg's
while(vehicle==0&&vehicle==0)
{
cout<<"Enter the type of vehicle "<<"\n";
cout<<"1- for Truck"<<"\n";
cout<<"2- for Car"<<"\n";
cout<<"3- for 2 Wheeler"<<"\n";
cout<<"4- for Bus"<<"\n";
cout<<"5- for Van"<<"\n";
cout<<"6- for Ministers veichle"<<"\n";
cout<<"7- for Ambulance"<<"\n";
cout<<"8- FOR TODAYS ENTRY DETAIL"<<"\n";
cin>>vehicle;
if(vehicle==1||vehicle==2||vehicle==3||vehicle==4||vehicle==5||vehi
cle==6)
{
if(vehicle==1)
{
int fee;
cout<<"enter the rate for veichle"<<"\n";
cin>>fee;
 t.entry(Amount,fee,weight,Exchange);
 t.count(cash,fee,reciept,totalvehicles);
//using function
 Truck=Truck+1;
 // declaring argument of time()
time_t my_time = time(NULL);
//ctime() used to give the present time
printf("%s", ctime(&my_time));
}
else if(vehicle==2)
{ int fee;
cout<<"enter the rate for veichle"<<"\n";
cin>>fee;
 t.entry(Amount,fee,weight,Exchange);
 t.count(cash,fee,reciept,totalvehicles);
//using function
 Car=Car+1;
 // declaring argument of time()
time_t my_time = time(NULL);
//ctime() used to give the present time
printf("%s", ctime(&my_time));
}
else if(vehicle==3)
{ int fee;
 cout<<"enter the rate for veichle"<<"\n";
cin>>fee;
t.entry(Amount,fee,weight,Exchange);
t.count(cash,fee,reciept,totalvehicles);
//using function
Motorbike=Motorbike+1;
// declaring argument of time()
time_t my_time = time(NULL);
//ctime() used to give the present time
printf("%s", ctime(&my_time));
}
else if(vehicle==4)
{ int fee;
 cout<<"enter the rate for veichle"<<"\n";
cin>>fee;
 t.entry(Amount,fee,weight,Exchange);
 t.count(cash,fee,reciept,totalvehicles);
 Bus=Bus+1;
 // declaring argument of time()
time_t my_time = time(NULL);
//ctime() used to give the present time
printf("%s", ctime(&my_time));
}
else if(vehicle==5)
{ int fee;
 cout<<"enter the rate for veichle"<<"\n";
cin>>fee;
 t.entry(Amount,fee,weight,Exchange);
 t.count(cash,fee,reciept,totalvehicles);
 Van=Van+1;
 // declaring argument of time()
time_t my_time = time(NULL);
//ctime() used to give the present time
printf("%s", ctime(&my_time));
}
else if(vehicle==6)
{
cout<<" PASS "<<"\n";
totalvehicles=totalvehicles+1;
cash=cash;
reciept=reciept;
 GovernmentCar=GovernmentCar+1;
 // declaring argument of time()
time_t my_time = time(NULL);
//ctime() used to give the present time
printf("%s", ctime(&my_time));
}
else if(vehicle==6)
{
cout<<" PASS "<<"\n";
totalvehicles=totalvehicles+1;
cash=cash;
reciept=reciept;
 GovernmentCar=GovernmentCar+1;
 // declaring argument of time()
time_t my_time = time(NULL);
//ctime() used to give the present time
printf("%s", ctime(&my_time));
}
else if(vehicle==8)
{
cout<<"Program will close now"<<"\n";
i=-1;
}
else
{
cout<<"Enter the vehicle type again: "<<"\n";
}
}
}
cout<<"Total Cash Earned Today: "<<cash<<"\n";
cout<<"Total Vehicles passed today: "<<totalvehicles<<"\n";
cout<<"Reciepts sold today: "<<reciept<<"\n";
while (stats!='E')
{
cout<<"Enter S for Detailed vehicle stats. Or press E key to end
program."<<"\n";
cin>>stats;
system("CLS");
switch(stats)
{
case'S':
{
cout<<"Trucks Passed today : "<<Truck<<"\n";
cout<<"Busses Passed today : "<<Bus<<"\n";
cout<<"Vans passed today : "<<Van<<"\n";
cout<<"Cars passed today : "<<Car<<"\n";
cout<<"Motorbikes passed today : "<<Motorbike<<"\n";
cout<<"Government Cars passed today :
"<<GovernmentCar<<"\n";
 break;
 // declaring argument of time()
time_t my_time = time(NULL);
//ctime() used to give the present time
printf("%s", ctime(&my_time));
}
default :
{
cout<<"enter valid entry."<<"\n";
}
}
}
}
 case '2':
{
cout<<"thank you"<<endl;
cout<<"Good luck"<<endl;
 }
 break;
 default:
 {
 cout<<"You entered invalid value"<<"\n";
 cout<<"Crashed :-)"<<"\n";
 }
}
}
// declaring argument of time()
time_t my_time = time(NULL);
//ctime() used to give the present time
printf("%s", ctime(&my_time));
return 0;
}
