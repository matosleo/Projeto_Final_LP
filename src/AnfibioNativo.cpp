/**
 * @file AnfibioNativo.hpp
 * @brief      Implementação dos métodos da classe AnfibioNativo do namespace
 *             PetFera.
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       03/12/2017
 */

#include "AnfibioNativo.hpp"

using namespace PetFera;

void AnfibioNativo::printAnimal(void){

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
	std::cout << "Ibama:\t\t"    	<< this->get_ibama() << std::endl;
	std::cout << "UF Origem:\t"    	<< this->get_uf_origem() << std::endl;
	std::cout << "Autorizacao:\t"    << this->get_autorizacao() << std::endl;
	std::cout << std::endl;

}