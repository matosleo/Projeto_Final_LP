/**
 * @file Anfibio.hpp
 * @brief      Implementação da classe Anfibio do namespace PetFera, seus
 *             atributos e métodos
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       07/12/2017
 */

#include "Anfibio.hpp"

using namespace PetFera;

int Anfibio::get_total_mudas( void )
{
	return m_total_mudas;
}

std::string Anfibio::get_ultima_muda( void )
{
	return m_ultima_muda;
}

void Anfibio::set_total_mudas( int new_total )
{
	m_total_mudas = new_total;
}
void Anfibio::set_ultima_muda( std::string new_muda )
{
	m_ultima_muda = new_muda;
}

std::ostream& Anfibio::print( std::ostream & _os )
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
		<< "Número de mudas: " << m_total_mudas << std::endl
		<< "Data da última muda: " << m_ultima_muda << std::endl;

	return _os;
}

void Anfibio::printAnimal(void){
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
	std::cout << "Mudas:\t\t"  		<< this->get_total_mudas() << std::endl;
	std::cout << "Ultima Muda:\t"  		<< this->get_ultima_muda() << std::endl;
	std::cout << std::endl;
}