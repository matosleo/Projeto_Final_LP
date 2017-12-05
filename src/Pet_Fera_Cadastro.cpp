/**
 * @file Pet_Fera_Cadastro.cpp
 * @brief      Implementação da classe Pet_Fera_Cadastro, seus atributos e métodos
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      03/12/2017
 * @date       03/12/2017
 */

#include "Pet_Fera_Cadastro.hpp"
//#include <tuple>
using namespace PetFera;

Pet_Fera_Cadastro::Pet_Fera_Cadastro()
{

}

Pet_Fera_Cadastro::~Pet_Fera_Cadastro()
{

}
/*
std::vector< std::string > Pet_Fera_Cadastro::separar ( const std::string& alvo, const char &delimitador )
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
std::string Pet_Fera_Cadastro::cadastro_comum( std::string _classe, std::string _tipo )
{
	std::cin.clear();
	std::cin.ignore( 200, '\n' );

	std::string _id;
	std::string _nome;
	std::string _cientifico;
	std::string	_sexo;
	std::string	_tamanho;
	std::string _dieta;
	std::string	_id_veterinario;
	std::string	_id_tratador;
	std::string _batismo;

	std::cout << "Numero de Identificacao do Animal (ID): ";
	std::getline( std::cin, _id);
	std::cout << "\nNome: ";
	std::getline( std::cin, _nome );
	std::cout << "\nNome Cientifico: ";
	std::getline( std::cin, _cientifico ),
	std::cout << "\nSexo: ";
	std::getline( std::cin, _sexo);
	std::cout << "\nTamanho: ";
	std::getline( std::cin, _tamanho );
	std::cout << "\nDieta: ";
	std::getline( std::cin, _dieta );
	std::cout << "\nID do Veterinario responsavel: ";
	std::getline( std::cin, _id_veterinario );
	std::cout << "\nID do Tratador responsavel: ";
	std::getline( std::cin, _id_tratador );
	std::cout << "\nNome de batismo: ";
	std::getline( std::cin, _batismo );

	std::string dados;

	dados.append( _id.append( ";" ) );
	dados.append( _classe.append( ";" ) );
	dados.append( _tipo.append( ";" ) );
	dados.append( _nome.append( ";" ) );
	dados.append( _cientifico.append( ";" ) );
	dados.append( _sexo.append( ";" ) );
	dados.append( _tamanho.append( ";" ) );
	dados.append( _dieta.append( ";" ) );
	dados.append( _id_veterinario.append( ";" ) );
	dados.append( _id_tratador.append( ";" ) );
	dados.append( _batismo.append( ";" ) );

	return dados;
}

std::string Pet_Fera_Cadastro::cadastro_nativo( std::string & dados )
{
	std::string _ibama;
	std::string _uf_origem;
	std::string _autorizacao;

	std::cout << "\nID do Ibama: ";
	std::getline( std::cin, _ibama );
	std::cout << "\nEstado de Origem: ";
	std::getline( std::cin, _uf_origem );
	std::cout << "\nAutorizacao do Ibama: ";
	std::getline( std::cin, _autorizacao );

	dados.append( _ibama.append( ";" ) );
	dados.append( _uf_origem.append( ";" ) );
	dados.append( _autorizacao.append( ";" ) );

	return dados;

}

std::string Pet_Fera_Cadastro::cadastro_exotico( std::string & dados )
{

	std::string _ibama;
	std::string _pais_origem;

	std::cout << "\nID do Ibama: ";
	std::getline( std::cin, _ibama );
	std::cout << "\nPais de Origem: ";
	std::getline( std::cin, _pais_origem );

	dados.append( _ibama.append( ";" ) );
	dados.append( _pais_origem.append( ";" ) );

	return dados;

}
/*
std::tuple< int, std::string, std::string, std::string, std::string, char, float, std::string, V_pointer, T_pointer, std::string >
Pet_Fera_Cadastro::converte_cadastro_comum( const std::string & dados_comuns )
{

	std::vector< std::string > campos_separados = separar( dados_comuns, ';' );

	int 		_id;
	std::string _classe = campos_registro[1];
	std::string _tipo = campos_registro[2];
	std::string _nome = campos_registro[3];
	std::string _cientifico = campos_registro[4];
	char 		_sexo = campos_registro[5];
	float 		_tamanho;
	std::string _dieta = campos_registro[7];
	V_pointer 	_veterinario = nullptr;
	T_pointer	_tratador = nullptr;
	std::string _batismo = campos_registro[10];

	std::stringstream temp = campos_registro[0];
	temp >> _id;

	temp = campos_registro[6];
	temp >> _tamanho;

	return std::make_tuple( _id, _classe, _tipo, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador, _batismo );

}

std::tuple< std::string, std::string, std::string >
Pet_Fera_Cadastro::converte_cadastro_nativo( const std::string & dados_comuns )
{

	std::vector< std::string > campos_separados = separar( dados_comuns, ';' );

	std::string _ibama = campos_registro[11];
	std::string _uf_origem = campos_registro[12];
	std::string _autorizacao = campos_registro[13];

	return std::make_tuple( _ibama, _uf_origem, _autorizacao );

}

std::tuple< std::string, std::string >
Pet_Fera_Cadastro::converte_cadastro_exotico( const std::string & dados_comuns )
{

	std::vector< std::string > campos_separados = separar( dados_comuns, ';' );

	std::string _ibama = campos_registro[11];
	std::string _pais_origem = campos_registro[14];
	

	return std::make_tuple( _ibama, _pais_origem );

}
*/
bool Pet_Fera_Cadastro::cadastrar_anfibio( std::string _classe, std::string _tipo )
{

	std::string dados_comuns;

	std::string	_total_mudas;
	std::string _ultima_muda;

	dados_comuns = cadastro_comum( _classe, _tipo );
	
	std::cout << "\nTotal de mudas: ";
	std::getline( std::cin, _total_mudas ); //std::cin >> _total_mudas;
	
	std::cout << "\nData da ultima muda (DD/MM/AAAA): ";
	std::getline( std::cin, _ultima_muda ); //std::cin >> _ultima_muda;


	dados_comuns.append( _total_mudas.append( ";" ) );
	dados_comuns.append( _ultima_muda.append( ";" ) );

	//	std::cout << dados_comuns << std::endl;

	if( _tipo.compare( "Domestico" ) == 0 )
	{


		//std::tuple< int, std::string, std::string, std::string, std::string, char, float, std::string, V_pointer, T_pointer, std::string >
		//td = converte_cadastro_comum( dados_comuns );

		//Animal * anfibio_domestico = new Anfibio( std::get<0>(td), std::get<1>(td), std::get<2>(td), std::get<3>(td)
//												, std::get<4>(td), std::get<5>(td), std::get<6>(td), std::get<7>(td)
//												, std::get<8>(td), std::get<9>(td), std::get<10>(td) );
//
		//m_tabela_animais -> insert( std::get<0>(td), anfibio_domestico );

		/*	Precisa tratar a string dados_comuns, instanciar o objeto e adicionalo no map	*/

	
	} else if( _tipo.compare( "Nativo" ) == 0 )
	{

		dados_comuns = cadastro_nativo( dados_comuns );
		
		AnfibioNativo anfibio ( dados_comuns );

		/*	Precisa tratar a string dados_comuns, instanciar o objeto e adicionalo no map	*/

	} else if( _tipo.compare( "Exotico" ) == 0 )
	{

		dados_comuns = cadastro_exotico( dados_comuns );

		/*	Precisa tratar a string dados_comuns, instanciar o objeto e adicionalo no map	*/

	}

	return true;

}

