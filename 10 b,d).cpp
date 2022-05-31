#include<iostream>
#include<fstream>

using namespace std;

struct Baggage{
    int passengerNo;
    unsigned numberOfItems;
    double totalWeight;
};

int main() {

    const int NUMBER_OF_PASSENGERS = 3;

    ifstream in;
    in.open("passengers.txt");
    string* passengers = new string[NUMBER_OF_PASSENGERS];
    for(int i = 0; i < NUMBER_OF_PASSENGERS; i++){
        in >> passengers[i];
    }
    in.close();

    in.open("baggage.txt");
    Baggage* baggages = new Baggage[NUMBER_OF_PASSENGERS];
    for(int i = 0; i < NUMBER_OF_PASSENGERS; i++){
        in >>   baggages[i].passengerNo >>
           baggages[i].numberOfItems >> baggages[i].totalWeight;
    }
    in.close();

    /* More then 2 items */
    cout << endl << "More then two items:" << endl;
    for(int i = 0; i < NUMBER_OF_PASSENGERS; i++){
        if(baggages[i].numberOfItems > 2){
            cout << passengers[baggages[i].passengerNo - 1] << endl;
        }
    }

    /* More then average number of items */
    cout << endl << "More then average number of items:" << endl;
    double average = 0;
    for(int i = 0; i < NUMBER_OF_PASSENGERS; i++){
        average += baggages[i].numberOfItems;
    }
    average /= NUMBER_OF_PASSENGERS;
    for(int i = 0; i < NUMBER_OF_PASSENGERS; i++){
        if(baggages[i].numberOfItems > average){
            cout << passengers[baggages[i].passengerNo - 1] << endl;
        }
    }

    /* One item and total weight more then m*/
    cout << endl << "One item and total weight more then m:" << endl;
    double m;
    cout << "Enter m: ";
    cin >> m;
    bool isConvinient = false;
    for(int i = 0; i < NUMBER_OF_PASSENGERS; i++){
        if( baggages[i].numberOfItems == 1 &&
            baggages[i].totalWeight >= m){
            cout << passengers[baggages[i].passengerNo - 1] << endl;
            isConvinient = true;
        }
    }
    if(!isConvinient){
        cout << "No results." << endl;
    }


    return 0;
}