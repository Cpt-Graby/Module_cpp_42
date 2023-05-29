
#include <iostream>
#include <fstream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
  Intern someRandomIntern;
  Form *randomForm;
  try
  {
    randomForm = someRandomIntern.makeForm("Robotomy. request", "Alexis");
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }
  randomForm = someRandomIntern.makeForm("Robotomy request", "Julien");
  std::cout << *randomForm << std::endl;

  Bureaucrat b("Bob", 1);
  try
  {
    b.signForm(*randomForm);
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }

  try
  {
    b.executeForm(*randomForm);
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }

  delete randomForm;
  return 0;
}
