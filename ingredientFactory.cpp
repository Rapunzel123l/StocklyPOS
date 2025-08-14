#include "ingredientFactory.h"
#include "ingredientPortion.h"

IngredientFactory& IngredientFactory::getInstance() {
	static IngredientFactory instance;
	return instance;
}

IngredientFactory::IngredientFactory() : lastID(0) {};