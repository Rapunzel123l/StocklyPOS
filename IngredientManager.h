#pragma once
#include "ingredientFactory.h"
#include "ingredientRepository.h"

class IngredientManager {
public:
	//Singleton
	static IngredientManager& getInstance();
	IngredientManager(const IngredientManager&) = delete;
	IngredientManager& operator=(const IngredientManager&) = delete;
private:
	//Attributes
	/*IngredientFactory factory;
	IngredientRepository repository;*/
	//Methods

	//Constructors
	IngredientManager();
};