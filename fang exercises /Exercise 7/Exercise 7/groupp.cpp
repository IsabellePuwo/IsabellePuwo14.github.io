#include <iostream>
#include <string> 
#include <vector>

using namespace std;

struct MenuItem{
    string catergory;
    string name;
    double price;
    double rating;
    bool recommended;
};
bool compare_food_rating(const MenuItem& M1, const MenuItem& M2){
    return M1.rating > M2.rating;
}
void mark_recommendations(vector<MenuItem>& menu){
    sort(menu.begin(), menu.end(), compare_food_rating);
    for(int i = 0; i < min(3, (int)menu.size()); i++){
        menu[i].recommended = true;
    }
}

