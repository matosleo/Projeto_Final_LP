/**
 * @file Animais_Silvestres.cpp
 * @brief      Declaração da classe referentes a animais nativos e exoticos do
 *             namespace PetFera, seus atributos e métodos.
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      05/12/2017
 * @date       05/12/2017
 */

#include "Animais_Silvestres.hpp"
#include <sstream>

using namespace PetFera;

AnfibioNativo::AnfibioNativo( std::string & campos_registro )
{

	std::vector< std::string > campos_separados = separar( campos_registro, ';' );

	int 		_id;
	std::string _classe = campos_separados[1];
	std::string _tipo = campos_separados[2];
	std::string _nome = campos_separados[3];
	std::string _cientifico = campos_separados[4];
	char 		_sexo = campos_separados[5][0];
	float 		_tamanho;
	std::string _dieta = campos_separados[7];
	V_pointer 	_veterinario = nullptr;
	T_pointer	_tratador = nullptr;
	std::string _batismo = campos_separados[10];
	int			_total_mudas;
	std::string _ultima_muda = campos_separados[12];
	std::string _ibama = campos_separados[13];
	std::string _uf_origem = campos_separados[14];
	std::string _autorizacao = campos_separados[15];

	std::stringstream temp( campos_separados[0]);
	temp >> _id;

	std::stringstream temp2(campos_separados[6]);
	temp2 >> _tamanho;

	std::stringstream temp3(campos_separados[11]);
	temp3 >> _total_mudas;

	Anfibio( _id, _classe, _tipo, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador
						, _batismo, _total_mudas, _ultima_muda );
	Nativo( _ibama, _uf_origem, _autorizacao );

}