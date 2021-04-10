#include<iostream>

using namespace std;

struct Citizen{
    string surname;
    string city;
    string street;
    int house;
    int apartment;
};

void readCitizen(Citizen &c1){
    cout << "Enter surname: ";
    cin >> c1.surname;
    cout << "Enter city: ";
    cin >> c1.city;
    cout << "Enter street: ";
    cin >> c1.street;
    cout << "Enter house: ";
    cin >> c1.house;
    cout << "Enter apartment: ";
    cin >> c1.apartment;

}

void printCitizen(Citizen c1){
    cout << c1.surname << " " << c1.city << " "
         << c1.street << " " << c1.house << " " << c1.apartment << endl;
}

bool isEqualCities(Citizen c1, Citizen c2){
    return  c1.city == c2.city;
}

bool isEqualAddresses(Citizen c1, Citizen c2){
    return  c1.street == c2.street &&
            c1.house == c2.house &&
            c1.apartment == c2.apartment;
}

void findSameAddress(Citizen* citizens, int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(!isEqualCities(citizens[i], citizens[j]) &&
               isEqualAddresses(citizens[i], citizens[j])){
                printCitizen(citizens[i]);
                printCitizen(citizens[j]);
                return;
            }
        }
    }
    cout << "No results." << endl;
}


int main() {

    int n;
    cout << "Enter number of records: ";
    cin >> n;

    Citizen* citizens = new Citizen[n];
    for(int i = 0; i < n; i++){
        readCitizen(citizens[i]);
    }

    findSameAddress(citizens, n);

    return 0;
}
