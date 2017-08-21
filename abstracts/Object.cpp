#include "includes/Object.hpp"

	#include <iostream>

Object::Object() {

}

Object::~Object() {

}

Object& Object::operator=(Object const &src) {
	this->_id = src._id;
	this->_x = src._x;
	this->_y = src._y;
	return *this;
}

std::string Object::get_id() {
	return _id;
}

int	Object::get_x() {
	return _x;
}

int 	Object::get_y() {
	return _y;
}
