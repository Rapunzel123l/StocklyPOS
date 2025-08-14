#pragma once
#include <vector>
#include "ingredient.h"
class IngredientRepository {
public:
	//Singleton
	static IngredientRepository& getInstance();
	IngredientRepository(const IngredientRepository&) = delete;
	IngredientRepository& operator=(const IngredientRepository&) = delete;
private:
	//Attributes
	std::vector<Ingredient> ingredients;
	//Methods

	//Constructors
	IngredientRepository();
};