#pragma once
#include <string>
#include <vector>
#include "ingredient.h"

class Dish {
public:
	
private:
	// Attributes
	uint16_t id;
	std::string name;
	float basePrice;
	std::vector <Ingredient> defaultIngredients;
	//Methods
	Dish(uint16_t id, std::string name, float basePrice);
};