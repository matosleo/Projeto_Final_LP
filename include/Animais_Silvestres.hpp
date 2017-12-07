/**
 * @file Animais_Silvestres.hpp
 * @brief      Declaração da classe referentes a animais nativos e exoticos do
 *             namespace PetFera, seus atributos e métodos.
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       03/12/2017
 */

#ifndef ANIMAIS_SILVESTRES_HPP
#define ANIMAIS_SILVESTRES_HPP

#include "Animal_Classes.hpp"
#include "Silvestre.hpp"
#include <sstream>
#include <vector>

using namespace PetFera;
/*
std::vector< std::string > separar ( const std::string& alvo, const char &delimitador )
{
	size_t start = alvo.find_first_not_of(delimitador);
	size_t end = start;

	std::vector< std::string > campos;

	while ( start != std::string::npos )
	{
		end = alvo.find(delimitador, start);

		campos.push_back(alvo.substr(start, end-start));
		
		start = alvo.find_first_not_of(delimitador, end);
	}
	return campos;
}
*/

namespace PetFera
{

	class AnfibioNativo : public Anfibio , Nativo
	{
	public:
		AnfibioNativo( int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico, char _sexo, 
				float _tamanho, std::string _dieta, V_pointer _veterinario, T_pointer _tratador, std::string _batismo,
				int _total_mudas, std::string _ultima_muda , std::string _ibama, 
				std::string _uf_origem, std::string _autorizacao )
			: Anfibio( _id, _classe, _tipo, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador
						, _batismo, _total_mudas, _ultima_muda )
			, Nativo( _ibama, _uf_origem, _autorizacao )
			{	/*	Vazio	*/	}

		AnfibioNativo( std::string & campos_registro );
		/*AnfibioNativo( std::string campos_registro )
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

		}*/

		virtual ~AnfibioNativo(){};
		
	};

	class AnfibioExotico : public Anfibio , Exotico
	{
	public:
		AnfibioExotico( int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico, char _sexo, 
				float _tamanho, std::string _dieta, V_pointer _veterinario, T_pointer _tratador, std::string _batismo,
				int _total_mudas, std::string _ultima_muda, std::string _ibama, std::string _pais_origem )
			: Anfibio( _id, _classe, _tipo, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador
						, _batismo, _total_mudas, _ultima_muda )
			, Exotico( _ibama, _pais_origem )
			{	/*	Vazio	*/	}

		virtual ~AnfibioExotico(){};
		
	};

	class MamiferoNativo : public Mamifero , Nativo
	{
	public:
		MamiferoNativo( int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico, char _sexo, 
				float _tamanho, std::string _dieta, V_pointer _veterinario, T_pointer _tratador, std::string _batismo,
				std::string _cor_pelo, std::string _ibama, std::string _uf_origem, std::string _autorizacao )
			: Mamifero( _id, _classe, _tipo, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador
						, _batismo, _cor_pelo )
			, Nativo( _ibama, _uf_origem, _autorizacao )
			{	/*	Vazio	*/	}

		virtual ~MamiferoNativo(){};
		
	};

	class MamiferoExotico : public Mamifero , Exotico
	{
	public:
		MamiferoExotico( int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico, char _sexo, 
				float _tamanho, std::string _dieta, V_pointer _veterinario, T_pointer _tratador, std::string _batismo,
				std::string _cor_pelo, std::string _ibama, std::string _pais_origem )
			: Mamifero( _id, _classe, _tipo, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador
						, _batismo, _cor_pelo )
			, Exotico( _ibama, _pais_origem )
			{	/*	Vazio	*/	}

		virtual ~MamiferoExotico(){};
		
	};

	class ReptilNativo : public Reptil , Nativo
	{
	public:
		ReptilNativo( int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico, char _sexo, 
				float _tamanho, std::string _dieta, V_pointer _veterinario, T_pointer _tratador, std::string _batismo,
				bool _venenoso, std::string _tipo_veneno, std::string _ibama,
				std::string _uf_origem, std::string _autorizacao )
			: Reptil( _id, _classe, _tipo, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador, 
						_batismo, _venenoso, _tipo_veneno )
			, Nativo( _ibama, _uf_origem, _autorizacao )
			{	/*	Vazio	*/	}

		virtual ~ReptilNativo(){};
		
	};

	class ReptilExotico : public Reptil , Exotico
	{
	public:
		ReptilExotico(int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico, char _sexo, 
				float _tamanho, std::string _dieta, V_pointer _veterinario, T_pointer _tratador, std::string _batismo,
				bool _venenoso, std::string _tipo_veneno, std::string _ibama, std::string _pais_origem )
			: Reptil( _id, _classe, _tipo, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador, 
						_batismo, _venenoso, _tipo_veneno )
			, Exotico( _ibama, _pais_origem )
			{	/*	Vazio	*/	}

		virtual ~ReptilExotico(){};
		
	};

	class AveNativo : public Ave , Nativo
	{
	public:
		AveNativo( int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico, char _sexo, 
				float _tamanho, std::string _dieta, V_pointer _veterinario, T_pointer _tratador, std::string _batismo,
				int _tamanho_bico, int _envergadura, std::string _ibama, std::string _uf_origem, std::string _autorizacao )
			: Ave( _id, _classe, _tipo, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador,
					_batismo, _tamanho_bico, _envergadura )
			, Nativo( _ibama, _uf_origem, _autorizacao )
			{	/*	Vazio	*/	}

		virtual ~AveNativo(){};
		
	};

	class AveExotico : public Ave , Exotico
	{
	public:
		AveExotico(int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico, char _sexo, 
				float _tamanho, std::string _dieta, V_pointer _veterinario, T_pointer _tratador, std::string _batismo,
				int _tamanho_bico, int _envergadura, std::string _ibama, std::string _pais_origem )
			: Ave( _id, _classe, _tipo, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador,
					_batismo, _tamanho_bico, _envergadura )
			, Exotico( _ibama, _pais_origem )
			{	/*	Vazio	*/	}

		virtual ~AveExotico(){};
		
	};
}

#endif