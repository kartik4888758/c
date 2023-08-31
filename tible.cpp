#include <iostream>
using namespace std;

class Table {
public:
    int number,num;
    

    void printTable() {
        for (int i = 1; i <= 10; i++) {
            cout << number << " x " << i << " = " << number * i << std::endl;
        }
    }
};

int main() {
    int num;
    cout << "Enter a number to print its table: ";
    cin >> num;

    Table table(num);
    table.printTable();

    return 0;
}
