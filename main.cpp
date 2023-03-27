#include<iostream>
#include<stdlib.h>
#include<fstream>
#include <windows.h>
#include <string.h>

using namespace std;

bool login();
void main_menu();
void case1();
void case2();
class car{
   protected:
       string carname;
       int model;
       int carID;
       int r_p_h;
       int driverID;
       int car_choice;
   public:
         car()
         {
             cout<<"\n\n\n\t\t______________________CAR MANAGEMENT SCREEN!!!______________";
             cout<<"\n\n\t\t1) Add Driver";
             cout<<"\n\n\t\t2) ALL CAR";
             cout<<"\n\n\t\t3) MODIFY CAR";
             cout<<"\n\n\t\t4) DELETE CAR";
             cout<<"\n\n\t\t1) MAIN MENU";

             cout<<"\n\n\t\tEnter choice:";

             cin>>car_choice;
         }
         int carchoice()
         {

             return car_choice;

         }
         void addcar()
         {

             int cout=0;
             int dID,dExp,searchedID,searchedexp;
             bool IsAvailable;
             string name;
             m:
                 cout<<"\n\n\t\tEnter car name:";
                 cin>>carName;
                 cout<<"\n\n\t\t ENTER THE MODEL NAME:";
                 cin>>model;
                 cout<<"\n\n\t\tenter the car ID:";
                 cin>>carID;
                 cout<<"\n\n\t\t enter car rate per hour:";
                 cin>>r_p_h;
                 cout<<"\n\n\t\t enter driver id:";
                 cin>>driverID;

                 fsteram file;
                 file.open("driver.txt",ios::in);
                 file>>dID>>name>>dExp>>IsAvailable;

                 while(!file.eof())
                 {
                     if(driverID==dID)
                    {
                        searchedID=dID;
                        searchedexp =dExp;
                        count++;

                     }
                     file>>dID>>name>>dExp>>IsAvailable;
                 }
                 file.close();
                 if(count==0)
                 {
                    system("color C");
                    cout<<"\n\n\t\tNo driver found with this ID!!!!";
                    sleep(3000);
                    ststem("CLS");
                    system("color A");
                    goto m;
                 }
                 else{
                    fstream file1;
                    file1.open("Car.txt",ios::out| ios::app);
                    file1.close();
                    cout<<"\n\n\t\t RECORD INSTERTED SUCCESSFULLY!";
                    sleep(2000);
                    system("CLS");
                    case1();
                 }

         }

};
class Driver
{
    protected:
        string driverName;
        int driverID;
        int driverExp;
        bool isAvail=true;
        int driver_choice;
    public:
        Driver()
        {

        cout<<"\n\n\n\t\t______________________DRIVER MANAGEMENT SCREEN!!!______________";
             cout<<"\n\n\t\t1) Add Driver";
             cout<<"\n\n\t\t2) ALL DRIVER";
             cout<<"\n\n\t\t3) MODIFY DRIVER";
             cout<<"\n\n\t\t4) DELETE DRIVER";
             cout<<"\n\n\t\t1) MAIN MENU";

             cout<<"\n\n\t\tEnter choice:";

             cin>>driver_choice;
         }
         int driverchoice()
         {

             return driver_choice;

         }
         void addDriver()
         {

             int cout=0;
             int dID,dExp,matchedID;
             bool IsAvailable;
             string name;
             m:
                 cout<<"\n\n\t\tEnter DRIVER ID:";
                 cin>>driverid;
                 cout<<"\n\n\t\t ENTER THE NAME:";
                 cin>>driverName;
                 cout<<"\n\n\t\tenter the car EXPERIENCE:";
                 cin>>driverExp;

                 /*
                 fsteram file;
                 file.open("driver.txt",ios::in);
                 file>>dID>>name>>dExp>>IsAvailable;

                 while(!file.eof())
                 {
                     if(driverID==dID)
                    {
                        searchedID=dID;
                        searchedexp =dExp;
                        count++;

                     }
                     file>>dID>>name>>dExp>>IsAvailable;
                 }
                 file.close();
                 if(count==0)
                 {
                    system("color C");
                    cout<<"\n\n\t\tNo driver found with this ID!!!!";
                    sleep(3000);
                    ststem("CLS");
                    system("color A");
                    goto m;
                 }
                 */

                    fstream file1;
                    file1.open("Driver.txt",ios::out| ios::app);
                    file1<<" "<<driverID<<" "<<driverName<<" "<<driverExp<<" "<<isAvail<<"\n";
                    file1.close();
                    cout<<"\n\n\t\t RECORD INSTERTED SUCCESSFULLY!";
                    sleep(2000);
                    system("CLS");
                    goto m;
                 }
             );
        void case1(){
            int inner_choice;
            car c1;
                    inner_choice=c1.carChoice();
                    if(inner_choice==1)
                    {
                        c1.addCar();

                    }
                    else if(inner_choice==2)
                    {
                        //c1.allCar();
                        cout<<"c1.allcars()";

                    }
                    else if(inner_choice==3)
                    {
                        //c1.modifyCar();
                        cout<<"c1.modifycars()";

                    }
                    else if(inner_choice==4)
                    {
                        //c1.deleteCar();
                        cout<<"c1.deletecar()";

                    }
                    else {
                        cout<<"\n\n\t\t invailid choice!!!!";
                        system("CLS");
                        case1();
                    }
        }
        void case2()
        {
           int inner_choice;
            Driver d1;
                    inner_choice=d1.driverChoice();
                    if(inner_choice==1)
                    {
                        c1.addDriver();

                    }
                    else if(inner_choice==2)
                    {
                        //c1.allCar();
                        cout<<"c1.allcars()";

                    }
                    else if(inner_choice==3)
                    {
                        //c1.modifyCar();
                        cout<<"c1.modifycars()";

                    }
                    else if(inner_choice==4)
                    {
                        //c1.deleteCar();
                        cout<<"c1.deletecar()";

                    }
                    else {
                        cout<<"\n\n\t\t invailid choice!!!!";
                        system("CLS");
                        case2();
                    }
        }
        void main_menu(){
            if (login()) {
                int main_choice;inner_choice;
                system("CLS");
                cout<<"\n\n\n\t\t****************************************************";
                cout<<"\n\n\n\t\t____________CAR RENTAL MANAGEMENT SCREEN!!____________";
                cout<<"\n\n\n\t\t****************************************************";
                cout<<"\n\n\t\t1) car management";
                cout<<"\n\n\t\t2 driver management";
                cout<<"\n\n\t\t3 customer management";
                cout<<"\n\n\t\t4 bill management";
                cout<<"\n\n\t\t5 exit";

                cout<<"\n\n\t\t enter choice:";
                cin>>main_choice;
                switch (main_choice)
                {
                    //case1start:
                    case1();
                   // car c1;
                  //  inner_choice=c1.carChoice();
                    //if(inner_choice==1)
                   // {
                     //   c1.addCar();

                    //}
                   // else if(inner_choice==2)
                    //{
                        //c1.allCar();
                      //  cout<<"c1.allcars()";

                    //}
                    //else if(inner_choice==3)
                    //{
                        //c1.modifyCar();
                      //  cout<<"c1.modifycars()";

                    //}
                    //else if(inner_choice==4)
                    //{
                        //c1.deleteCar();
                      //  cout<<"c1.deletecar()";
                    //
                    //}
                    //else {
                      //  cout<<"\n\n\t\t invailid choice!!!!";
                        //system("CLS");
                        //case1();
                        //gto case1start;
                        //}
                        break;

                    }
                    case 2;
                    {

                        system("CLS");
                        case2();
                        break;
                        //case2Strat;

                    }
                    case  5;
                    {

                        system("CLS");
                        main_menu();
                        break;
                        //case2start;
                    }


                }

            }
        }

    bool login(){

        string uname;
        string pass;
        bool isloggedin = false;
        cout<<"\n\n\n\t\t______________ CAR RENTAL LOGIN SCREEN!!!______________";
        cout<<"\n\n\t\tEnter User Name:";
        cin>>uname;
        cout<<"\n\n\t\tENTER password:";
        cin>>pass;
        //cout(uname<<pass;
        //strcmp(uname,"zaid") == 0&& strcmp(pass,"123456")==0
        //cout<<uname.length()<<pass.length();
        if(uname =="zaid"&& pass=="123456"){
            isloggedin = true;

            cout<<"\n\n\t\t you are logged in successfully ........";
            cout<<"\n\n\t\tloading";
            char loading =219;
            for(int i=0;i<=20;i++){
                cout<<loading;
                sleep(100);
            }
            //sleep(2000);
            system("CLS");
            return isloggedin;

        }
        else{
            system("color 4");
            cout<<"\n\n\t\tlogin failed!!!!!";
            sleep(2000);
            system("CLS");
            system("color A");
            login();

        }

     }
     int main()
     {
         system("color A");
         main_menu();
         return 0;

     }



