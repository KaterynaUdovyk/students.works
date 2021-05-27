#include <queue>
#include <iostream>
#include <functional>
#include <vector>

using namespace std;

namespace P {
    class Auto {
    private:
        string name;
        string model;
        string number;
        int ownerId;
        int repairCost;
    public:
        Auto() {}

        void input();

        void show();

        void setRepairCost(int repairCost);

        int getRepairCost();

    };

    class Compare{
    public:
        bool operator() (P::Auto a1, Auto a2)
        {
            return a1.getRepairCost() < a2.getRepairCost();
        }
    };

    int Auto::getRepairCost(){
        return repairCost;
    }

    void Auto::setRepairCost(int repairCost_){
        repairCost = repairCost_;
    }

    void Auto::input() {
        cout << "enter name, model, number, ownerId, repairCost: ";
        cin >> name;
        cin >> repairCost;
        cin >> number;
        cin >> ownerId;
        cin >> repairCost;
    }

    void Auto::show() {
        cout << name;
        cout << repairCost;
        cout << number;
        cout << ownerId;
        cout << repairCost;
    }
}



int main() {
    priority_queue<P::Auto, vector<P::Auto>, P::Compare> repairOrder;

    P::Auto a1,a2,a3;
    a1.input();
    a2.input();
    a3.input();
    repairOrder.push(a1);
    repairOrder.push(a2);
    repairOrder.push(a3);

}