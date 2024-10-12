#include <iostream>
#include <vector>

using namespace std;

int find_starting_city(vector<int>& city_distances, vector<int>& fuel, int mpg) {
    int number_of_cities = city_distances.size(); // number of cities

    for (int i = 0; i < number_of_cities; i++) {
        int tank = 0; // gas in tank
        bool valid = true; // flag indicating if current starting city is valid

        for (int j = 0; j < number_of_cities; j++) {
            int current_city = (i + j) % number_of_cities; // index of current city
            int gas = fuel[current_city]; // gas available at current city
            int distance = city_distances[current_city]; // distance to next city
            tank += gas * mpg - distance; // update gas in tank after traveling to next city

            if (tank < 0) {
                valid = false; // current starting city is not valid
                break;
            }
        }

        if (valid) {
            return i;
        }
    }

    return -1; // no valid starting city found
}

int main() {
    vector<int> city_distances = {5, 25, 15, 10, 15};
    vector<int> fuel = {1, 2, 1, 0, 3};
    int mpg = 10;
    int starting_city = find_starting_city(city_distances, fuel, mpg);

    if (starting_city >= 0) {
        cout << "Preferred starting city is " << starting_city << endl;
    } else {
        cout << "No valid starting city found" << endl;
    }

    return 0;
}