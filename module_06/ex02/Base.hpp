
#ifndef BASE_HPP
# define BASE_HPP

class Base {
	protected:
		std::string m_type;
	public:
		Base(): m_type("Base");
		Base(std::string t_type): m_type(t_type);
		virtual ~Base();
}

class A : Base("A") {
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
