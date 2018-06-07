/*
Enzo Lautaro Amichetti Quentrequeo

Trabajo Practico 4: STL - Utilización clases Pila, Vector, Lista con template

Crear el proyecto Ejercicio-1.
Utilizando los contenedores de STL stack, queue y list:
 	Cargar una pila con 10 números enteros ascendentes y mostrarlos por pantalla.
 	Cargar una cola con 10 números enteros ascendentes y mostrarlos por pantalla.
 	Cargar una lista con 10 números enteros ascendentes y mostrarlos por pantalla.
Todos los contenedores quedaran vacíos.
*/
#include<iostream>
#include<stack>
#include<queue>
#include<list>
#define length 10

int main(void) {
	std::stack<int> * _stack = new std::stack<int>();
	std::queue<int> * _queue = new std::queue<int>();
	std::list<int> * _list = new std::list<int>();

	int dato = 0;

	for (size_t i = 0; i < length; i++) {
		_stack->push(i);
		_queue->push(i);
		_list->push_front(i);
	}

	std::cout << "Pila: ";
	while (!_stack->empty()) {
		std::cout << _stack->top();
		_stack->pop();
		if(_stack->empty())
			std::cout << std::endl;
		else
			std::cout << ", ";
	}

	std::cout << "Cola: ";
	while (!_queue->empty()) {
		std::cout << _queue->front();
		_queue->pop();
		if (_queue->empty())
			std::cout << std::endl;
		else
			std::cout << ", ";
	}

	std::cout << "Lista: ";
	while (!_list->empty()) {
		std::cout << _list->front();
		_list->pop_front();
		if (_list->empty())
			std::cout << std::endl;
		else
			std::cout << ", ";
	}

	if(_stack != NULL) delete _stack;
	if (_queue != NULL) delete _queue;
	if (_list != NULL) delete _list;

	std::cin.get();
	return 0;
}