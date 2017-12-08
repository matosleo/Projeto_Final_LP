/**
 * @file Reptil.hpp
 * @brief      Implementação da classe Reptil do namespace PetFera, seus
 *             atributos e métodos
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       07/12/2017
 */

#include "Reptil.hpp"

#include <iostream>
using namespace PetFera;

bool Reptil::is_venenoso( void )
{
	return m_venenoso;
}

std::string Reptil::get_tipo_veneno( void )
{
	return m_tipo_veneno;
}

std::ostream& Reptil::print( std::ostream & _os )
{
	_os << "ID: " << m_id << std::endl
		<< "Classe: " << m_classe << std::endl
		<< "Nome: " << m_nome << std::endl
		<< "Nome Cientifico: " << m_cientifico << std::endl
		<< "Sexo: " << ((m_sexo == 'M') ? "Masculino": "Feminino") << std::endl
		<< "Tamanho: " << m_tamanho << std::endl
		<< "Principal componente da Dieta: " << m_dieta << std::endl
		<< "Veterinário responsável: " << ((m_veterinario == nullptr ) ? m_veterinario->get_nome() : "Não possui") << std::endl
		<< "Tratador responsável: " << ((m_tratador == nullptr ) ? m_tratador->get_nome() : "Não possui") << std::endl
		<< "Nome de Batismo: " << m_batismo << std::endl
		<< "Possui Veneno: " << ((m_venenoso) ? "Sim" :"Não") << std::endl
		<< "Tipo de Veneno: " << m_tipo_veneno << std::endl;

	return _os;
}

void Reptil::printAnimal(void){
	std::cout << std::endl;
	std::cout << ">>>>> Ficha do animal <<<<<" << std::endl;
	std::cout << "ID:\t\t"     		<< this->get_id() << std::endl;
	std::cout << "Classe:\t\t"   	<< this->get_classe() << std::endl;
	std::cout << "Nome:\t\t"     	<< this->get_nome() << std::endl;
	std::cout << "Cientifico:\t"  	<< this->get_cientifico() << std::endl;
	std::cout << "Batismo:\t"    	<< this->get_batismo() << std::endl;
	std::cout << "Dieta:\t\t"    	<< this->get_dieta() << std::endl;
	std::cout << "Sexo:\t\t"    		<< this->get_sexo() << std::endl;
	std::cout << "Veterinario:\t"  	<< (this->get_veterinario()!=nullptr?this->get_veterinario()->get_nome():"") << std::endl;
	std::cout << "Tratador:\t"  		<< (this->get_tratador()!=nullptr?this->get_tratador()->get_nome():"") << std::endl;
	std::cout << "Venenoso:\t"  		<< (this->is_venenoso()?"Sim":"Não") << std::endl;
	std::cout << "Tipo Veneno:\t"  	<< this->get_tipo_veneno() << std::endl;
	std::cout << std::endl;
}