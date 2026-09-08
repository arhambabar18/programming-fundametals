#include <iostream>
using namespace std;

// Function to calculate the average temperature for the week
double AvgTemp(int temperatures[7][24]) {
    double totalTemperature = 0;
    int count = 0;
    double avg;
    for (int day = 0; day < 7; day++) {
        for (int hour = 0; hour < 24; hour++) {
            totalTemperature += temperatures[day][hour];
            count++;
        }
    }
    avg=totalTemperature/count;
    return avg;
}

// Function to find the highest and lowest temperatures for the week
void HighestAndLowest(int temperatures[7][24], int &highest, int &lowest) {
    highest = temperatures[0][0]; // Start with the first element
    lowest = temperatures[0][0];  // Start with the first element

    for (int day = 0; day < 7; day++) {
        for (int hour = 0; hour < 24; hour++) {
            if (temperatures[day][hour] > highest) {
                highest = temperatures[day][hour];
            }
            if (temperatures[day][hour] < lowest) {
                lowest = temperatures[day][hour];
            }
        }
    }
}

int main() {
    // Example temperatures for a week (7 days with 24 hourly readings each)
    int temperatures[7][24] = {
        {30, 32, 34, 33, 31, 30, 29, 28, 28, 30, 32, 34, 35, 36, 37, 38, 39, 40, 41, 40, 39, 38, 37, 36},
        {29, 30, 32, 34, 33, 32, 31, 30, 30, 32, 33, 34, 35, 36, 36, 37, 38, 39, 40, 41, 40, 39, 38, 37},
        {25, 26, 28, 30, 32, 33, 34, 33, 32, 30, 28, 27, 27, 26, 25, 24, 23, 22, 21, 21, 22, 23, 24, 25},
        {31, 32, 33, 34, 35, 36, 37, 38, 39, 39, 38, 37, 35, 34, 33, 32, 32, 31, 30, 29, 28, 28, 29, 30},
        {28, 29, 31, 32, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 44, 43, 42, 41, 40, 39, 38, 37, 36},
        {26, 27, 29, 30, 31, 32, 33, 34, 35, 35, 34, 33, 32, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20},
        {33, 34, 36, 37, 38, 39, 40, 41, 42, 43, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30}
    };

    // Call the functions to get the results
    double averageTemp = AvgTemp(temperatures);

    int highestTemp, lowestTemp;
    HighestAndLowest(temperatures, highestTemp, lowestTemp);

    // Display the results
    cout<<"*********************************\n";
    cout<<" Weather Statistics System \n";
    cout<<"*********************************\n\n\n";
    cout<<"-------------------------------------------------------\n";
    cout << "Average temperature for the week: " << averageTemp  << "  Centigrade" << endl;
    cout << "Highest temperature for the week: " << highestTemp  << "  Centigrade" << endl;
    cout << "Lowest temperature for the week: "  << lowestTemp   << "  Centigrade" << endl;

    return 0;
}
