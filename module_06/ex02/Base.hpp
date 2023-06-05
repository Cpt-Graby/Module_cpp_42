
#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <string>

class Base {
	protected:
		std::string m_type;
	public:
		Base(): m_type("Base");
		Base(std::string t_type): m_type(t_type);
		void printType() {std::out << m_type << std::endl;}
		virtual ~Base();
}

class A : Base("A") {
	public:
	~A();
}

class B : Base("B") {
	public:
	~B();
}

class C : Base("C") {
	public:
	~C();
}

#endif
