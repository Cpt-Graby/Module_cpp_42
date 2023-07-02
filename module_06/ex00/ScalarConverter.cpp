
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &rhs) {
	if (this != &rhs) {
		this->m_cNumber = rhs.m_cNumber;
		this->m_iNumber = rhs.m_iNumber;
		this->m_fNumber = rhs.m_fNumber;
		this->m_dNumber = rhs.m_dNumber;
	}
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs) {
	if (this != &rhs) {
		this->m_cNumber = rhs.m_cNumber;
		this->m_iNumber = rhs.m_iNumber;
		this->m_fNumber = rhs.m_fNumber;
		this->m_dNumber = rhs.m_dNumber;
	}
	return (*this);
}

ScalarConverter::ScalarConverter(char *arg) : m_input(arg) {
	convert(arg);
}

void ScalarConverter::convert(const std::string &t_input){
	m_input = t_input;
	if (checkSpecialTerm() == 0)
		return ;
	try {
		if (isValidInput(m_input)) 
			throw std::invalid_argument("Erreur de format");
		else if (isInt(m_input) == true) {
			m_iNumber = std::atoi(m_input.c_str());
			printFromInt();
		}
		else if (isChar(m_input) == true) {
			m_cNumber = m_input.c_str()[0];
			printFromChar();
		}
		else if (isDouble(m_input) == true) {
			m_dNumber = std::atof(m_input.c_str());
			printFromDouble();
		}
		else { 
			m_fNumber = static_cast<float>(std::atof(m_input.c_str()));
			printFromFloat();
		}
	}
	catch ( const std::invalid_argument& ia ) {
		std::cerr << "Invalid argument: " << ia.what() << "\n";
		return ;
		}
	return ;
}

int ScalarConverter::checkSpecialTerm() {
	const std::string specialTerm[8] = {"-inff", "-inf", "inff", "inf",
		"+inff", "+inf", "nanf", "nan"};

	for (int i = 0; i < 8; i++) {
		if (m_input == specialTerm[i]) {
			printSpecialTerm(i);
			return (0);
		}   
	}
	return (1);
}

void ScalarConverter::printSpecialTerm(const int indexMatch) {
	std::cout << "char: impossible\n" ;
	std::cout << "int: impossible\n" ;
	switch (indexMatch) {
		case (0): 
		case (1): 
			std::cout << "float : " << -std::numeric_limits<float>::infinity() << "f\n";
			std::cout << "double: " << -std::numeric_limits<double>::infinity() << "\n";
			break;
		case (2): 
		case (3): 
		case (4): 
		case (5): 
			std::cout << "float : " << std::numeric_limits<float>::infinity() << "f\n";
			std::cout << "double: " << std::numeric_limits<double>::infinity() << "\n";
			break;
		case (6): 
		case (7): 
			std::cout << "float : " << std::numeric_limits<float>::quiet_NaN() << "f\n";
			std::cout << "double: " << std::numeric_limits<double>::quiet_NaN() << "\n";
			break;
		default:
			return ;
	}
	return ;
}

void ScalarConverter::printFromInt() {
	if (m_iNumber >=32 && m_iNumber < 127)
		std::cout << "char  : '" << static_cast<char>(m_iNumber) << "'\n";
	else if (m_iNumber < 32 && m_iNumber >= 0)
		std::cout << "char  : Non displayable\n";
	else
		std::cout << "char : Impossible\n";
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "int   : " << m_iNumber << "\n";
	std::cout << "float : " << static_cast<float>(m_iNumber) << "f\n";
	std::cout << "double: " << static_cast<double>(m_iNumber) << std::endl;
	return ;
}

void ScalarConverter::printFromChar() {
	
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "char  : '" << m_cNumber << "'\n";
	std::cout << "int   : " << static_cast<int>(m_cNumber) << "\n";
	std::cout << "float : " << static_cast<float>(m_cNumber) << "f\n";
	std::cout << "double: " << static_cast<double>(m_cNumber) << std::endl;
	return ;
}


void ScalarConverter::printFromFloat() {
	
	// ----------- case char
	if (m_fNumber >= std::numeric_limits<char>::min() &&  
			m_fNumber <= std::numeric_limits<char>::max()) {
		m_cNumber = static_cast<char>(m_fNumber);
		if ( m_cNumber < 32 || m_cNumber > 126)
			std::cout << "char  : Non displayable\n";
		else
			std::cout << "char  : '" << m_cNumber << "'\n";
	}
	else
		std::cout << "char  : impossible \n";
	// ----------- case int
	if (m_fNumber >= std::numeric_limits<int>::min() &&
			m_fNumber < std::numeric_limits<int>::max()) {
		m_iNumber = static_cast<int>(m_fNumber);
		std::cout << "int   : " << m_iNumber << "\n";
	}
	else
		std::cout << "int   : impossible \n";
	// ----------- case float & double
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float : " << m_fNumber << "f\n";
	std::cout << "double: " << static_cast<double>(m_fNumber) << "\n";
	std::cout << std::fixed << std::setprecision(1);
	return ;
}

void ScalarConverter::printFromDouble() {
	std::cout << std::fixed << std::setprecision(1);
	// ----------- case char
	if ( m_dNumber >= std::numeric_limits<char>::min() &&  
			m_dNumber <= std::numeric_limits<char>::max()) {
		m_cNumber = static_cast<char>(m_dNumber);
		if ( m_cNumber < 32 || m_cNumber > 126)
			std::cout << "char  : Non displayable\n";
		else
			std::cout << "char  : '" << m_cNumber << "'\n";
	}
	else
		std::cout << "char  : impossible \n";
	// ----------- case int
	if ( m_dNumber >= std::numeric_limits<int>::min() &&  
			m_dNumber <= std::numeric_limits<int>::max()) {
		m_iNumber = static_cast<int>(m_fNumber);
		std::cout << "int   : " << m_iNumber << "\n";
	}
	else
		std::cout << "int   : impossible \n";
	// ----------- case float
	if (m_dNumber > -std::numeric_limits<float>::max() &&
			m_dNumber <= std::numeric_limits<float>::max()) {
		m_fNumber = static_cast<float>(m_dNumber);
		std::cout << "float : " << m_fNumber << "f\n";
	}
	else {
		std::cout << "float : impossible \n";
	}
	std::cout << "double: " << m_dNumber << "\n";
	return ;
}

bool ScalarConverter::isValidInput(std::string &input) const {
	size_t pos = input.find_last_of("+-");
	if ( pos != std::string::npos && pos != 0)
		return (1);
	pos = input.find_first_of("f");
	if ( pos != input.find_last_of("f"))
		return (1);
	pos = input.find_first_of(".");
	if ( pos != input.find_last_of("."))
		return (1);
	return (input.size() != 1 &&
			input.find_first_not_of("+-0123456789.f'") != std::string::npos);
}

bool ScalarConverter::isChar(std::string &input) const {
	return (input.size() == 1); 
}

bool ScalarConverter::isInt(std::string &input) const {
	if (input.find_first_not_of("+-0123456789") != std::string::npos) 
		return (false);
	if (input.find("-") == 0 && input.compare("-2147483648") > 0) 
		return (false);
	else if (input.compare("2147483647") > 0)
		return (false);
	else
		return (true);
}

bool ScalarConverter::isDouble(std::string &input) const {
	if (input.find_first_not_of("+-0123456789.") != std::string::npos)
		return (false);
	return (true);
}

