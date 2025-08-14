#pragma once
#include "ingredient.h"

class IngredientPortion {
public:
	
private:
	//Attributes
	Ingredient* ingredient;
	uint32_t quantity;
	//Methods
	IngredientPortion(Ingredient* ingredient, uint32_t quantity);
};