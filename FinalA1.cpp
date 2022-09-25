#include <iostream>
#include <queue> 
#include "path.h"
using namespace std;






int main() 
{

  Car car1 ; 
  Car car2;
  Car car3;
  Car car4;
  Car car5 ;
  Car car6;
  Road road1 ;
  Road road2;
  Road road3;
  Road coun ; 
  
 
  road1.setroad_type ('A');
  road2.setroad_type ('B');
  road3.setroad_type ('C');
  
  road1.setspeed_limit (100);
  road2.setspeed_limit(70);
  road3.setspeed_limit(50);
  
  car1.setcar_brand ("tesla") ;
  car1.setcar_type ("private");
  car1.setcar_plate ("ABC123");
  car1.setspeed(200) ;
  car1.setyear_model(2020);
  
  car2.setcar_brand ("porshe") ;
  car2.setcar_type ("Motercycle");
  car2.setcar_plate ("ERT345");
  car2.setspeed(150) ;
  car2.setyear_model(1998);
  
  car3.setcar_brand ("mercedes") ;
  car3.setcar_type ("truck");
  car3.setcar_plate ("TRE657");
  car3.setspeed(70) ;
  car3.setyear_model(2006);
  
  car4.setcar_brand ("BMW") ;
  car4.setcar_type ("bus");
  car4.setcar_plate ("SDF342");
  car4.setspeed(40) ;
  car4.setyear_model(1970);
  
  car5.setcar_brand ("JEEP") ;
  car5.setcar_type ("Motercycle");
  car5.setcar_plate ("VBN543");
  car5.setspeed(20) ;
  car5.setyear_model(2008);
  
  car6.setcar_brand ("toyata") ;
  car6.setcar_type ("private");
  car6.setcar_plate ("RFG321");
  car6.setspeed(100) ;
  car6.setyear_model(2004);
  
queue <Car> carqueue ;
carqueue.push(car1) ;
carqueue.push (car2) ;
carqueue.push (car3) ;
carqueue.push (car4) ;
carqueue.push(car5) ;
carqueue.push(car6) ;


      
     
     
     while  (!carqueue.empty())
     {
         
         Car temp = carqueue.front() ;
         carqueue.pop() ;
         bool flag ;
         
         int carage=road1.age(temp.getyear_model()) ;
        cout<<"This Car's Age is:" << carage <<endl ; 
         
         coun.allow(temp.getcar_type());
         
         
         
     
         
         if ((temp.getcar_type()=="private")||(temp.getcar_type()=="Motercycle")) 
         {
            
        
          flag=road1.Radar(temp.getspeed(),road1.getroad_type());
         if (flag==true)
         {
             cout<< temp.getcar_brand() << endl ; 
             cout<< temp.getcar_plate() << endl ;
             cout<< temp.getcar_type() << endl ;
             cout<< temp.getyear_model() << endl;
             cout<< temp.getspeed() << endl ;
             cout<< "this car will be fined"<< endl;
         }
           flag= road2.Radar(temp.getspeed(),road2.getroad_type());
          if (flag==true)
          {
              cout<< temp.getcar_brand() << endl ; 
             cout<< temp.getcar_plate() << endl ;
             cout<< temp.getcar_type() << endl ;
             cout<< temp.getyear_model() << endl;
             cout<< temp.getspeed() << endl ;
             cout<< "this car will be fined"<< endl;
            
         }
         }
         else if (temp.getcar_type()=="truck")
         {
            flag= road3.Radar(temp.getspeed(),road3.getroad_type());
             if (flag==true)
             {
            cout<< temp.getcar_brand() << endl ; 
             cout<< temp.getcar_plate() << endl ;
             cout<< temp.getcar_type() << endl ;
             cout<< temp.getyear_model() << endl;
             cout<< temp.getspeed() << endl ;
             cout<< "this car will be fined"<< endl;
             }
             flag= road2.Radar(temp.getspeed(),road2.getroad_type());
          if (flag==true)
          {
          cout<< temp.getcar_brand() << endl ; 
             cout<< temp.getcar_plate() << endl ;
             cout<< temp.getcar_type() << endl ;
             cout<< temp.getyear_model() << endl;
             cout<< temp.getspeed() << endl ;
             cout<< "this car will be fined"<< endl;
          
         }
         }
         else 
         {
            flag= road2.Radar(temp.getspeed(),road2.getroad_type());
            if (flag==true)
            {
            cout<< temp.getcar_brand() << endl ; 
             cout<< temp.getcar_plate() << endl ;
             cout<< temp.getcar_type() << endl ;
             cout<< temp.getyear_model() << endl;
             cout<< temp.getspeed() << endl ;
             cout<< "this car will be fined"<< endl; 
         }
         }
         
         
  
         
   
     }  
     
     
     cout<<" These are how many Cars have passed on road A:"<< coun.getcountA()<< endl;
     cout <<"This is Road As Effencieny:"<< (double(coun.getcountA())/coun.getcountB())*100 << endl; 
     cout<<"These are how many Cars have passed on road B:"<< coun.getcountB()<< endl;
     cout <<"This is Road As Effencieny:"<< (double(coun.getcountB())/coun.getcountB())*100 << endl;
     cout<<" These are how many Cars have passed on road C:"<< coun.getcountC()<< endl;
     cout <<"This is Road C Effencieny:"<< (double(coun.getcountC())/coun.getcountB())*100 << endl;
    return 0;
}