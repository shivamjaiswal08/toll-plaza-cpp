/* question: there is a toll plaza. Many vehicles are crossing everyday throughit. there are different charges as per the type of 
vehicles like 2-wheeleers and 3 wheelers no charges, car 150 one sided and rs 200 both sided. Same way commercials buses 500 one sided and
700 for two sided. Goods carrier rs 200 one sided and 300 2-sided. Now find out the total revenue collection as per vehicle 
type and gross per day. */
// 
#include<iostream>
using namespace std;

class TollPlaza{
    int revenue_from_car, revenue_from_bus, revenue_from_goods_carrier, revenue_from_others;
    
public:
    // constructor 
    TollPlaza(){
        revenue_from_car = 0, revenue_from_bus = 0, revenue_from_goods_carrier = 0, revenue_from_others = 0;
        show_Vehicle_Menu();
    }
    
    // to select type of vehicle
    void show_Vehicle_Menu(){
        int option;
        cout << "[1] Two/Three Wheelers " << endl;
        cout << "[2] Car " << endl;
        cout << "[3] Commercial Bus " << endl;
        cout << "[4] Goods Carrier " << endl;
        cout << "[9] Exit " << endl << endl;
        cout << "Please! Select type of Vehicle from given menu: ";
        cin >> option;

        cout << endl;
        
        if(option == 9){
            exit(0);
        }
        show_journey_type(option);
    }

    // to select journey type of vehicle 
    void show_journey_type(int option){
        int v_option = option, j_option;
        
        cout << "[1] One-Way " << endl;
        cout << "[2] Two-Way " << endl;
        cout << "[9] Exit " << endl << endl;
        cout << "Kindly, select jounrey type of vehicle: ";
        cin >> j_option;

        cout << endl;
        charges(v_option, j_option);
    }

    // to apply charges on vehicle  
    void charges(int tv, int tj)
    {
        switch(tv){
            case 1:
                revenue_from_others += 0;
                break;
            case 2:
                switch (tj)
                {
                case 1:
                    revenue_from_car += 150;
                    break;
                case 2:
                    revenue_from_car += 200;
                    break;
                case 9:
                    exit(0);
                default:
                    revenue_from_car += 0;
                    break;
                }
                break;
            case 3:
                switch(tj){
                    case 1:
                        revenue_from_bus += 500;
                        break;
                    case 2:
                        revenue_from_bus += 700;
                        break;
                    case 9:
                        exit(0);
                    default:
                        revenue_from_bus += 0;
                        break;
                }
                break;
            case 4:
                switch(tj){
                    case 1:
                        revenue_from_goods_carrier += 200;
                        break;
                    case 2:
                        revenue_from_goods_carrier += 300;
                        break;
                    case 9:
                        exit(0);
                    default:
                        revenue_from_goods_carrier += 0;
                        break;
                    }
                break;
            // case 9:
            //     exit(0);     we don't need case 9 here because we created a exit statement in show_Vehicle_Menu function. If user input 9, then code will exit from function itself and will not call show_journey_menu function.

            default:
                break;
        }

        cout << "Would you like to add new vehicle,[Enter y/n]: ";
        char choice;
        cin >> choice;
        if (choice == 'y'){
            show_Vehicle_Menu();
            } 
        else{
            Revenue();
            Gross();
            }
        
    }
    
    // to print revenues 
    void Revenue(){
        cout << "\t\tRevenue Collected From Two/Three wheelers is: " <<  revenue_from_others <<" rs.  " << endl << endl;
        cout << "\t\tRevenue Collected From CAR is: " <<  revenue_from_car <<" rs.  " << endl << endl;
        cout << "\t\tRevenue Collected From Commercial Buses is: " <<  revenue_from_bus <<" rs.  " << endl << endl;
        cout << "\t\tRevenue Collected From Goods Carrier is: " <<  revenue_from_goods_carrier <<" rs.  " << endl << endl;
    }

    // to print gross of the day 
    void Gross(){
        int gross_of_day = revenue_from_bus + revenue_from_car + revenue_from_goods_carrier + revenue_from_others;
        cout << "\t\tTotal Gross From Day is " << gross_of_day << " rs." << endl;
    }
};

int main()
{   
    cout << "\t\t\t\t==========Welcome==========" << endl; 
    TollPlaza tp;
    
    return 0;
}

// This code I created after many modification in CA1.cpp file. This is better and user friendly version of CA1.cpp code. All these modification I was able to do because of more time I got.