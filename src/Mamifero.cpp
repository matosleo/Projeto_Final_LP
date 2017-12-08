/**
 * @file Mamifero.hpp
 * @brief      Implementação da classe Mamifero do namespace PetFera, seus
 *             atributos e métodos
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       07/12/2017
 */

#include "Mamifero.hpp"

#include <iostream>
using namespace PetFera;

std::string Mamifero::get_cor_pelo( void )
{
	return m_cor_pelo;
}
/*
std::string Mamifero::set_cor_pelo( std::string new_cor )
{
	m_cor_pelo = new_cor;
}
*/
std::ostream& Mamifero::print( std::ostream & _os )
{
	_os << "ID: " << get_id() << std::endl
		<< "Classe: " << get_classe() << std::endl
		<< "Nome: " << get_nome() << std::endl
		<< "Nome Cientifico: " << get_cientifico() << std::endl
		<< "Sexo: " << ((get_sexo() == 'M') ? "Masculino": "Feminino") << std::endl
		<< "Tamanho: " << get_tamanho() << std::endl
		<< "Principal componente da Dieta: " << get_dieta() << std::endl
		<< "Veterinário responsável: " << get_veterinario()->get_nome() << std::endl
		<< "Tratador responsável: " << get_tratador()->get_nome() << std::endl
		<< "Nome de Batismo: " << get_batismo() << std::endl
		<< "Cor do Pelo: " << get_cor_pelo() << std::endl;

	return _os;
}

void Mamifero::printAnimal(void){
	std::cout << std::endl;
	std::cout << ">>>>> Ficha do animal <<<<<" << std::endl;
	std::cout << "ID:\t\t"			<< this->get_id() << std::endl;
	std::cout << "Classe:\t\t"		<< this->get_classe() << std::endl;
	std::cout << "Nome:\t\t"			<< this->get_nome() << std::endl;
	std::cout << "Cientifico:\t"		<< this->get_cientifico() << std::endl;
	std::cout << "Batismo:\t"		<< this->get_batismo() << std::endl;
	std::cout << "Dieta:\t\t"		<< this->get_dieta() << std::endl;
	std::cout << "Sexo:\t\t"    		<< this->get_sexo() << std::endl;
	std::cout << "Veterinario:\t"  	<< (this->get_veterinario()!=nullptr?this->get_veterinario()->get_nome():"") << std::endl;
	std::cout << "Tratador:\t"  		<< (this->get_tratador()!=nullptr?this->get_tratador()->get_nome():"") << std::endl;
	std::cout << "Cor do pelo:\t"	<< this->get_cor_pelo() << std::endl;
	std::cout << std::endl;
}