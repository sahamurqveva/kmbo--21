﻿#include "animal.h"
#include "lab2.h"
#include "vehicle.h"
using namespace std;


// Иерархия классов, отражающих животный мир:
//  * 3 уровня (например: Animal - Mammal - Cat), на первом уровне - класс Animal.
//  * В каждом классе должно быть минимум одно поле, отражающее уникальность соответствующего таксона
//    (например: "float vibrissaLength" для класса Cat).
//  * Минимум два дочерних класса для каждого родительского класса.
//  * Создать в main() по 1 экземпляру каждого класса нижнего уровня и выставить в них все доступные поля.
//  * Добавить функцию about() по образу и подобию кода выше.
//  * Реализовать оператор вывода в поток.

int main()
{
	Automobile a1(5.3f);
	cout << "Automobile 1: " << a1 << endl;

	return 0;
}


//  * Д/з: 1. сделать все поля приватными, а доступ к ним сделать через пару методов (геттер и сеттер),
//    например:
//       private: int foo;
//       public: int getFoo() const { return foo; }
//				 void setFoo(int newValue) { foo = newValue; }
//
//		   2. Реализовать конструкторы для всех классов, позволяющие инициализировать поля.
