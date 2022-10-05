/* question: there is a toll plaza. Many vehicles are crossing everyday throughit. there are different charges as per the type of 
vehicles like 2-wheeleers and 3 wheelers no charges, car 150 one sided and rs 200 both sided. Same way commercials buses 500 one sided and
700 for two sided. Goods carrier rs 200 one sided and 300 2-sided. Now find out the total revenue collection as per vehicle 
type and gross per day. */
// 
#include<iostream>
using namespace std;

class TollPlaza{
    int revenue_from_car = 0, revenue_from_bus = 0, revenue_from_goods_carrier = 0, revenue_from_others = 0;
    

public:
    // constructor 
    TollPlaza(string vehicle, string journey){
        string type_vehicle = vehicle;
        string type_journey = journey;
        type_check(type_vehicle, type_journey);
        
    }
    
    // to check type of vehicle 
    void type_check(string type_vehicle, string type_journey)
    {
        if (type_vehicle== "two wheeler" || type_vehicle == "three wheeler")
            revenue_from_others += 0;

        else if(type_vehicle == "car"){
            if(type_journey == "one way"){
                revenue_from_car += 150;}

            else
                revenue_from_car += 200;
        }
        
        else if(type_vehicle == "commercial bus"){
            if(type_journey == "one way")
                revenue_from_bus += 500;
            else
                revenue_from_bus += 700;
        }
        else if(type_vehicle == "goods carrier"){
            if(type_journey == "one way")
                revenue_from_goods_carrier += 200;
            else
                revenue_from_goods_carrier += 300;
        }
        else
            cout << "Unknown type" << endl;
        Revenue();
    }
    
    void Revenue(){
        cout << "\t\tRevenue Collected From Two/Three wheelers is: " <<  revenue_from_others <<"rs.  " << endl << endl;
        cout << "\t\tRevenue Collected From CAR is: " <<  revenue_from_car <<"rs.  " << endl << endl;
        cout << "\t\tRevenue Collected From Commercial Buses is: " <<  revenue_from_bus <<"rs.  " << endl << endl;
        cout << "\t\tRevenue Collected From Goods Carrier is: " <<  revenue_from_goods_carrier <<"rs.  " << endl << endl;
        cout << "\t\tTotal Gross of day " << revenue_from_bus + revenue_from_car + revenue_from_goods_carrier + revenue_from_others << endl;
    }
};

int main()
{   
    cout << "\t\t\t\tWelcome"<< endl; 
    string vehicle_type;
    cout << "Enter Type of Vehicle: ";
    getline(cin,vehicle_type);
    cout << endl;
    
    string cross_type;
    cout << "Enter type of your crossing: ";
    getline(cin, cross_type);

    TollPlaza tp(vehicle_type, cross_type);

    
    return 0;

}

// This question was asked in my MCA CA1 of CPP lab evaluation. For this test we had 1 hour of time.So this code is not so good and user friendly. I know I can do better with it using switch cases so I decided to submit this code and modify it later when I'll have more time to think and code. Even though this code is not efficient but due to excellent viva round I had I got 48/50 marks in this lab evaluation. Modified code file will have name betterCA1.cpp  