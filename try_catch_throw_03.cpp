#include<iostream>
using namespace std;
int main(){
    double numerator, denominator, arr[4] = {0.0, 0.0, 0.0, 0.0};
    int index;
    cout << "Enter array index: ";
    cin >> index;
    try {
        //throw exception if array out of bounds
        if (index >= 4)
        throw "Error: Array out of bounds!";
        //not executed if array is out of bounds
        cout << "Enter numerator: ";
        cin >> numerator;
        cout << "Enter denominator: ";
        cin >> denominator;

        if (denominator == 0)
        throw 0;
        //not executed if denominaotr is 0
        arr[index] = numerator / denominator;
        cout << arr[index] << endl;

    }
    //catch "Array out of bounds" exception
    catch (const char* msg) {
        cout << msg << endl;
    }
    //catch "Divide by 0" exception
    catch (int num) {
        cout << "Error: Cannot divide by " << num << endl;

    }
    catch (...) {
        cout << "Unexpected exception!" << endl;
    }
    return 0;
}