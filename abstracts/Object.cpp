#include "includes/Object.hpp"

	#include <iostream>

Object::Object() : _pos_x(0), _pos_y(0) {
}

Object::~Object() {
}

Object& Object::operator=(Object const &src) {
	this->_id = src._id;
	this->_x = src._x;
	this->_y = src._y;
	return *this;
}

void Object::hit(std::string object) {
	std::locale loc;

	if (deadly(object))
		std::tolower(_id[0], loc);
}

std::string Object::get_id() {
	return _id;
}

int Object::get_pos_x() {
	return _pos_x;
}

int Object::get_pos_y() {
	return _pos_y;
}

int	Object::get_x() {
	return _x;
}

int 	Object::get_y() {
	return _y;
}