bool Pet_Fera_Cadastro::cadastrar_mamifero( std::string _classe, std::string _tipo )
{

	std::string dados_comuns;

	std::string _cor_pelo;

	dados_comuns = cadastro_comum( _classe, _tipo );
	
	std::cout << "\nCor do pelo do animal: ";
	std::getline( std::cin, _cor_pelo );
	dados_comuns.append( _cor_pelo );
	

	if( _tipo.compare( "Domestico" ) == 0 )
	{


		/*	Precisa tratar a string dados_comuns, instanciar o objeto e adicionalo no map	*/

	
	} else if( _tipo.compare( "Nativo" ) == 0 )
	{

		dados_comuns = cadastro_nativo( dados_comuns );

		/*	Precisa tratar a string dados_comuns, instanciar o objeto e adicionalo no map	*/

	} else if( _tipo.compare( "Exotico" ) == 0 )
	{

		dados_comuns = cadastro_exotico( dados_comuns );

		/*	Precisa tratar a string dados_comuns, instanciar o objeto e adicionalo no map	*/

	}

	return true;
}

bool Pet_Fera_Cadastro::cadastrar_reptil( std::string _classe, std::string _tipo )
{

	std::string dados_comuns;

	std::string	_venenoso;
	std::string _tipo_veneno;

	dados_comuns = cadastro_comum( _classe, _tipo );
	
	std::cout << "\nAnimal venenoso ( sim ou nao ): ";
	std::getline( std::cin, _venenoso );
	dados_comuns.append( _venenoso.append( ";" ) );

	if( _venenoso.compare( "sim" ) == 0 )
	{
		
		std::cout << "\nTipo do veneno: ";
		std::getline( std::cin, _tipo_veneno );
		dados_comuns.append( _tipo_veneno );

	} else
	{
		_tipo_veneno = "nenhum";
		dados_comuns.append( _tipo_veneno );
	}
	

	if( _tipo.compare( "Domestico" ) == 0 )
	{


		/*	Precisa tratar a string dados_comuns, instanciar o objeto e adicionalo no map	*/

	
	} else if( _tipo.compare( "Nativo" ) == 0 )
	{

		dados_comuns = cadastro_nativo( dados_comuns );

		/*	Precisa tratar a string dados_comuns, instanciar o objeto e adicionalo no map	*/

	} else if( _tipo.compare( "Exotico" ) == 0 )
	{

		dados_comuns = cadastro_exotico( dados_comuns );

		/*	Precisa tratar a string dados_comuns, instanciar o objeto e adicionalo no map	*/

	}

	return true;
}

