#include <iostream>
using namespace std;

//function to display

//function to calculate
int main() {
    //1. display prompt
    //2. take input
    //3. calculate amount
    //4. display result
    int option = 0;
    cout << "What currency do you want to convert to?" << endl << "1. Germany (EUR)" << endl << "2. Great Britain (GBP)" << endl << "3. Canada (CAD)" << endl << "4. India (INR)" << endl << "5. Mexico (MXN)" << endl << "6. Australia (AUD)" << endl << "0. Quit" << endl << "Select an option (1-6):" << endl;
    cin >> option;
    cout << "Please enter amount (in USD): $";
    int usd = 0;
    cin >> usd;
    cout << endl;
    if(option == 1){
        cout << usd * 0.89869 << endl;
    } else if(option == 2){
        cout << usd * 0.76792 << endl;
    } else if(option == 3){
        cout << usd * 1.30602 << endl;
    } else if(option == 4){
        cout << usd * 70.8729 << endl;
    } else if(option == 5){
        cout << usd * 18.8018 << endl;
    } else if(option == 6){
        cout << usd * 70.8729 << endl;
    } else{
        cout << "Bye it's not like there was a loop or anything anyways" << endl;
    }
    return 0;
}
