// Containers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <map>

using namespace std;


void arrayExample() {
    // Initializearray with dyas of the week
    array<string, 7> daysOfWeek = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
    
    //Print the number of elements in the array
    cout << "Array size: " << daysOfWeek.size() << endl;
   
    //Loop through the array and print each day
    cout << "Days of the week: " << endl;
    for (const auto& day : daysOfWeek) {
        cout << day << endl;
    }
}

void vectorExample() {
    vector<int> numbers = { 1, 2, 3, 4, 5 };

    //Adding 2 more interger
    numbers.push_back(6);
    numbers.push_back(7);

    //Removing last element
    numbers.pop_back();

    //Print each element from the vector
    cout << "Vector contents after modification: " << endl;
    for (const auto& num : numbers) {
        cout << num << " ";
    }
    cout << endl;
}

void listExample() {
    list<string> fruits = { "Apple", "Banana", "Cherry" };

    // Add orange to the front of the list
    fruits.push_front("Orange");

    // Add grapes to the end of the list
    fruits.push_back("Grapes");

    //remove banana from the list
    fruits.remove("Banana");

    //go through the list using a range-based loop and print each fruit
    cout << "List contents after modifications: " << endl;
    for (const auto& fruit : fruits) {
        cout << fruit << " ";
    }
    cout << endl;
}

void mapExample() {
    map<string, int> groceryStock = {
        {"apples", 10},
        {"mangos", 5},
        {"carrots", 7}
    };

    //Update the quantity for apples
    groceryStock["apples"] = 15;

    //go thorugh the map and print out each key value pair
    cout << "Grocery Stock: " << endl;
    for (const auto& item : groceryStock) {
        cout << item.first << ": " << item.second << " items" << endl;
    }
}



int main()
{
    arrayExample();
    cout << endl;

    vectorExample();
    cout << endl;

    listExample();
    cout << endl;

    mapExample();

    return 0;
}




















// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
