#pragma once
#include <unordered_map>
#include <memory>
#include <string>
#include "ingredient.h"
#include "ingredientPortion.h"

class IngredientFactory {
public:
	//Singleton
    static IngredientFactory& getInstance();
    IngredientFactory(const IngredientFactory&) = delete;
    IngredientFactory& operator=(const IngredientFactory&) = delete;
private:
	//Attributes
    uint16_t lastID;
    //Methods
    
    //Constructors
    IngredientFactory();
};