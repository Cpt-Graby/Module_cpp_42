/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 08:07:59 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/24 10:55:33 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string get_string_from_file(std::ifstream & file) {
	std::string		resString("");
	char c = file.get();
	while (file.good())
	{
		resString += c;
		c = file.get();
	}
	return (resString);
}


std::string search_replace(std::string const  &inputStr, std::string const &oldStr, std::string const &newStr) {
	std::string output("");
	int oldStrLength(oldStr.length());
	int inputLength(inputStr.length());

	for (int i = 0; i < inputLength; ) {
		if (inputStr.substr(i, oldStrLength) == oldStr){
			output.append(newStr);
			i += oldStrLength;
		}
		else {
			output += inputStr[i];
			i++;
		}
	}
	return (output);
}

int main (int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "wrong number of arguments" << std::endl;
		return (1);
	}

	std::string		filename(argv[1]);
	std::string		filecpy(filename);
	filecpy.append(".replace");
	/*Initialisation de files stream */
	std::ifstream	file_in(filename);
	std::string		filedata;
	/* verification du fichier et recuperations des lines */
	if (!file_in.good())
	{
		std::cout << "error opening file" << std::endl;
		return (1);
	}
	filedata = get_string_from_file(file_in);
	file_in.close();

	/*Creation de la nouvelle string avec les remplacements */
	std::string	oldArg(argv[2]);
	std::string	newArg(argv[3]);
	std::string	endData;
	endData = search_replace(filedata, oldArg, newArg);

	/*Ecriture dans un fichier de sortie */
	std::ofstream	file_out(filecpy);
	file_out << endData;
	file_out.close();

	return (0);
}