bool Pet_Fera_Cadastro::cadastrar_ave( std::string _classe, std::string _tipo )
{

	std::string dados_comuns;

	std::string	_tamanho_bico;
	std::string _envergadura;

	dados_comuns = cadastro_comum( _classe, _tipo );
	
	std::cout << "\nTamanho do bico do animal: ";
	std::getline( std::cin, _tamanho_bico );
	dados_comuns.append( _tamanho_bico.append( ";" ) );	

	std::cout << "\nEnvergadura do animal: ";
	std::getline( std::cin, _envergadura );
	dados_comuns.append( _envergadura );	

	if( _tipo.compare( "Domestico" ) == 0 )
	{

		/*	Precisa tratar a string dados_comuns, instanciar o objeto e adicionalo no map	*/

	
	} else if( _tipo.compare( "Nativo" ) == 0 )
	{

		dados_comuns = cadastro_nativo( dados_comuns );

		/*	Precisa tratar a string dados_comuns, instanciar o objeto e adicionalo no map	*/

	} else if( _tipo.compare( "Exotico" ) == 0 )
	{

		dados_comuns = cadastro_exotico( dados_comuns );

		/*	Precisa tratar a string dados_comuns, instanciar o objeto e adicionalo no map	*/

	}

	return true;
}

bool Pet_Fera_Cadastro::cadastrar_funcionario( std::string _funcao )
{

	int 		_id;
	std::string _nome;
	std::string _CPF;
	short 		_idade;
	short 		_tipo_sangue;		// A / B / AB / O
	short 		_fator_RH;			// + / -
	std::string _especialidade;

	std::cout << "Numero de Identificacao do Funcionario (ID): ";
	std::cin >> _id;
	std::cout << "\nNome do Funcionario: ";
	std::cin >> _nome;
	std::cout << "\nCPF do Funcionario: ";
	std::cin >> _CPF;
	std::cout << "\nIdade do Funcionario: ";
	std::cin >> _idade;
	std::cout << "\nTipo sanguineo do Funcionario: ";
	std::cin >> _tipo_sangue;
	std::cout << "\nFator RH do tipo sanguineo: ";
	std::cin >> _fator_RH;
	std::cout << "\nEspecialidade: " << std::endl;
	std::cin >> _especialidade;

	/*		Construir o Funcionario	e adicionalo no map 	*/


	return true;
}

bool Pet_Fera_Cadastro::remover_funcionario( int _id )
{

	return true;
}

bool Pet_Fera_Cadastro::remover_animal( int _id )
{

	/*	Falta implementar a remoção	*/

	return true;
}

bool Pet_Fera_Cadastro::alterar_dados_animais( int _id )
{

	return true;

}

bool Pet_Fera_Cadastro::alterar_dados_funcionarios( int _id )
{

	return true;

}

bool Pet_Fera_Cadastro::consultar_animais( int _id )
{

	return true;

}

bool Pet_Fera_Cadastro::consultar_animais_funcionario( int _id )
{

	return true;

}

bool Pet_Fera_Cadastro::consultar_funcionarios( int _id )
{

	return true;

}

bool Pet_Fera_Cadastro::importar_dados_animais()
{
	return true;
}

bool Pet_Fera_Cadastro::importar_dados_funcionarios()
{
	return true;
}

bool Pet_Fera_Cadastro::exportar_dados_animais()
{
	return true;
}

bool Pet_Fera_Cadastro::exportar_dados_funcionarios()
{
	return true;
}

unsigned int Pet_Fera_Cadastro::quantidade_animais_cadastrados( void )
{
	return m_tabela_animais -> size();
}

unsigned int Pet_Fera_Cadastro::quantidade_funcionarios_cadastrados( void )
{
	return m_tabela_funcionarios -> size();
}