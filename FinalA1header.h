#include <iostream>

#include <queue> 

using namespace std;
class Car 
{

private:
string car_brand ;
string car_type ;
string car_plate;
int speed ;
int year_model ; 


  
public:
Car ()
{
     car_brand= "" ; 
     car_type= "" ; 
     car_plate= "" ; 
     speed=0 ; 
    year_model=0; 
}
Car ( string brand, string type, string plate, int maxspeed, int year) 
{
    car_brand=brand ;
    car_type= type ;
    car_plate= plate ;
    speed=  maxspeed;
    year_model=year;
}

void setcar_brand(string b)
{
   car_brand = b ;
}

string getcar_brand ()
{
    return car_brand ;
}


void setcar_type(string t)
{
   car_type = t ;
}

string getcar_type ()
{
    return car_type ;
}

void setcar_plate(string p)
{
   car_plate = p ;
}

string getcar_plate ()
{
    return car_plate ;
}
    
    void setspeed(int sp)
{
   speed = sp ;
}

int getspeed ()
{
    return speed ;
}

  void setyear_model (int m)
{
   year_model = m ;
}

int getyear_model ()
{
    return year_model ;
}
};  





class Road 
{

private:
 

char road_type; 
int speed_limit;
int countA=0 ;
int countB=0;
int countC=0; 


public:
Road()
{
   road_type = '\0' ; 
   speed_limit= 0;
 
}
Road ( char rtype, int limit, int ca, int cb, int cc) 
{
road_type = rtype;
speed_limit= limit;
countA= ca;
countB=cb;
countC=cc ;
}
 
 void setroad_type (char rt)
 {
     road_type=rt;
 }
 char getroad_type ()
 {
     return road_type ;
 }
 void setspeed_limit (int sl)
 {
     speed_limit=sl ;
 }
 int getspeed_limit ()
 {
     return speed_limit ;
 }
 
 void setcountA (int a)
 {
     countA=a ;
 }
 int getcountA ()
 {
     return countA ;
 }
 void setcountB (int b)
 {
     countA=b ;
 }
 int getcountB ()
 {
     return countB ;
 }
 void setcountC (int c)
 {
     countC=c ;
 }
 int getcountC ()
 {
     return countC ;
 }


void allow (string car_type)
 {
     if ((car_type == "private")||(car_type=="Motercycle"))
    {
        
     cout<< " this vehicle is allowed on road A and B" << endl ; 
        countA++;
        countB++; 
        
    }
     
     else if ( car_type== "truck")
     {
     cout<<" This vehicle is only allowed on road C and B " << endl; 
     countC++ ;
     countB++ ;
     }
     else 
     {
     cout << " this vehicle is  only allowed on road B" << endl; 
     countB ++ ; 
     }
 }
 
 bool Radar(int car_speed, char road_type)
{
    if ((road_type='A')&&(car_speed>100))
    {
    return true;
    }
    else if ((road_type='B')&&(car_speed>70))
    {
        return true;
        
    }
    
    else if ((road_type='C')&&(car_speed>50))
    {
        return true;
    } 
    
    else 
    {
        return false ; 
    }
    
    

}
 
 int age (int year_model)
 {
      year_model =  2022- year_model ;
      return year_model ; 
 }
 
}; 