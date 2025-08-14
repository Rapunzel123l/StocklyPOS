#include "ingredientManager.h"

IngredientManager& IngredientManager::getInstance() {
	static IngredientManager instance;
	return instance;
}

IngredientManager::IngredientManager() {};